#include <QDebug>
#include "transferform.h"
#include "receiveform.h"
#include "mylabel.h"

MyLabel::MyLabel(QWidget * parent )
    :QLabel(parent)
{
    this->type = SHOW_NONE;
    //connect( this, SIGNAL( clicked() ), this, SLOT( slotClicked() ) );
}

void MyLabel::slotClicked()
{
    if(this->type == SHOW_RECEIVE)
    {
        qDebug()<<"---------------------------------------------Clicked Receive";

    }
    else if(this->type == SHOW_TRANSFER)
    {
        qDebug()<<"---------------------------------------------Clicked Transfer";
    }
}

void MyLabel::mousePressEvent ( QMouseEvent * event )
{
    emit clicked();
}

void MyLabel::setType(int type)
{
    this->type = type;
}
