/**************************************************************************
** Author: Carlos Enrique Duarte Ortiz
** Company: DuarteCorporation Tutoriales
** WebPage: https://www.youtube.com/c/duartecorporationtutoriales
**
**************************************************************************/
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QProcess>

namespace Ui
{
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void on_explorarToolButton_clicked();
    void on_ejecutarPushButton_clicked();
    void on_quitarPushButton_clicked();
private:
    void makeConnections();

    Ui::Widget *ui;
    QProcess mProc;
};

#endif // WIDGET_H
