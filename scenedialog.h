#ifndef SCENEDIALOG_H
#define SCENEDIALOG_H

#include <QDialog>
#include<QAbstractButton>
namespace Ui {
class SceneDialog;
}

class SceneDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SceneDialog(QWidget *parent = 0);
    ~SceneDialog();
    QString GetLabel();
    
private slots:

private:
    Ui::SceneDialog *ui;

};

#endif // SCENEDIALOG_H
