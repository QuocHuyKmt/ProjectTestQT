#include "ModuleGui.h"
#include <stdio.h>
ModuleGui::ModuleGui()
{
}

void ModuleGui::init_Interface(QWidget *widget)
{
    this->centralWidget = widget;
    this->gridLayout_CentraWidget = new QGridLayout(this->centralWidget);
    this->gridLayout_CentraWidget->setObjectName(QString::fromUtf8("gridLayout_CentraWidget"));
    this->gridLayout_CentraWidget->setHorizontalSpacing(0);
    this->gridLayout_CentraWidget->setVerticalSpacing(0);
    this->gridLayout_CentraWidget->setSpacing(0);
    this->gridLayout_CentraWidget->setContentsMargins(0, 0, 0, 0);

    this->frame_Control = new QFrame(this->centralWidget);
    this->frame_Control->setObjectName(QString::fromUtf8("frame_Control"));
    this->frame_Control->setFrameShape(QFrame::StyledPanel);
    this->frame_Control->setFrameShadow(QFrame::Raised);
    this->frame_Control->setStyleSheet("QFrame{border: 0;}");

    this->gridLayout_Control = new QGridLayout(this->frame_Control);
    this->gridLayout_Control->setObjectName(QString::fromUtf8("gridLayout_Control"));
    this->gridLayout_Control->setHorizontalSpacing(0);
    this->gridLayout_Control->setVerticalSpacing(0);
    this->gridLayout_Control->setSpacing(0);
    this->gridLayout_Control->setContentsMargins(0, 0, 0, 0);


    this->frame_Main = new QFrame(this->centralWidget);
    this->frame_Main->setObjectName(QString::fromUtf8("frame_Main"));
    this->frame_Main->setFrameShape(QFrame::StyledPanel);
    this->frame_Main->setFrameShadow(QFrame::Raised);
    this->frame_Main->setStyleSheet("QFrame{border: 0;}");

    this->gridLayout_Main = new QGridLayout(this->frame_Main);
    this->gridLayout_Main->setObjectName(QString::fromUtf8("gridLayout_Main"));
    this->gridLayout_Main->setHorizontalSpacing(0);
    this->gridLayout_Main->setVerticalSpacing(0);
    this->gridLayout_Main->setSpacing(0);
    this->gridLayout_Main->setContentsMargins(0, 0, 0, 0);


    this->frame_Title = new QFrame(this->centralWidget);
    this->frame_Title->setObjectName(QString::fromUtf8("frame_Title"));
    this->frame_Title->setFrameShape(QFrame::StyledPanel);
    this->frame_Title->setFrameShadow(QFrame::Raised);
    this->frame_Title->setStyleSheet("QFrame{border: 0;}");

    this->gridLayout_Title = new QGridLayout(this->frame_Title);
    this->gridLayout_Title->setObjectName(QString::fromUtf8("gridLayout_Title"));
    this->gridLayout_Title->setHorizontalSpacing(0);
    this->gridLayout_Title->setVerticalSpacing(0);
    this->gridLayout_Title->setSpacing(0);
    this->gridLayout_Title->setContentsMargins(0, 0, 0, 0);


    this->gridLayout_CentraWidget->addWidget(this->frame_Title,   1,3,1,8);
    this->gridLayout_CentraWidget->addWidget(this->frame_Control, 1,1,9,2);
    this->gridLayout_CentraWidget->addWidget(this->frame_Main,    2,3,8,8);

    init_Module_Control();
    init_Module_Title();
    init_Module_Main();
}

void ModuleGui::init_Module_Title()
{
    this->label5 = new MyLabel(this->frame_Title);
    this->label5->setObjectName(QString::fromUtf8("label5"));
    this->label5->setMinimumSize(50, 35);
    this->label5->setAlignment(Qt::AlignCenter);
    label5->setStyleSheet("QLabel {"
                          "background-color:"
                          "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                          "stop:0 rgba(60, 186, 162, 255),"
                          "stop:1 rgba(98, 211, 162, 255))}"
                          "QLabel:disabled {"
                          "background-color: rgb(170, 170, 127)}");
    label5->setStyleSheetHover("QLabel {"
                               "background-color:"
                               "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                               "stop:0 rgba(60, 186, 162, 255),"
                               "stop:1 rgba(0, 122, 162, 255))}");

    this->gridLayout_Title->addWidget(label5,1,1,1,1);

}

void ModuleGui::init_Module_Control()
{
    this->label1 = new MyLabel(this->frame_Control);
    this->label1->setObjectName(QString::fromUtf8("label1"));
    this->label1->setMinimumSize(50, 35);
    this->label1->setAlignment(Qt::AlignCenter);
    this->label1->setText("Icon");
    label1->setStyleSheet("QLabel {"
                          "background-color:"
                          "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                          "stop:0 rgba(60, 186, 162, 255),"
                          "stop:1 rgba(98, 211, 162, 255))}"
                          "QLabel:disabled {"
                          "background-color: rgb(170, 170, 127)}");
    label1->setStyleSheetHover("QLabel {"
                               "background-color:"
                               "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                               "stop:0 rgba(60, 186, 162, 255),"
                               "stop:1 rgba(0, 122, 162, 255))}");
    connect(this->label1, SIGNAL(clicked()), this, SLOT(update()));


    this->label2 = new MyLabel(this->frame_Control);
    this->label2->setObjectName(QString::fromUtf8("label2"));
    this->label2->setMinimumSize(50, 35);
    this->label2->setAlignment(Qt::AlignCenter);
    this->label2->setText("Button1");
    label2->setStyleSheet("QLabel {"
                          "background-color:"
                          "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                          "stop:0 rgba(60, 186, 162, 255),"
                          "stop:1 rgba(98, 211, 162, 255))}"
                          "QLabel:disabled {"
                          "background-color: rgb(170, 170, 127)}");
    label2->setStyleSheetHover("QLabel {"
                               "background-color:"
                               "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                               "stop:0 rgba(60, 186, 162, 255),"
                               "stop:1 rgba(0, 122, 162, 255))}");
    connect(this->label2, SIGNAL(clicked()), this, SLOT(update()));

    this->label3 = new MyLabel(this->frame_Control);
    this->label3->setObjectName(QString::fromUtf8("label3"));
    this->label3->setMinimumSize(50, 35);
    this->label3->setAlignment(Qt::AlignCenter);
    this->label3->setText("Button2");
    label3->setStyleSheet("QLabel {"
                          "background-color:"
                          "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                          "stop:0 rgba(60, 186, 162, 255),"
                          "stop:1 rgba(98, 211, 162, 255))}"
                          "QLabel:disabled {"
                          "background-color: rgb(170, 170, 127)}");
    label3->setStyleSheetHover("QLabel {"
                               "background-color:"
                               "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                               "stop:0 rgba(60, 186, 162, 255),"
                               "stop:1 rgba(0, 122, 162, 255))}");
    connect(this->label3, SIGNAL(clicked()), this, SLOT(update()));

    this->label4 = new MyLabel(this->frame_Control);
    this->label4->setObjectName(QString::fromUtf8("label4"));
    this->label4->setMinimumSize(50, 35);
    this->label4->setAlignment(Qt::AlignCenter);
    this->label4->setText("Button3");
    label4->setStyleSheet("QLabel {"
                          "background-color:"
                          "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                          "stop:0 rgba(60, 186, 162, 255),"
                          "stop:1 rgba(98, 211, 162, 255))}"
                          "QLabel:disabled {"
                          "background-color: rgb(170, 170, 127)}");
    label4->setStyleSheetHover("QLabel {"
                               "background-color:"
                               "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                               "stop:0 rgba(60, 186, 162, 255),"
                               "stop:1 rgba(0, 122, 162, 255))}");
    connect(this->label4, SIGNAL(clicked()), this, SLOT(update()));

    this->label6 = new MyLabel(this->frame_Control);
    this->label6->setObjectName(QString::fromUtf8("label4"));
    this->label6->setMinimumSize(50, 35);
    this->label6->setAlignment(Qt::AlignCenter);
    label6->setStyleSheet("QLabel {"
                          "background-color:"
                          "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                          "stop:0 rgba(60, 186, 162, 255),"
                          "stop:1 rgba(98, 211, 162, 255))}"
                          "QLabel:disabled {"
                          "background-color: rgb(170, 170, 127)}");
    label6->setStyleSheetHover("QLabel {"
                               "background-color:"
                               "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                               "stop:0 rgba(60, 186, 162, 255),"
                               "stop:1 rgba(0, 122, 162, 255))}");
    connect(this->label6, SIGNAL(clicked()), this, SLOT(update()));

    this->gridLayout_Control->addWidget(label1,1,1,6,1);
    this->gridLayout_Control->addWidget(label2,6,1,2,1);
    this->gridLayout_Control->addWidget(label3,8,1,2,1);
    this->gridLayout_Control->addWidget(label4,10,1,2,1);
    this->gridLayout_Control->addWidget(label6,12,1,8,1);

}


void ModuleGui::init_Module_Main()
{

    tableWidget = new QTableWidget(this->frame_Main);
    if (tableWidget->columnCount() < 7)
        tableWidget->setColumnCount(7);
    if (tableWidget->rowCount() < 10)
        tableWidget->setRowCount(10);
    tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
    tableWidget->setRowCount(10);
    tableWidget->setColumnCount(7);

    this->label7 = new MyLabel(this->frame_Title);
    this->label7->setObjectName(QString::fromUtf8("label7"));
    this->label7->setMinimumSize(50, 35);
    this->label7->setAlignment(Qt::AlignCenter);
    this->label7->setText("This is table config machine");
    label7->setStyleSheet("QLabel {"
                          "background-color:"
                          "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                          "stop:0 rgba(60, 186, 162, 255),"
                          "stop:1 rgba(98, 211, 162, 255))}"
                          "QLabel:disabled {"
                          "background-color: rgb(170, 170, 127)}");
    label7->setStyleSheetHover("QLabel {"
                               "background-color:"
                               "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,"
                               "stop:0 rgba(60, 186, 162, 255),"
                               "stop:1 rgba(0, 122, 162, 255))}");


    this->gridLayout_Main->addWidget(label7,1,1,2,1);
    this->gridLayout_Main->addWidget(tableWidget,4,1,6,1);

}



void ModuleGui::update()
{
fprintf(stderr,"1221212 \n");
}

