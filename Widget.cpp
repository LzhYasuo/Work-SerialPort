#include "Widget.h"
#include "SerialPortRun.h"
#include <QDebug>
#include <QThread>


Widget::Widget(QWidget* parent)
{
    SerialPortRun::Get()->Init();
//    SerialPort Run::Get()->Close();
}

Widget::~Widget()
{

}

void Widget::closeEvent(QCloseEvent *event)
{
    SerialPortRun::Get()->CloseAll();
}
