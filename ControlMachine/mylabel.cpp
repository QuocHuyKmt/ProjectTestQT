#include <QDebug>
#include "mylabel.h"

MyLabel::MyLabel(QWidget * parent )
    :QLabel(parent)
{

}


void MyLabel::mousePressEvent ( QMouseEvent * event )
{
    emit clicked();
}

void MyLabel::enterEvent(QEvent* event)
{
    this->_styleSheet = styleSheet();
    this->setStyleSheet(this->_styleSheetHover);
}

void MyLabel::leaveEvent(QEvent* event)
{
    this->setStyleSheet(this->_styleSheet);
}

void MyLabel::setStyleSheetHover(QString style)
{
    _styleSheetHover  = style;

}
