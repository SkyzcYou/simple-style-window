//
// Created by skyzcyou on 1/26/24.
//

#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QPushButton>

// 利用 QStyleOptionButton 绘制自定义按钮示例

class MyButton : QWidget {
    Q_OBJECT

public:
    explicit MyButton(QWidget *widget = nullptr);
    ~MyButton();

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    bool isPress;
    QString text;
};



#endif //MYBUTTON_H
