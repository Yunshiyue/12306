#if _MSC_VER >= 1600 
#pragma execution_character_set("utf-8") 
#endif

#include "main_window.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    /*tabWidget*/
    ui->tabWidget->setVisible(false);
    ui->tabWidget->clear();
    ui->tabWidget->setTabsClosable(true);
    Login* login = new Login(this);
    login->setAttribute(Qt::WA_DeleteOnClose);
    int current = ui->tabWidget->addTab(login, "登录");
    ui->tabWidget->setCurrentIndex(current);
    ui->tabWidget->setVisible(true);

    setCentralWidget(ui->tabWidget);
    setWindowState(Qt::WindowMaximized);

    QIcon icon(":/new/icon/icon/railway.png");
    setWindowIcon(icon);
    setWindowTitle("12306");
}

Ui::MainWindow* MainWindow::get_ui()
{
    return ui;
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
* 按下登录
*/
void MainWindow::on_login_triggered()
{
    int index = -1;
    /*查找是否有当前页*/
    for (int i = 0; i < ui->tabWidget->count(); i++) {
        if(ui->tabWidget->tabText(i) == "登录") {
            index = i;
            break;
        }
    }
    if (index == -1) {
        Login* login = new Login(this, this);
        login->setAttribute(Qt::WA_DeleteOnClose);
        int current = ui->tabWidget->addTab(login, "登录");
        ui->tabWidget->setCurrentIndex(current);
        ui->tabWidget->setVisible(true);
    }
    else {
        ui->tabWidget->setCurrentIndex(index);
    }
}


/*
* 查询车票
*/
void MainWindow::on_ticket_triggered()
{
    int index = -1;
    /*查找是否有当前页*/
    for (int i = 0; i < ui->tabWidget->count(); i++) {
        if(ui->tabWidget->tabText(i) == "查询车票") {
            index = i;
            break;
        }
    }
    if (index == -1) {
        Ticket* ticket = new Ticket(this, this);
        ticket->setAttribute(Qt::WA_DeleteOnClose);
        int current = ui->tabWidget->addTab(ticket, "查询车票");
        ui->tabWidget->setCurrentIndex(current);
        ui->tabWidget->setVisible(true);
    }
    else {
        ui->tabWidget->setCurrentIndex(index);
    }
}


/*
* 车站
*/
void MainWindow::on_station_triggered()
{
    int index = -1;
    /*查找是否有当前页*/
    for (int i = 0; i < ui->tabWidget->count(); i++) {
        if(ui->tabWidget->tabText(i) == "车站") {
            index = i;
            break;
        }
    }
    if (index == -1) {
        Station* station = new Station(this);
        station->setAttribute(Qt::WA_DeleteOnClose);
        int current = ui->tabWidget->addTab(station, "车站");
        ui->tabWidget->setCurrentIndex(current);
        ui->tabWidget->setVisible(true);
    }
    else {
        ui->tabWidget->setCurrentIndex(index);
    }
}


/*
* 车次
*/
void MainWindow::on_Train_triggered()
{
    int index = -1;
    /*查找是否有当前页*/
    for (int i = 0; i < ui->tabWidget->count(); i++) {
        if(ui->tabWidget->tabText(i) == "车次") {
            index = i;
            break;
        }
    }
    if (index == -1) {
        Train* train = new Train(this);
        train->setAttribute(Qt::WA_DeleteOnClose);
        int current = ui->tabWidget->addTab(train, "车次");
        ui->tabWidget->setCurrentIndex(current);
        ui->tabWidget->setVisible(true);
    }
    else {
        ui->tabWidget->setCurrentIndex(index);
    }
}

/*
* 订单
*/
void MainWindow::on_order_triggered()
{
    int index = -1;
    /*查找是否有当前页*/
    for (int i = 0; i < ui->tabWidget->count(); i++) {
        if(ui->tabWidget->tabText(i) == "订单") {
            index = i;
            break;
        }
    }
    if (index == -1) {
        Order* order = new Order(this, this);
        order->setAttribute(Qt::WA_DeleteOnClose);
        int current = ui->tabWidget->addTab(order, "订单");
        ui->tabWidget->setCurrentIndex(current);
        ui->tabWidget->setVisible(true);
    }
    else {
        ui->tabWidget->setCurrentIndex(index);
    }
}


/*
* 个人信息
*/
void MainWindow::on_information_triggered()
{
    int index = -1;
    /*查找是否有当前页*/
    for (int i = 0; i < ui->tabWidget->count(); i++) {
        if(ui->tabWidget->tabText(i) == "个人信息") {
            index = i;
            break;
        }
    }
    if (index == -1) {
        Information* information = new Information(this);
        information->setAttribute(Qt::WA_DeleteOnClose);
        int current = ui->tabWidget->addTab(information, "个人信息");
        ui->tabWidget->setCurrentIndex(current);
        ui->tabWidget->setVisible(true);
    }
    else {
        ui->tabWidget->setCurrentIndex(index);
    }
}


/*
* 关闭tab
*/
void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    if (index < 0) {
        return;
    }
    QWidget* closeWidget = ui->tabWidget->widget(index);
    closeWidget->close();
}

//注册
void MainWindow::on_register_2_triggered()
{
    int index = -1;
    /*查找是否有当前页*/
    for (int i = 0; i < ui->tabWidget->count(); i++) {
        if(ui->tabWidget->tabText(i) == "注册") {
            index = i;
            break;
        }
    }
    if (index == -1) {
        Register* register_ = new Register(this);
        register_->setAttribute(Qt::WA_DeleteOnClose);
        int current = ui->tabWidget->addTab(register_, "注册");
        ui->tabWidget->setCurrentIndex(current);
        ui->tabWidget->setVisible(true);
    }
    else {
        ui->tabWidget->setCurrentIndex(index);
    }
}

//显示改签页面
void MainWindow::ShowChangeTicketWidget(QJsonObject ticket_json)
{
    Ticket* ticket = new Ticket(ticket_json, this);
    ticket->setAttribute(Qt::WA_DeleteOnClose);
    int current = ui->tabWidget->addTab(ticket, "改签");
    ui->tabWidget->setCurrentIndex(current);
    ui->tabWidget->setVisible(true);
}

void MainWindow::ShowTransferWidget(QJsonObject ticket_json)
{
    Transfer* transfer = new Transfer(ticket_json, this);
    transfer->setAttribute(Qt::WA_DeleteOnClose);
    int current = ui->tabWidget->addTab(transfer, "换乘");
    ui->tabWidget->setCurrentIndex(current);
    ui->tabWidget->setVisible(true);
}

void MainWindow::LoginSucceed()
{
    ui->login->setEnabled(false);
    ui->station->setEnabled(true);
    ui->ticket->setEnabled(true);
    ui->Train->setEnabled(true);
    ui->register_2->setEnabled(true);
    ui->information->setEnabled(true);
    ui->order->setEnabled(true);
    on_ticket_triggered();
}
