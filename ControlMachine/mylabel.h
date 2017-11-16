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
    int type;

public:
    MyLabel(QWidget * parent = 0 );
    ~MyLabel(){}

    void setType(int type);
signals:
    void clicked();

public slots:
    void slotClicked();

protected:
    void mousePressEvent ( QMouseEvent * event ) ;

};

#endif // MYLABEL_H
