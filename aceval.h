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
	void CusLay(void);
    void GstIFace(void);
    pipeline *Pipeline;
    
private slots:
    void on_toolButton_3_clicked();

    void on_toolButton_4_clicked();

    void on_toolButton_5_clicked();

private:
    Ui::AceVal *ui;
};

#endif // ACEVAL_H
