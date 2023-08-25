#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>     //QSqlDatabase类处理与数据库的连接
#include <QSqlError>
#include <QStandardItemModel>
#include <QSqlQuery>
#include<QDebug>
#include<QMessageBox>
#include<QTcpSocket>
#include<QHostAddress>
#include<QThread>
#include <QtCore/QCoreApplication>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    void on_cancelButton_clicked();
    void on_connectButton_clicked();
private:

    QTcpSocket *socket;
};


#endif // WIDGET_H
