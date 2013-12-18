#include "pipeline.h"
#include <iostream>
#include <QDebug>

/*!
 * \brief pipeline::pipeline
 * \param WinID
 * \param Filename
 *  Constructor for the Pipeline, generates all the elements and links them together to form the pipeline
 */
pipeline::pipeline(unsigned long WinID, const char *Filename)
{
    gst_init(NULL,NULL);
    WinID_pipe = WinID;
    pipeline1 = gst_pipeline_new("Video-Player");
    source = gst_element_factory_make("filesrc","video-source");
    DecDem = gst_element_factory_make("decodebin","decoder-demuxer");
    conv = gst_element_factory_make("autovideoconvert","video-format-conv");
    sink = gst_element_factory_make("xvimagesink","video-sink");
    video_queue = gst_element_factory_make("queue","video-queue");

    g_object_set(G_OBJECT(source), "location", Filename,NULL);

    gst_x_overlay_set_xwindow_id(GST_X_OVERLAY(sink), WinID);

    bus= gst_pipeline_get_bus(GST_PIPELINE(pipeline1));
    bus_watch_id = gst_bus_add_watch(bus,bus_call,NULL);
    gst_object_unref(bus);

    gst_bin_add_many(GST_BIN(pipeline1), source,DecDem,conv,sink,video_queue,NULL);
    gst_element_link(source, DecDem);
    gst_element_link_many(video_queue,conv,sink,NULL);
    g_signal_connect(DecDem, "pad-added", G_CALLBACK(on_pad_added), video_queue);
    if(GST_STATE_CHANGE_SUCCESS != gst_element_set_state(pipeline1, GST_STATE_READY)){
        g_print("Pipeline problem initializing pipeline");
    }
}

/*!
 * \brief pipeline::SetPlaying
 *  Sets the Pipeline to playing.
 */
void pipeline::SetPlaying(){
    gst_x_overlay_set_xwindow_id(GST_X_OVERLAY(sink), WinID_pipe);
    GstStateChangeReturn prueba = gst_element_set_state(pipeline1, GST_STATE_PLAYING);
    if(GST_STATE_CHANGE_FAILURE == prueba){
        g_print("Pipeline problem stablishing window");
    }
}

/*!
 * \brief pipeline::SetPaused
 *
 *  Sets the pipeline to paused state.
 */
void pipeline::SetPaused(){
    gst_x_overlay_set_xwindow_id(GST_X_OVERLAY(sink), WinID_pipe);
    gst_element_set_state(pipeline1, GST_STATE_PAUSED);
}

/*!
 * \brief pipeline::SetNull
 *  Sets the pipeline to null state
 */
void pipeline::SetNull(){
    gst_element_set_state(pipeline1, GST_STATE_NULL);
}

/*!
 * \brief pipeline::GetDuration
 * \return the duration of the video
 *
 *  Function to get the duration of a video.
 */
double pipeline::GetDuration(){
    GstFormat format = GST_FORMAT_TIME;
    gint64 MaxTime = -1;
    if (!gst_element_query_duration (pipeline1, &format, &MaxTime)) {
          g_printerr ("Could not query current duration.\n");
    } else {
        return (gdouble)MaxTime / GST_SECOND;
    }

    return 0;
}

/*!
 * \brief pipeline::GetPosition
 * \return the current time position of the video.
 *
 *  Returns the current position of the video.
 */
double pipeline::GetPosition(){
    GstFormat format = GST_FORMAT_TIME;
    gint64 current = -1;
    if (!gst_element_query_position (pipeline1, &format, &current)) {
        g_printerr ("Could not query current duration.\n");
    } else {
        return (gdouble)current / GST_SECOND;
    }
    return 0;
}

/*!
 * \brief pipeline::ChangeSpeed
 * \param value
 *
 *  Changes the playback speed of the video.
 */
void pipeline::ChangeSpeed(int value){
    double ValPer = (double) value/100;
    send_seek_event(ValPer,sink,pipeline1);
}

/*!
 * \brief pipeline::ProveMethod
 *  Gets the framerate of the video.
 */
void pipeline::ProveMethod(){
    GstPad *ProvePad = gst_element_get_static_pad(sink,"sink");
    GstCaps *ProveCaps = gst_pad_get_negotiated_caps(ProvePad);
    gint framerate_num = 0, framerate_den = 0;
    const GstStructure *str;

    str = gst_caps_get_structure(ProveCaps,0);
    gst_structure_get_fraction(str,"framerate",&framerate_num,&framerate_den);
    if(framerate_den && framerate_num){
        FrameRate_Num = framerate_den;
        FrameRate_Den = framerate_num;
    } else
        qDebug()<<"No se pudo determinar el framerate";
}

/*!
 * \brief pipeline::~pipeline
 */
pipeline::~pipeline(){
        gst_object_unref (GST_OBJECT (pipeline1));
}

