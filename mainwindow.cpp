#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");
    ui->textEdit_4->setText("");
    ui->textEdit_5->setText("");
    ui->textEdit_6->setText("");
    ui->textEdit_7->setText("");
    ui->textEdit_8->setText("");
    ui->textEdit_9->setText("");
    ui->textEdit_10->setText("");
    ui->textEdit_11->setText("---");
    ui->textEdit_12->setText("---");
    ui->textEdit_13->setText("---");
    ui->textEdit_14->setText("---");
    ui->textEdit_15->setText("---");
    ui->textEdit_16->setText("---");
    ui->textEdit_17->setText("---");
    ui->textEdit_18->setText("---");
    ui->textEdit_19->setText("---");
    ui->textEdit_20->setText("---");
    switch(arg1){
    case 1: {ui->textEdit->setEnabled(true);
            ui->textEdit_2->setEnabled(false);
            ui->textEdit_3->setEnabled(false);
            ui->textEdit_4->setEnabled(false);
            ui->textEdit_5->setEnabled(false);
            ui->textEdit_6->setEnabled(false);
            ui->textEdit_7->setEnabled(false);
            ui->textEdit_8->setEnabled(false);
            ui->textEdit_9->setEnabled(false);
            ui->textEdit_10->setEnabled(false);
        break;}
    case 2: {ui->textEdit->setEnabled(true);
            ui->textEdit_2->setEnabled(true);
            ui->textEdit_3->setEnabled(false);
            ui->textEdit_4->setEnabled(false);
            ui->textEdit_5->setEnabled(false);
            ui->textEdit_6->setEnabled(false);
            ui->textEdit_7->setEnabled(false);
            ui->textEdit_8->setEnabled(false);
            ui->textEdit_9->setEnabled(false);
            ui->textEdit_10->setEnabled(false);
        break;}
    case 3: {ui->textEdit->setEnabled(true);
            ui->textEdit_2->setEnabled(true);
            ui->textEdit_3->setEnabled(true);
            ui->textEdit_4->setEnabled(false);
            ui->textEdit_5->setEnabled(false);
            ui->textEdit_6->setEnabled(false);
            ui->textEdit_7->setEnabled(false);
            ui->textEdit_8->setEnabled(false);
            ui->textEdit_9->setEnabled(false);
            ui->textEdit_10->setEnabled(false);
        break;}
    case 4: {ui->textEdit->setEnabled(true);
            ui->textEdit_2->setEnabled(true);
            ui->textEdit_3->setEnabled(true);
            ui->textEdit_4->setEnabled(true);
            ui->textEdit_5->setEnabled(false);
            ui->textEdit_6->setEnabled(false);
            ui->textEdit_7->setEnabled(false);
            ui->textEdit_8->setEnabled(false);
            ui->textEdit_9->setEnabled(false);
            ui->textEdit_10->setEnabled(false);
        break;}
    case 5: {ui->textEdit->setEnabled(true);
            ui->textEdit_2->setEnabled(true);
            ui->textEdit_3->setEnabled(true);
            ui->textEdit_4->setEnabled(true);
            ui->textEdit_5->setEnabled(true);
            ui->textEdit_6->setEnabled(false);
            ui->textEdit_7->setEnabled(false);
            ui->textEdit_8->setEnabled(false);
            ui->textEdit_9->setEnabled(false);
            ui->textEdit_10->setEnabled(false);
        break;}
    case 6: {ui->textEdit->setEnabled(true);
            ui->textEdit_2->setEnabled(true);
            ui->textEdit_3->setEnabled(true);
            ui->textEdit_4->setEnabled(true);
            ui->textEdit_5->setEnabled(true);
            ui->textEdit_6->setEnabled(true);
            ui->textEdit_7->setEnabled(false);
            ui->textEdit_8->setEnabled(false);
            ui->textEdit_9->setEnabled(false);
            ui->textEdit_10->setEnabled(false);
        break;}
    case 7: {ui->textEdit->setEnabled(true);
            ui->textEdit_2->setEnabled(true);
            ui->textEdit_3->setEnabled(true);
            ui->textEdit_4->setEnabled(true);
            ui->textEdit_5->setEnabled(true);
            ui->textEdit_6->setEnabled(true);
            ui->textEdit_7->setEnabled(true);
            ui->textEdit_8->setEnabled(false);
            ui->textEdit_9->setEnabled(false);
            ui->textEdit_10->setEnabled(false);
        break;}
    case 8: {ui->textEdit->setEnabled(true);
            ui->textEdit_2->setEnabled(true);
            ui->textEdit_3->setEnabled(true);
            ui->textEdit_4->setEnabled(true);
            ui->textEdit_5->setEnabled(true);
            ui->textEdit_6->setEnabled(true);
            ui->textEdit_7->setEnabled(true);
            ui->textEdit_8->setEnabled(true);
            ui->textEdit_9->setEnabled(false);
            ui->textEdit_10->setEnabled(false);
        break;}
    case 9: {ui->textEdit->setEnabled(true);
            ui->textEdit_2->setEnabled(true);
            ui->textEdit_3->setEnabled(true);
            ui->textEdit_4->setEnabled(true);
            ui->textEdit_5->setEnabled(true);
            ui->textEdit_6->setEnabled(true);
            ui->textEdit_7->setEnabled(true);
            ui->textEdit_8->setEnabled(true);
            ui->textEdit_9->setEnabled(true);
            ui->textEdit_10->setEnabled(false);
        break;}
    case 10: {ui->textEdit->setEnabled(true);
             ui->textEdit_2->setEnabled(true);
             ui->textEdit_3->setEnabled(true);
             ui->textEdit_4->setEnabled(true);
             ui->textEdit_5->setEnabled(true);
             ui->textEdit_6->setEnabled(true);
             ui->textEdit_7->setEnabled(true);
             ui->textEdit_8->setEnabled(true);
             ui->textEdit_9->setEnabled(true);
             ui->textEdit_10->setEnabled(true);
        break;}
    }
}

void MainWindow::cekilis(){

    girilen_deger[0] = ui->textEdit->toPlainText().toInt();
    girilen_deger[1] = ui->textEdit_2->toPlainText().toInt();
    girilen_deger[2] = ui->textEdit_3->toPlainText().toInt();
    girilen_deger[3] = ui->textEdit_4->toPlainText().toInt();
    girilen_deger[4] = ui->textEdit_5->toPlainText().toInt();
    girilen_deger[5] = ui->textEdit_6->toPlainText().toInt();
    girilen_deger[6] = ui->textEdit_7->toPlainText().toInt();
    girilen_deger[7] = ui->textEdit_8->toPlainText().toInt();
    girilen_deger[8] = ui->textEdit_9->toPlainText().toInt();
    girilen_deger[9] = ui->textEdit_10->toPlainText().toInt();

    deger = ui->spinBox->value();
    tutan=0;
    for(int i=0; i<deger; i++){
        temp = qrand() % 100;
        sonuc[i] = temp;
        if(girilen_deger[i]>=100){
            QMessageBox::warning(this,"Uyarı","Lütfen 0-100 arasında sayı giriniz.");
            ui->textEdit->setText("");
            ui->textEdit_2->setText("");
            ui->textEdit_3->setText("");
            ui->textEdit_4->setText("");
            ui->textEdit_5->setText("");
            ui->textEdit_6->setText("");
            ui->textEdit_7->setText("");
            ui->textEdit_8->setText("");
            ui->textEdit_9->setText("");
            ui->textEdit_11->setText("---");
            ui->textEdit_12->setText("---");
            ui->textEdit_13->setText("---");
            ui->textEdit_14->setText("---");
            ui->textEdit_15->setText("---");
            ui->textEdit_16->setText("---");
            ui->textEdit_17->setText("---");
            ui->textEdit_18->setText("---");
            ui->textEdit_19->setText("---");
            ui->textEdit_20->setText("---");
            break;
        }
        else{
            if(girilen_deger[i] == sonuc[i]){
                tutan++;
            }

            switch (deger) {
            case 1: { ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText("---");
                      ui->textEdit_13->setText("---");
                      ui->textEdit_14->setText("---");
                      ui->textEdit_15->setText("---");
                      ui->textEdit_16->setText("---");
                      ui->textEdit_17->setText("---");
                      ui->textEdit_18->setText("---");
                      ui->textEdit_19->setText("---");
                      ui->textEdit_20->setText("---");
                      break;
            }
            case 2: { ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText(QString::number(sonuc[1]));
                      ui->textEdit_13->setText("---");
                      ui->textEdit_14->setText("---");
                      ui->textEdit_15->setText("---");
                      ui->textEdit_16->setText("---");
                      ui->textEdit_17->setText("---");
                      ui->textEdit_18->setText("---");
                      ui->textEdit_19->setText("---");
                      ui->textEdit_20->setText("---");
                      break;
            }
            case 3: { ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText(QString::number(sonuc[1]));
                      ui->textEdit_13->setText(QString::number(sonuc[2]));
                      ui->textEdit_14->setText("---");
                      ui->textEdit_15->setText("---");
                      ui->textEdit_16->setText("---");
                      ui->textEdit_17->setText("---");
                      ui->textEdit_18->setText("---");
                      ui->textEdit_19->setText("---");
                      ui->textEdit_20->setText("---");
                      break;
            }
            case 4: { ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText(QString::number(sonuc[1]));
                      ui->textEdit_13->setText(QString::number(sonuc[2]));
                      ui->textEdit_14->setText(QString::number(sonuc[3]));
                      ui->textEdit_15->setText("---");
                      ui->textEdit_16->setText("---");
                      ui->textEdit_17->setText("---");
                      ui->textEdit_18->setText("---");
                      ui->textEdit_19->setText("---");
                      ui->textEdit_20->setText("---");
                      break;
            }
            case 5: { ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText(QString::number(sonuc[1]));
                      ui->textEdit_13->setText(QString::number(sonuc[2]));
                      ui->textEdit_14->setText(QString::number(sonuc[3]));
                      ui->textEdit_15->setText(QString::number(sonuc[4]));
                      ui->textEdit_16->setText("---");
                      ui->textEdit_17->setText("---");
                      ui->textEdit_18->setText("---");
                      ui->textEdit_19->setText("---");
                      ui->textEdit_20->setText("---");
                      break;
            }
            case 6: { ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText(QString::number(sonuc[1]));
                      ui->textEdit_13->setText(QString::number(sonuc[2]));
                      ui->textEdit_14->setText(QString::number(sonuc[3]));
                      ui->textEdit_15->setText(QString::number(sonuc[4]));
                      ui->textEdit_16->setText(QString::number(sonuc[5]));
                      ui->textEdit_17->setText("---");
                      ui->textEdit_18->setText("---");
                      ui->textEdit_19->setText("---");
                      ui->textEdit_20->setText("---");
                      break;
            }
            case 7: { ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText(QString::number(sonuc[1]));
                      ui->textEdit_13->setText(QString::number(sonuc[2]));
                      ui->textEdit_14->setText(QString::number(sonuc[3]));
                      ui->textEdit_15->setText(QString::number(sonuc[4]));
                      ui->textEdit_16->setText(QString::number(sonuc[5]));
                      ui->textEdit_17->setText(QString::number(sonuc[6]));
                      ui->textEdit_18->setText("---");
                      ui->textEdit_19->setText("---");
                      ui->textEdit_20->setText("---");
                      break;
            }
            case 8: { ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText(QString::number(sonuc[1]));
                      ui->textEdit_13->setText(QString::number(sonuc[2]));
                      ui->textEdit_14->setText(QString::number(sonuc[3]));
                      ui->textEdit_15->setText(QString::number(sonuc[4]));
                      ui->textEdit_16->setText(QString::number(sonuc[5]));
                      ui->textEdit_17->setText(QString::number(sonuc[6]));
                      ui->textEdit_18->setText(QString::number(sonuc[7]));
                      ui->textEdit_19->setText("---");
                      ui->textEdit_20->setText("---");
                      break;
            }
            case 9: { ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText(QString::number(sonuc[1]));
                      ui->textEdit_13->setText(QString::number(sonuc[2]));
                      ui->textEdit_14->setText(QString::number(sonuc[3]));
                      ui->textEdit_15->setText(QString::number(sonuc[4]));
                      ui->textEdit_16->setText(QString::number(sonuc[5]));
                      ui->textEdit_17->setText(QString::number(sonuc[6]));
                      ui->textEdit_18->setText(QString::number(sonuc[7]));
                      ui->textEdit_19->setText(QString::number(sonuc[8]));
                      ui->textEdit_20->setText("---");
                      break;
            }
            case 10:{ ui->textEdit_11->setText(QString::number(sonuc[0]));
                      ui->textEdit_12->setText(QString::number(sonuc[1]));
                      ui->textEdit_13->setText(QString::number(sonuc[2]));
                      ui->textEdit_14->setText(QString::number(sonuc[3]));
                      ui->textEdit_15->setText(QString::number(sonuc[4]));
                      ui->textEdit_16->setText(QString::number(sonuc[5]));
                      ui->textEdit_17->setText(QString::number(sonuc[6]));
                      ui->textEdit_18->setText(QString::number(sonuc[7]));
                      ui->textEdit_19->setText(QString::number(sonuc[8]));
                      ui->textEdit_20->setText(QString::number(sonuc[9]));
                      break;
            }
            }

            ui->label->setText("Tutturduğunuz Sayı Adedi = "+QString::number(tutan));
        }
    }

}

void MainWindow::on_pushButton_clicked()
{
    cekilis();
}
