/**************************************************************************
** Author: Carlos Enrique Duarte Ortiz
** Company: DuarteCorporation Tutoriales
** WebPage: https://www.youtube.com/c/duartecorporationtutoriales
**
**************************************************************************/
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "Arguments.h"

namespace Ui
{
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(const Arguments &args, QWidget *parent = nullptr);
    ~Widget();
private slots:
    void on_okPushButton_clicked();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
