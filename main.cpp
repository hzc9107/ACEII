#include "aceval.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AceVal w;
    w.show();
    
    return a.exec();
}
