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
    Q_OBJECT
public:
    chatWindow *rec;
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
