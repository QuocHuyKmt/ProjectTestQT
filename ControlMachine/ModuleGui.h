#ifndef MODULEGUI_H
#define MODULEGUI_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QFrame>
#include <QGridLayout>
#include <QHeaderView>
#include <QMainWindow>
#include <QMenuBar>
#include <QStatusBar>
#include <QWidget>
#include <QPushButton>
#include <QCommandLinkButton>
#include <mylabel.h>
#include <QObject>
#include <QTableWidget>
class ModuleGui: public QObject

{
    Q_OBJECT
public:
    ModuleGui();
    void init_Interface(QWidget *widget);
    QWidget *centralWidget;
    QGridLayout *gridLayout_CentraWidget;
    QFrame *frame_Control;
    QGridLayout *gridLayout_Control;
    QFrame *frame_Main;
    QGridLayout *gridLayout_Main;
    QFrame *frame_Title;
    QGridLayout *gridLayout_Title;

    QCommandLinkButton *pushButton1;
    QCommandLinkButton *pushButton2;
    QCommandLinkButton *pushButton3;
    QCommandLinkButton *pushButton4;
    QCommandLinkButton *pushButton5;
    QCommandLinkButton *pushButton6;

    MyLabel *label1;
    MyLabel *label2;
    MyLabel *label3;
    MyLabel *label4;
    MyLabel *label5;
    MyLabel *label6;
    MyLabel *label7;

    QTableWidget *tableWidget;

private:
    void init_Module_Control();
    void init_Module_Main();
    void init_Module_Title();

public slots:
    void update();
};

#endif // MODULEGUI_H
