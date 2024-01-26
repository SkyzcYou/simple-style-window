//
// Created by skyzcyou on 1/26/24.
//

#include "MyButton.h"
#include "QMouseEvent"
#include <QStyleOptionButton>
#include <QPainter>

MyButton::MyButton(QWidget *parent) :
    QWidget(parent)
{
    text = "This is a Button";
    isPress = false;
    update();
}

MyButton::~MyButton() {
}

void MyButton::paintEvent(QPaintEvent* event) {
    QStyleOptionButton option;
    option.initFrom(this);
    option.state |= isPress ? QStyle::State_Sunken : QStyle::State_Raised;
    option.text = text;
    QPainter painter(this);
    QWidget::paintEvent(event);
    style()->drawControl(QStyle::CE_PushButton, &option, &painter, this);
}

void MyButton::mousePressEvent(QMouseEvent* event) {
    if (event->buttons() & Qt::LeftButton) {
        isPress = true;
        update();
    }
}

void MyButton::mouseReleaseEvent(QMouseEvent* event) {
    isPress = false;
    update();
}


