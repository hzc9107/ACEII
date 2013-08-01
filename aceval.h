#ifndef ACEVAL_H
#define ACEVAL_H

#include <QMainWindow>

namespace Ui {
class AceVal;
}

class AceVal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit AceVal(QWidget *parent = 0);
    ~AceVal();
    
private:
    Ui::AceVal *ui;
};

#endif // ACEVAL_H
