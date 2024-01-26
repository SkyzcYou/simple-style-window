//
// Created by skyzcyou on 1/24/24.
//

#include "StyleWindow.h"

#include <QPushButton>
#include <QGridLayout>
#include <QGroupBox>

StyleWindow::StyleWindow() {
    QPushButton* styledButton = new QPushButton("Styled Button", this);
    QGridLayout* layout = new QGridLayout(this);
    layout->addWidget(styledButton, 0, 0);
    QGroupBox* styleBox = new QGroupBox(tr("A simple style button"), this);
    styleBox->setLayout(layout);

    QGridLayout* outerLayout = new QGridLayout;
    outerLayout->addWidget(styleBox, 0, 0);
    setLayout(outerLayout);
    setWindowTitle(tr("Style Plugin Example"));
}
