/**************************************************************************
** Author: Carlos Enrique Duarte Ortiz
** Company: DuarteCorporation Tutoriales
** WebPage: https://www.youtube.com/c/duartecorporationtutoriales
**
**************************************************************************/
#include "Widget.h"
#include "ui_Widget.h"

Widget::Widget(const Arguments &args, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    const int argc = args.get_argc();
    char **argv = args.get_argv();
    ui->argcSpinBox->setMinimum(0);
    ui->argcSpinBox->setMaximum(INT_MAX);
    ui->argcSpinBox->setValue(argc);
    QStringList myargs;
    for (int x = 0; x < argc; ++x) {
        const QString arg = argv[x];
        myargs << arg;
    }
    ui->argvLineEdit->setText(myargs.join(','));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_okPushButton_clicked()
{
    close();
}
