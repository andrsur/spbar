#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Для X11 - делаем панель док-виджетом
    setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
    setAttribute(Qt::WA_X11NetWmWindowTypeDock);  // ← Это важно!

    setAttribute(Qt::WA_TranslucentBackground);
    setAttribute(Qt::WA_ShowWithoutActivating);
    setFocusPolicy(Qt::NoFocus);

    setGeometry(0, 0, QApplication::primaryScreen()->size().width(), height());

    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_browser_clicked() {
    QProcess::startDetached("zen-browser");
}

void MainWindow::on_terminal_clicked() {
    QProcess::startDetached("alacritty");
}

void MainWindow::on_telegram_clicked() {
    QProcess::startDetached("Telegram");
}

void MainWindow::on_ide_clicked() {
    QProcess::startDetached("vscodium");
}

void MainWindow::on_pvctrl_clicked() {
    QProcess::startDetached("pavucontrol");
}

void MainWindow::updateTime() {
    QString currentTime = QTime::currentTime().toString("HH:mm");
    ui->cTime->setText(currentTime);
}
