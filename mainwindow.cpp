#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(greetPage);

    sales.push_back("Вкусное молочко? Вам в Едок!");
    sales.push_back("Кирпичик. Все для ремонта!");
    sales.push_back("Новые наушники в Cyber tech. Вы должны это услышать!");
    sales.push_back("''Эти шоколадки просто прекрасны!'' - Гордон Рамзи, зайдя в Едок");
    sales.push_back("В Кирпичике все любят что-то чинить и строить! Может Вы тоже?");
    sales.push_back("'Пора закупиться новой техникой в Cyber tech. ...' - Wylsacom ");
    sales.push_back("'Вау...' *обычная реакция человека, который зашел в Cyber tech.*");
    sales.push_back("Поговаривают, что в 'Едке' лучшие продукты...");
    sales.push_back("Если нужен тебе клей, беги в Кирпичик ты скорей!");
    sales.push_back("Если нужен вам омлет, молоко бери в Едке!");
    sales.push_back("'Ого, вот это я понимаю кирпич!' - Шурик, когда зашел в Кирпичик");
    sales.push_back("Лучшая техника для геймера? Это про Cyber tech.");

    randomForHint = QRandomGenerator::global()->bounded(sales.size());
    ui->main_hint_label->setText(sales[randomForHint]);

    ui->enterProgramm_logo_label->setStyleSheet("image: url(:/imgures/img/mainLogo.jpeg);");
    ui->background_Main_label->setStyleSheet("image: url(:/imgures/img/backgroundMain.jpeg);");
    ui->backgroundForMainMenu->setStyleSheet("image: url(:/imgures/img/backgroundMainMenu.jpg);");
    ui->basketicon_label->setStyleSheet("image: url(:/imgures/img/iconForBasket.jpeg);");
    ui->shopsIcon_label->setStyleSheet("image: url(:/imgures/img/iconForShops.jpg);");
    ui->logo_label->setStyleSheet("image: url(:/imgures/img/secondLogo.jpeg);");
    ui->logo_label_2->setStyleSheet("image: url(:/imgures/img/secondLogo.jpeg);");
    ui->logo_label_3->setStyleSheet("image: url(:/imgures/img/secondLogo.jpeg);");
    ui->logo_label_4->setStyleSheet("image: url(:/imgures/img/secondLogo.jpeg);");
    ui->logo_label_5->setStyleSheet("image: url(:/imgures/img/secondLogo.jpeg);");
    ui->logo_label_6->setStyleSheet("image: url(:/imgures/img/secondLogo.jpeg);");
    ui->logo_label_7->setStyleSheet("image: url(:/imgures/img/secondLogo.jpeg);");
    ui->imageForShopsMenu->setStyleSheet("image: url(:/imgures/img/shopsListMenu.jpeg);");
    ui->imageForEdok_label->setStyleSheet("image: url(:/imgures/img/imageForEdok.jpg);");
    ui->edok_basket_icon->setStyleSheet("image: url(:/imgures/img/iconForBasket.jpeg);");
    ui->edok_back_icon->setStyleSheet("image: url(:/imgures/img/back.jpg);");
    ui->edok_home_icon->setStyleSheet("image: url(:/imgures/img/homeIcon.jpg);");
    ui->kirpichik_back_icon->setStyleSheet("image: url(:/imgures/img/back.jpg);");
    ui->kirpichik_main_icon->setStyleSheet("image: url(:/imgures/img/homeIcon.jpg);");
    ui->kirpichik_basket_icon->setStyleSheet("image: url(:/imgures/img/iconForBasket.jpeg);");
    ui->imageForKirpichik_label->setStyleSheet("image: url(:/imgures/img/imageForKirpichik.jpg);");
    ui->Cybertech_image_label->setStyleSheet("image: url(:/imgures/img/imagForCybertech.jpg);");
    ui->cybertech_back_icon->setStyleSheet("image: url(:/imgures/img/back.jpg);");
    ui->cybertech_basket_icon->setStyleSheet("image: url(:/imgures/img/iconForBasket.jpeg);");
    ui->cybertech_home_icon->setStyleSheet("image: url(:/imgures/img/homeIcon.jpg);");
    ui->imageForEmptyBasket_label->setStyleSheet("image: url(:/imgures/img/EmtybasketImage.png);");
}


MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
    delete basketModel;
    basketModel = nullptr;
    delete edokModel;
    edokModel = nullptr;
    delete kirpichikModel;
    kirpichikModel = nullptr;
    delete cybertechModel;
    cybertechModel = nullptr;
}

QSqlDatabase MainWindow::setDatabase(QString const & dbName)
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);
    return db;
}

void MainWindow::tobasketMove()
{
    isBasketTableViewClicked = false;
    basketdb = setDatabase(basketdbName);
    if(basketdb.open()){
            qDebug()<<"nice";
            setBasketModel();
        }
        else{
            qDebug()<<"bad in basket.cpp";
        }
    sum();

    QString sumString = QString::number(basketSummary);
    ui-> reallySumMain -> setText(QString(sumString));
    ui->stackedWidget->setCurrentIndex(mainPage);

    if(basketModel->rowCount() != 0)
    {

            qDebug()<<"nice";
            setBasketModel();
            sum();
            showSumAgain(basketPage);
    }

    if(basketModel->rowCount() == 0)
    {
        ui->stackedWidget->setCurrentIndex(emptyBasketPage);
    }


}

void MainWindow::setBasketdb()
{
    basketdb = setDatabase(basketdbName);
    if(basketdb.open()){
            qDebug()<<"nice";
            setBasketModel();
        }
        else{
            qDebug()<<"bad in basket.cpp";
        }
    sum();
}

void MainWindow::ifBasketIsEmpty()
{
    if(basketModel->rowCount() == 0)
    {
        ui->stackedWidget->setCurrentIndex(emptyBasketPage);
    }
}


void MainWindow::showSum_onMain()
{
    basketdb = setDatabase(basketdbName);

    if(basketdb.open()){
            qDebug()<<"nice";
            setBasketModel();
        }
        else{
            qDebug()<<"bad in basket.cpp";
        }

    sum();

    QString sumString = QString::number(basketSummary);
    ui-> reallySumMain -> setText(QString(sumString));
    ui->stackedWidget->setCurrentIndex(mainPage);
}


void MainWindow::on_shopsList_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(shopsListPage);
}


void MainWindow::on_shopsListBack_button_clicked()
{
    showSum_onMain();
    randomForHint = QRandomGenerator::global()->bounded(sales.size());
    ui->main_hint_label->setText(sales[randomForHint]);
    ui->stackedWidget->setCurrentIndex(mainPage);

}


void MainWindow::on_toEdokShop_button_clicked()
{
    isShopsTableViewClicked = false;
    ui->what_item_edok_label->setText("Здесь будет последний");
    ui->what_item_edok_label_2->setText("добавленный товар");
    ui->what_cost_edok_label->setText("А здесь его цена");

    ui->stackedWidget->setCurrentIndex(edokPage);

    edokdb = setDatabase(edokdbName);

    if(edokdb.open()){
        edokModel = new QSqlQueryModel(this);
        edokModel ->setQuery("SELECT * FROM edok_products_");
        ui->edokTableView->setModel(edokModel);
    }
}


void MainWindow::on_toKirpichikShop_button_clicked()
{
    isShopsTableViewClicked = false;
    ui->what_item_kirpichik_label->setText("Здесь будет последний");
    ui->what_item_kirpichik_label_2->setText("добавленный товар");
    ui->what_cost_kirpichik_label->setText("А здесь его цена");
    ui->stackedWidget->setCurrentIndex(kirpichikPage);

    kirpichikdb = setDatabase(kirpichikdbName);

    if(kirpichikdb.open()){
        kirpichikModel = new QSqlQueryModel(this);
        kirpichikModel ->setQuery("SELECT Артикул, Товары, Цена FROM kirpichik_products_");
        ui->kirpichikTableView->setModel(kirpichikModel);
    }
}


void MainWindow::on_toCybertechShop_button_clicked()
{
    isShopsTableViewClicked = false;
    ui->what_item_cybertech_label->setText("Здесь будет последний");
    ui->what_item_cybertech_label_2->setText("добавленный товар");
    ui->what_cost_cybertech_label->setText("А здесь его цена");
    ui->stackedWidget->setCurrentIndex(cybertechPage);

    cybertechdb = setDatabase(cybertechdbName);

    if(cybertechdb.open()){
        qDebug()<<"nice";
        cybertechModel = new QSqlQueryModel(this);
        cybertechModel ->setQuery("SELECT Артикул, Товары, Цена FROM products_cybertech_");
        ui->cybertechTableView->setModel(cybertechModel);
    }
}


void MainWindow::on_edok_back_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(shopsListPage);
}


void MainWindow::sum(){
    const int columnIndex = 4;
    int rowCount = basketModel->rowCount();
    basketSummary = 0;

    for (int i = 0; i < rowCount; i++) {
        QModelIndex index = basketModel->index(i, columnIndex);
        double value = basketModel->data(index).toDouble();
        basketSummary += value;
        qDebug()<<"сумма: "<<basketSummary;

    }
}


void MainWindow::on_edok_toMain_button_clicked()
{
    showSum_onMain();
    randomForHint = QRandomGenerator::global()->bounded(sales.size());
    ui->main_hint_label->setText(sales[randomForHint]);

}

void MainWindow::selectForBasket()
{

    if(basketModel->rowCount() != 0)
    {
        basketdb = setDatabase(basketdbName);

        if(basketdb.open()){
                qDebug()<<"nice";
                setBasketModel();
            }
            else{
                qDebug()<<"bad in basket.cpp";
            }

        sum();
        showSumAgain(basketPage);
    }

}


void MainWindow::on_edok_toBasket_button_clicked()
{

    tobasketMove();
}


void MainWindow::on_kirpichik_toBasket_button_clicked()
{
    tobasketMove();
}


void MainWindow::on_kirpichik_toMain_button_clicked()
{
    showSum_onMain();
    randomForHint = QRandomGenerator::global()->bounded(sales.size());
    ui->main_hint_label->setText(sales[randomForHint]);
}


void MainWindow::on_kirpichik_back_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(shopsListPage);
}

void MainWindow::on_cybertech_toBasket_button_clicked()
{
    tobasketMove();
}


void MainWindow::on_cybertech_toMain_button_clicked()
{
    showSum_onMain();
    randomForHint = QRandomGenerator::global()->bounded(sales.size());
    ui->main_hint_label->setText(sales[randomForHint]);
}


void MainWindow::on_cybertech_back_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(shopsListPage);
}


void MainWindow::on_basketToMain_button_clicked()
{
    showSum_onMain();
    randomForHint = QRandomGenerator::global()->bounded(sales.size());
    ui->main_hint_label->setText(sales[randomForHint]);
}


void MainWindow::on_basketToShops_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(shopsListPage);
}


void MainWindow::on_basketList_button_clicked()
{  
    tobasketMove();
}



void MainWindow::on_add1_cybertech_clicked()
{
    basketdb = setDatabase(basketdbName);

    if(!basketdb.open()){
        ui->dataerror_cybertech->setText("Упс! Похоже что-то с базой данных... Мы скоро решим эту проблему !");
    }

        QModelIndex costIndex = cybertechModel->index(currentRowCybertech, 2, QModelIndex());
        QModelIndex productTitleIndex = cybertechModel->index(currentRowCybertech,1, QModelIndex());
        QModelIndex productArticle = cybertechModel->index(currentRowCybertech,0, QModelIndex());

        QString basketCostValue = ui->cybertechTableView->model()->data(costIndex).toString(); //аккуратно с кргулми скобками в model!
        QString basketProductTitleName = ui->cybertechTableView->model()->data(productTitleIndex).toString(); //аккуратно с кргулми скобками в model!
        QString basketProductArticle = ui->cybertechTableView->model()->data(productArticle).toString();
        QString shopTitle = ui->cybertech_shopTitle_label->text();

    if(isShopsTableViewClicked==true)
    {
        if(basketdb.open()){
                addToBasket(basketProductArticle, basketProductTitleName, shopTitle, basketCostValue);
        }

        ui->what_item_cybertech_label->setText(basketProductTitleName);
        ui->what_item_cybertech_label_2->setText(" ");
        ui->what_cost_cybertech_label->setText(basketCostValue);
    }
}

void MainWindow::addToBasket(QString const &productArticle, QString const &productTitleName, QString const &shopTitle, QString const &costValue)
{
        QSqlQuery qryforbasket;
        qryforbasket.prepare("INSERT INTO basket_products_ (Артикул, Товар, Магазин, Цена) VALUES (?, ?, ?, ?)");
        qryforbasket.addBindValue(productArticle);
        qryforbasket.addBindValue(productTitleName);
        qryforbasket.addBindValue(shopTitle);
        qryforbasket.addBindValue(costValue);
        qryforbasket.exec();
}


void MainWindow::on_removeBasket_button_clicked()
{
    basketdb = setDatabase(basketdbName);

    QModelIndex idIndexBasket = basketModel->index(currentRowBasket, 0, QModelIndex());
    QString idBasketValue = ui->basketTableView->model()->data(idIndexBasket).toString();

    QSqlQuery qryforbasket;

    if(basketdb.open() && isBasketTableViewClicked){
        qryforbasket.exec("DELETE FROM basket_products_ WHERE Номер = " +QString(idBasketValue));       
            qDebug()<<"nice";
            setBasketModel();
            sum();
            showSumAgain(basketPage);
        }

    if(basketModel->rowCount()== 0)
    {
        ui->stackedWidget->setCurrentIndex(7);
        ui->shoplabel->setText(" ");
        ui->costlabel->setText(" ");
        ui->productlabel->setText(" ");
    }

    isBasketTableViewClicked = false;
}

void MainWindow::setBasketModel()
{
    basketModel = new QSqlQueryModel(this);
    basketModel ->setQuery("SELECT * FROM basket_products_");
    ui->basketTableView->setModel(basketModel);
    ui->basketTableView->setColumnHidden(0, true);
}


void MainWindow::on_BasketAddItem_button_clicked()
{
    basketdb = setDatabase(basketdbName);

    QModelIndex costIndex = basketModel->index(currentRowBasket,4, QModelIndex());
    QModelIndex productTitleIndex = basketModel->index(currentRowBasket,2, QModelIndex());
    QModelIndex productArticle = basketModel->index(currentRowBasket,1, QModelIndex());
    QModelIndex shopTitle = basketModel->index(currentRowBasket, 3, QModelIndex());

    QString basketCostValue = ui->basketTableView->model()->data(costIndex).toString(); //аккуратно с кргулми скобками в model!
    QString basketProductTitleName = ui->basketTableView->model()->data(productTitleIndex).toString(); //аккуратно с кргулми скобками в model!
    QString basketProductArticle = ui->basketTableView->model()->data(productArticle).toString();
    QString basketShopTitle = ui->basketTableView->model()->data(shopTitle).toString();


    if(basketdb.open()){

        if(isBasketTableViewClicked==true)
        {
            addToBasket(basketProductArticle, basketProductTitleName, basketShopTitle, basketCostValue);
            basketModel ->setQuery("SELECT * FROM basket_products_");

            ui->shoplabel->setText(basketShopTitle);
            ui->costlabel->setText(basketCostValue);
            ui->productlabel->setText(basketProductTitleName);

            ui->basketTableView->setModel(basketModel);
            ui->basketTableView->setColumnHidden(0, true);
        }
    }

    sum();
    showSumAgain(basketPage);
    isBasketTableViewClicked = false;
}


void MainWindow::on_basketTableView_clicked(const QModelIndex &index)
{
    currentRowBasket = index.row();
    qDebug()<<"Индекс строки: "<<index.row();
    currentColumnBasket = index.column();
    isBasketTableViewClicked = true;
}


void MainWindow::on_clearBasket_button_clicked()
{
    isBasketTableViewClicked = false;
    basketdb = setDatabase(basketdbName);

    QSqlQuery qryforbasket;

    if(basketdb.open()){
        qryforbasket.exec("DELETE FROM basket_products_");
        setBasketModel();
    }
    sum();

    ui->shoplabel->setText(" ");
    ui->costlabel->setText(" ");
    ui->productlabel->setText(" ");
    ui->stackedWidget->setCurrentIndex(emptyBasketPage);
}


void MainWindow::on_enterProgramm_button_clicked()
{
    basketdb = setDatabase(basketdbName);
    if(basketdb.open()){
            qDebug()<<"nice";
            setBasketModel();
        }
        else{
            qDebug()<<"bad in basket.cpp";
        }
    sum();
    showSum_onMain();
    showSumAgain(mainPage);
}


void MainWindow::on_cybertechTableView_clicked(const QModelIndex &index)
{
    isShopsTableViewClicked = true;
    currentRowCybertech = index.row();
    currentColumnCybertech = index.column();
}


void MainWindow::on_add_edok_clicked()
{

    isBasketTableViewClicked = false;
    basketdb = setDatabase(basketdbName);

        QModelIndex costIndex = edokModel->index(currentRowCybertech, 2, QModelIndex());
        QModelIndex productTitleIndex = edokModel->index(currentRowCybertech,1, QModelIndex());
        QModelIndex productArticle = edokModel->index(currentRowCybertech,0, QModelIndex());

        QString basketCostValue = ui->edokTableView->model()->data(costIndex).toString(); //аккуратно с кргулми скобками в model!
        QString basketProductTitleName = ui->edokTableView->model()->data(productTitleIndex).toString(); //аккуратно с кргулми скобками в model!
        QString basketProductArticle = ui->edokTableView->model()->data(productArticle).toString();
        QString shopTitle = ui->edok_shopTitle_label->text();

    if(isShopsTableViewClicked)
    {

        if(basketdb.open()){

                if(isShopsTableViewClicked==true)
                {
                    addToBasket(basketProductArticle, basketProductTitleName, shopTitle, basketCostValue);
                }
        }

        ui->what_item_edok_label->setText(basketProductTitleName);
        ui->what_item_edok_label_2->setText(" ");
        ui->what_cost_edok_label->setText(basketCostValue);
    }
}


void MainWindow::on_edokTableView_clicked(const QModelIndex &index)
{
    currentRowCybertech = index.row();
    isShopsTableViewClicked = true;
}


void MainWindow::on_add_kirpichik_clicked()
{
    isBasketTableViewClicked = false;
    basketdb = setDatabase(basketdbName);

    if(!basketdb.open()){
    }

        QModelIndex costIndex = kirpichikModel->index(currentRowCybertech, 2, QModelIndex());
        QModelIndex productTitleIndex = kirpichikModel->index(currentRowCybertech,1, QModelIndex());
        QModelIndex productArticle = kirpichikModel->index(currentRowCybertech,0, QModelIndex());


        QString basketCostValue = ui->kirpichikTableView->model()->data(costIndex).toString(); //аккуратно с кргулми скобками в model!
        QString basketProductTitleName = ui->kirpichikTableView->model()->data(productTitleIndex).toString(); //аккуратно с кргулми скобками в model!
        QString basketProductArticle = ui->kirpichikTableView->model()->data(productArticle).toString();
        QString shopTitle = ui->kirpichik_shopTitle_label->text();

    if(isShopsTableViewClicked)
    {
        if(basketdb.open()){
                addToBasket(basketProductArticle, basketProductTitleName, shopTitle, basketCostValue);
        }

        ui->what_item_kirpichik_label->setText(basketProductTitleName);
        ui->what_item_kirpichik_label_2->setText(" ");
        ui->what_cost_kirpichik_label->setText(basketCostValue);
    }
}


void MainWindow::on_kirpichikTableView_clicked(const QModelIndex &index)
{
    currentRowCybertech = index.row();
    isShopsTableViewClicked = true;
}


void MainWindow::on_emptyBasket_toShop_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(shopsListPage);
}


void MainWindow::showSumAgain(int const &index)
{
    QString sumString = QString::number(basketSummary);
    ui-> sumLabel -> setText(QString(sumString));
    ui->stackedWidget->setCurrentIndex(index);
}
