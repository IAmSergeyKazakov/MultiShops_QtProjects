#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QRandomGenerator>
#include <QLabel>
#include <vector>
#include <algorithm>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_shopsList_button_clicked();

    void on_shopsListBack_button_clicked();

    void on_toEdokShop_button_clicked();

    void on_toKirpichikShop_button_clicked();

    void on_toCybertechShop_button_clicked();

    void on_edok_back_button_clicked();

    void on_edok_toMain_button_clicked();

    void on_edok_toBasket_button_clicked();

    void on_kirpichik_toBasket_button_clicked();

    void on_kirpichik_toMain_button_clicked();

    void on_kirpichik_back_button_clicked();

    void on_cybertech_toBasket_button_clicked();

    void on_cybertech_toMain_button_clicked();

    void on_cybertech_back_button_clicked();

    void on_basketToMain_button_clicked();

    void on_basketToShops_button_clicked();

    void on_basketList_button_clicked();

    void on_add1_cybertech_clicked();

    void on_basketTableView_clicked(const QModelIndex &index);

    void on_removeBasket_button_clicked();

    void on_clearBasket_button_clicked();

    void on_BasketAddItem_button_clicked();

    void on_enterProgramm_button_clicked();

    void on_cybertechTableView_clicked(const QModelIndex &index);

    void on_add_edok_clicked();

    void on_edokTableView_clicked(const QModelIndex &index);

    void on_add_kirpichik_clicked();

    void on_kirpichikTableView_clicked(const QModelIndex &index);

    void on_emptyBasket_toShop_button_clicked();

private:
    Ui::MainWindow *ui;

    QSqlDatabase edokdb;
    QSqlQueryModel *edokModel;

    QSqlDatabase kirpichikdb;
    QSqlQueryModel *kirpichikModel;

    QSqlDatabase cybertechdb;
    QSqlQueryModel *cybertechModel;

    QSqlDatabase basketdb;
    QSqlQueryModel *basketModel;


    int currentRowBasket = 100;
    int randomForHint;
    int currentColumnBasket = 100;
    double basketSummary = 0.0;
    bool isBasketTableViewClicked = false;
    bool isShopsTableViewClicked = false;
    const int basketPage = 5;
    const int mainPage = 0;
    const int shopsListPage = 1;
    const int edokPage = 2;
    const int kirpichikPage = 3;
    const int cybertechPage = 4;
    const int greetPage = 6;
    const int emptyBasketPage = 7;

    const QString basketdbName = "Basket.db";
    QString cybertechdbName = "Cybertech.db";
    QString edokdbName = "Edok!.db";
    QString kirpichikdbName = "Kirpichik.db";
    QRandomGenerator randGenerate;

    void sum();

    int currentRowCybertech;
    int currentColumnCybertech;

    void showSum_onMain();

    void ifBasketIsEmpty();

    void setBasketdb();

    void selectForBasket();

    void tobasketMove();

    void showSumAgain(int const &index);

    void addToBasket(QString const &productArticle, QString const &productTitleName, QString const &shopTitle, QString const &costValue);

    void setBasketModel();

    QSqlDatabase setDatabase(QString const & dbName);
    std::vector<QString>sales;

};
#endif // MAINWINDOW_H
