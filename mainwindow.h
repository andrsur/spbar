#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScreen>
#include <QProcess>
#include <QTimer>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_browser_clicked();
    void on_terminal_clicked();
    void on_telegram_clicked();
    void on_ide_clicked();
    void on_pvctrl_clicked();
    void updateTime();

private:
    Ui::MainWindow *ui;
};
#endif
