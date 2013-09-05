#ifndef ACEVAL_H
#define ACEVAL_H

#include <QMainWindow>
class pipeline;
namespace Ui {
class AceVal;
}

class AceVal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit AceVal(QWidget *parent = 0);
    ~AceVal();
    pipeline *Pipeline;
    
private slots:
    void on_toolButton_3_clicked();

    void on_toolButton_4_clicked();

    void on_toolButton_5_clicked();

    void on_spinBox_2_valueChanged(int arg1);

    void OnExit();

    void OnOpen();

private:
    Ui::AceVal *ui;
    void CusLay(void);
    void GstIFace(const char *filename);
    void ConnectMenu(void);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
};

#endif // ACEVAL_H
