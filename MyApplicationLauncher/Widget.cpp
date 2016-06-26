/**************************************************************************
** Author: Carlos Enrique Duarte Ortiz
** Company: DuarteCorporation Tutoriales
** WebPage: https://www.youtube.com/c/duartecorporationtutoriales
**
**************************************************************************/
#include "Widget.h"
#include "ui_Widget.h"
#include <QFileDialog>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    makeConnections();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_explorarToolButton_clicked()
{
    auto filename = QFileDialog::getOpenFileName(this,
        tr("Abrir"), "/", "Exe files (*.exe)");
    if (filename.isEmpty()) {
        return;
    }
    ui->ejecutableLineEdit->setText(filename);
}

void Widget::on_ejecutarPushButton_clicked()
{
    auto ejecutable = ui->ejecutableLineEdit->text();
    auto argumentos = ui->argumentosLineEdit->text().split(',');
    mProc.setProgram(ejecutable);
    mProc.setArguments(argumentos);
    mProc.start();
}

void Widget::on_quitarPushButton_clicked()
{
    close();
}

void Widget::makeConnections()
{
    connect(&mProc, &QProcess::started, [&]()
    {
        QMessageBox::information(this, tr("Mensaje"), tr("Iniciado..."));
    });

    auto finishedSignal = static_cast<void (QProcess::*)(int)>
                (&QProcess::finished);

    connect(&mProc, finishedSignal, [&](int exitCode)
    {
        QMessageBox::information(this, tr("Mensaje"),
                    tr("Finalizado con código: %1").arg(exitCode));
    });
}
