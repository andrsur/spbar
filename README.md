# SPBAR for linux
## how to install
* clone this repository on youre pc
```
git clone https://github.com/andrsur/spbar.git
```
* move spbar from builden to /usr/bin
```
sudo mv spar/builden/spbar /usr/bin/.
```
* add spbar to autostart in
### if you use xfce or any DE create invisible panel under spbar

## How to customize
* install qtcreator
* export project in qtcreator
* double click to mainwindow.ui
* edit panel
* edit code to it work
### to add launch icon use

* in mainwindow.cpp
```
	void MainWindow::on_[widget in ui file]_clicked() {
		QProcess::startDetached("[command]");
	} 
```
* in mainwindow.h
```
private slots:
    void on_[widget in ui file]_clicked();
```
### if you what more customization read C++ QT documentation








