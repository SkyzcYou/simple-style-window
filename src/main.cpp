#include <QApplication>
#include <QStyleFactory>
#include <QDebug>
#include <QStyle>
#include <QLoggingCategory>

#include "StyleWindow.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QLoggingCategory::defaultCategory()->setEnabled(QtDebugMsg, true);

    // 获取当前的style
    QStyle* style = QApplication::style();

    QStringList keys = QStyleFactory::keys();
    foreach(QString val, keys) {
        qDebug() << val;
    }

    QApplication::setStyle(QStyleFactory::create("simplestyle"));

    QStyle* style1 = QApplication::style();
    StyleWindow window;
    window.resize(200, 50);
    window.show();

    return app.exec();
}
