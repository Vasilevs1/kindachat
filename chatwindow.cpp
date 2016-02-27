#include "chatwindow.h"
#include <QVBoxLayout>
chatWindow::chatWindow() : QWidget()
{
    rec=NULL;
    tField=new QTextEdit;
    sendButton=new QPushButton("send");
    QVBoxLayout *layout=new QVBoxLayout;
    layout->addWidget(tField);
    layout->addWidget(sendButton);
    this->setLayout(layout);
    connect(sendButton,SIGNAL(clicked(bool)),this,SLOT(send()));
}

chatWindow::chatWindow(chatWindow *c) : QWidget()
{
    tField=new QTextEdit;
    sendButton=new QPushButton("send");
    rec=c;
    QVBoxLayout *layout=new QVBoxLayout;
    layout->addWidget(tField);
    layout->addWidget(sendButton);
    this->setLayout(layout);
    connect(sendButton,SIGNAL(clicked(bool)),this,SLOT(send()));
}
void chatWindow::settext(QString st)
{
    tField->setText(st);
}

void chatWindow::send()
{
    rec->settext(tField->toPlainText());
}

