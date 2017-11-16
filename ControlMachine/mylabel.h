#ifndef MYLABEL_H
#define MYLABEL_H

#include <QMouseEvent>
#include <QLabel>

#define SHOW_NONE           0x00
#define SHOW_RECEIVE        0x01
#define SHOW_TRANSFER       0x02

class MyLabel : public QLabel
{
    Q_OBJECT
private:
    QString _styleSheetHover;
    QString _styleSheet;

public:
    MyLabel(QWidget * parent = 0 );
    ~MyLabel(){}
    void setStyleSheetHover(QString style);
signals:
    void clicked();
    void mouseHover(bool isHover);

protected:
    void mousePressEvent ( QMouseEvent * event ) ;
    void enterEvent(QEvent* event);
    void leaveEvent(QEvent* event);


};

#endif // MYLABEL_H
