#ifndef MODULEGUI_H
#define MODULEGUI_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHeaderView>
#include <QMainWindow>
#include <QWidget>

class ModuleGui
{
public:
    ModuleGui();
    void init_Interface(QWidget *widget);
    QWidget *centralWidget;
private:
};

#endif // MODULEGUI_H
