#include "chatwindow.h"
#include <QVBoxLayout>
chatWindow::chatWindow() : QWidget()
{
    rec=NULL;
    tField=new QTextEdit;
    tField->setReadOnly(1);
    sendButton=new QPushButton("send");
    nameedit=new QLineEdit;
    edit=new QLineEdit;
    nameedit->setText("Ur name her");
    QVBoxLayout *layout=new QVBoxLayout;
    layout->addWidget(nameedit);
    layout->addWidget(tField);
    layout->addWidget(edit);
    layout->addWidget(sendButton);
    this->setLayout(layout);
    connect(sendButton,SIGNAL(clicked(bool)),this,SLOT(send()));
    connect(sendButton,SIGNAL(clicked(bool)),this,SLOT(clearedit()));
}

chatWindow::chatWindow(chatWindow *c) : QWidget()
{
    tField=new QTextEdit;
    tField->setReadOnly(1);
    sendButton=new QPushButton("send");
    rec=c;
    nameedit=new QLineEdit;
    edit=new QLineEdit;
    nameedit->setText("Ur name her");
    QVBoxLayout *layout=new QVBoxLayout;
    layout->addWidget(nameedit);
    layout->addWidget(tField);
    layout->addWidget(edit);
    layout->addWidget(sendButton);
    this->setLayout(layout);
    connect(sendButton,SIGNAL(clicked(bool)),this,SLOT(send()));
    connect(sendButton,SIGNAL(clicked(bool)),this,SLOT(clearedit()));
}

void chatWindow::append(QString sta)
{
    tField->append(sta);
}

void chatWindow::clear()
{
    tField->append(" ");
}

void chatWindow::send()
{
    rec->clear();
    rec->append("["+nameedit->text()+"]:"+edit->text());
    this->clear();
    this->append("["+nameedit->text()+"]:"+edit->text());



}
void chatWindow::clearedit()
{
    edit->setText(" ");
}

