#include "snakedlg.h"
#include <QtWidgets/QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SnakeDlg w;
    w.show();

    return a.exec();
}
