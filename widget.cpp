#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*QSqlDatabase database;
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("MyDataBase.db");
        database.setUserName("XingYeZhiXia");
        database.setPassword("123456");
    }
    if (!database.open())
    {
        qDebug()<<"Error: Failed to connect database.";
    }
    else
    {
        qDebug()<<"ok";
    }*/
    //socket=new QTcpSocket;

}

Widget::~Widget()
{
    delete ui;
}






void Widget::on_cancelButton_clicked()
{
    this->close();
}


void Widget::on_connectButton_clicked()
{
    //获取ip和端口号
    /*QString ip =ui->ipedit->text();
    QString port =ui->portedit->text();
    //连接服务器
    socket->connectToHost(QHostAddress(ip),port.toShort());
    //发出信号
    connect(socket,&QTcpSocket::connected,[this](){
      QMessageBox::information(this,"提示","连接成功");
    });
    //连接断开
    connect(socket,&QTcpSocket::disconnected,[this](){
        QMessageBox::information(this,"提示","连接断开");
    })*/

}

