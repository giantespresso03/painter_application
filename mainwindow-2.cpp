#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scribbleArea(new ScribbleArea)
{
    ui->setupUi(this);
    ui -> verticalLayout -> addWidget(scribbleArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_eraser_clicked()
{
    scribbleArea->ChangeColor(Qt::white);
}

void MainWindow::on_redPaint_clicked()
{
    scribbleArea -> ChangeColor(Qt::red);
}

void MainWindow::on_purplePaint_clicked()
{
    scribbleArea -> ChangeColor(Qt::black);
}

void MainWindow::on_bluePaint_clicked()
{
    scribbleArea -> ChangeColor(Qt::blue);
}

void MainWindow::on_greenPaint_clicked()
{
    scribbleArea -> ChangeColor(Qt::green);
}

void MainWindow::on_yellowPaint_clicked()
{
    scribbleArea -> ChangeColor(Qt::yellow);
}

void MainWindow::on_cryEmoji_clicked()
{
    scribbleArea -> ChangeEmoji("(;_;)");
}

void MainWindow::on_smileEmoji_clicked()
{
    scribbleArea -> ChangeEmoji("(^_^)");
}

void MainWindow::on_excitedEmoji_clicked()
{
    scribbleArea -> ChangeEmoji("(>_<)");
}

void MainWindow::on_surprisedEmoji_clicked()
{
    scribbleArea -> ChangeEmoji("(0o0)");
}

void MainWindow::on_disappointedEmoji_clicked()
{
    scribbleArea -> ChangeEmoji("(-_-)");
}

void MainWindow::on_large_clicked()
{
    scribbleArea -> ChangePenWidth(50);
}

void MainWindow::on_medium_clicked()
{
    scribbleArea -> ChangePenWidth(25);
}

void MainWindow::on_small_clicked()
{
    scribbleArea -> ChangePenWidth(2);
}
