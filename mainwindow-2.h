#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "scribblearea.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_eraser_clicked();

    void on_redPaint_clicked();

    void on_purplePaint_clicked();

    void on_bluePaint_clicked();

    void on_greenPaint_clicked();

    void on_yellowPaint_clicked();

    void on_cryEmoji_clicked();

    void on_smileEmoji_clicked();

    void on_excitedEmoji_clicked();

    void on_surprisedEmoji_clicked();

    void on_disappointedEmoji_clicked();

    void on_large_clicked();

    void on_medium_clicked();

    void on_small_clicked();

private:
    Ui::MainWindow *ui;
    ScribbleArea *scribbleArea;
};

#endif // MAINWINDOW_H
