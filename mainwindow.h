#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void cekilis();

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
    int temp, deger,tutan;
    int sonuc[10], girilen_deger[10];
};

#endif // MAINWINDOW_H
