#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QLineEdit>
class chatWindow : public QWidget
{
    QTextEdit *tField;
    QPushButton *sendButton;
    QLineEdit *nameedit;
    QLineEdit *edit;
    chatWindow *rec;
    Q_OBJECT
public:
    void setrekt(chatWindow *receiver);
    chatWindow();
    chatWindow(chatWindow *c);
    void clear();
    void append(QString);


signals:

public slots:
    void send();
    void clearedit();
};

#endif // CHATWINDOW_H
