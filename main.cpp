#include <QApplication>
#include "chatwindow.h"
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    chatWindow ch;
    chatWindow ch1;
    ch.rec=&ch1;
    ch1.rec=&ch;
    ch.show();
    ch1.show();
    return app.exec();
}


