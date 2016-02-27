#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
class chatWindow : public QWidget
{
    QTextEdit *tField;
    QPushButton *sendButton;

    Q_OBJECT
public:
    chatWindow *rec;
    chatWindow();
    chatWindow(chatWindow *c);
    void settext(QString);

signals:

public slots:
    void send();
};

#endif // CHATWINDOW_H
