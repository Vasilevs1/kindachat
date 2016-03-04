#include <QApplication>
#include "chatwindow.h"
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    chatWindow ch;
    chatWindow ch1;
    ch.setrekt(&ch1);
    ch1.setrekt(&ch);
    ch.show();
    ch1.show();
    return app.exec();
}


