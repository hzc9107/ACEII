#ifndef PIPELINE_H
#define PIPELINE_H

#include <gst/gst.h>
#include <glib.h>
#include <gst/interfaces/xoverlay.h>

class pipeline
{
public:
    pipeline(unsigned long WinID, const char *Filename);
    ~pipeline();
    void SetPlaying(void);
    void SetPaused(void);
    void SetNull(void);
    double GetDuration(void);
    double GetPosition(void);
    void ChangeSpeed(int value);
    void ProveMethod();
    int FrameRate_Den, FrameRate_Num;
private:
    GMainLoop *loop;
    GstElement *pipeline1, *source, *DecDem, *conv, *sink, *video_queue, *vrate, *filter;
    GstBus *bus;
    guint bus_watch_id;
    unsigned long WinID_pipe;
    static gboolean bus_call(GstBus *bus,
                             GstMessage *msg,
                             gpointer data){
        GMainLoop *loop = (GMainLoop *) data;
        switch (GST_MESSAGE_TYPE (msg)) {
            case GST_MESSAGE_EOS:
                g_print("End of stream\n");
            default:
                return true;
        }
    }

    static void on_pad_added(GstElement *element,
                             GstPad *pad,
                             gpointer data){
        GstPad *sinkpad;
        GstElement *decoder = (GstElement *) data;
        sinkpad = gst_element_get_static_pad(decoder, "sink");
        gst_pad_link(pad, sinkpad);
        gst_object_unref(sinkpad);
    }

    static void send_seek_event(double rate, GstElement *sink, GstElement *pipeline){
        gint64 position;
        GstFormat format = GST_FORMAT_TIME;
        GstEvent *seek_event;

        if (!gst_element_query_position (pipeline, &format, &position)) {
           g_printerr ("Unable to retrieve current position.\n");
        }

        if(rate>0){
            seek_event = gst_event_new_seek(rate,GST_FORMAT_TIME,(GstSeekFlags) (GST_SEEK_FLAG_FLUSH | GST_SEEK_FLAG_ACCURATE) , GST_SEEK_TYPE_SET, position, GST_SEEK_TYPE_NONE,0);
        } else {
            seek_event = gst_event_new_seek (rate, GST_FORMAT_TIME, GST_SEEK_FLAG_FLUSH , GST_SEEK_TYPE_SET, 0, GST_SEEK_TYPE_SET, position);
        }

        gst_element_send_event(sink,seek_event);
    }
};

#endif // PIPELINE_H
