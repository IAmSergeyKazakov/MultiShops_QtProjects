/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *main;
    QLabel *backgroundForMainMenu;
    QLabel *label;
    QLabel *main_hint_label;
    QPushButton *basketList_button;
    QLabel *label_4;
    QPushButton *shopsList_button;
    QLabel *reallySumMain;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *basketicon_label;
    QLabel *shopsIcon_label;
    QLabel *logo_label;
    QWidget *shops;
    QLabel *label_5;
    QPushButton *toEdokShop_button;
    QPushButton *toKirpichikShop_button;
    QPushButton *toCybertechShop_button;
    QPushButton *shopsListBack_button;
    QLabel *logo_label_2;
    QLabel *imageForShopsMenu;
    QWidget *Edok;
    QLabel *label_6;
    QPushButton *edok_toBasket_button;
    QPushButton *edok_back_button;
    QPushButton *edok_toMain_button;
    QTableView *edokTableView;
    QLabel *what_cost_edok_label;
    QPushButton *add_edok;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *edok_shopTitle_label;
    QLabel *logo_label_3;
    QLabel *imageForEdok_label;
    QLabel *label_17;
    QLabel *what_item_edok_label_2;
    QLabel *what_item_edok_label;
    QLabel *edok_home_icon;
    QLabel *edok_back_icon;
    QLabel *edok_basket_icon;
    QWidget *Kirpichik;
    QLabel *label_7;
    QPushButton *kirpichik_toBasket_button;
    QPushButton *kirpichik_back_button;
    QPushButton *kirpichik_toMain_button;
    QLabel *label_20;
    QLabel *what_cost_kirpichik_label;
    QTableView *kirpichikTableView;
    QPushButton *add_kirpichik;
    QLabel *label_22;
    QLabel *kirpichik_shopTitle_label;
    QLabel *logo_label_4;
    QLabel *kirpichik_basket_icon;
    QLabel *kirpichik_main_icon;
    QLabel *kirpichik_back_icon;
    QLabel *imageForKirpichik_label;
    QLabel *what_item_kirpichik_label;
    QLabel *what_item_kirpichik_label_2;
    QLabel *label_21;
    QWidget *Cybertech;
    QLabel *label_8;
    QPushButton *cybertech_back_button;
    QPushButton *cybertech_toMain_button;
    QPushButton *cybertech_toBasket_button;
    QTableView *cybertechTableView;
    QPushButton *add1_cybertech;
    QLabel *dataerror_cybertech;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *what_cost_cybertech_label;
    QLabel *cybertech_shopTitle_label;
    QLabel *logo_label_5;
    QLabel *Cybertech_image_label;
    QLabel *label_14;
    QLabel *what_item_cybertech_label_2;
    QLabel *what_item_cybertech_label;
    QLabel *cybertech_basket_icon;
    QLabel *cybertech_home_icon;
    QLabel *cybertech_back_icon;
    QWidget *Basket;
    QLabel *label_9;
    QPushButton *basketToShops_button;
    QPushButton *basketToMain_button;
    QTableView *basketTableView;
    QLabel *reallySumlabel;
    QLabel *sumLabel;
    QLabel *addItem;
    QLabel *logo_label_6;
    QLabel *productlabel;
    QLabel *costlabel;
    QLabel *shoplabel;
    QLabel *label_12;
    QLabel *label_10;
    QPushButton *clearBasket_button;
    QPushButton *removeBasket_button;
    QPushButton *BasketAddItem_button;
    QLabel *label_11;
    QLabel *nomeanAddLabel;
    QLabel *label_47;
    QLabel *label_48;
    QWidget *firstPage;
    QLabel *background_Main_label;
    QLabel *enterProgramm_logo_label;
    QPushButton *enterProgramm_button;
    QWidget *ifEmptyBasket;
    QLabel *label_23;
    QPushButton *emptyBasket_toShop_button;
    QLabel *logo_label_7;
    QLabel *label_13;
    QLabel *imageForEmptyBasket_label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(791, 591);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 10, 791, 591));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        main = new QWidget();
        main->setObjectName("main");
        backgroundForMainMenu = new QLabel(main);
        backgroundForMainMenu->setObjectName("backgroundForMainMenu");
        backgroundForMainMenu->setGeometry(QRect(410, 10, 461, 391));
        backgroundForMainMenu->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"		border: 2px solid white;\n"
"}"));
        label = new QLabel(main);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 130, 451, 121));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: 3px solid rgb(43, 156, 255);;\n"
"	border-radius:22px;\n"
"}"));
        main_hint_label = new QLabel(main);
        main_hint_label->setObjectName("main_hint_label");
        main_hint_label->setGeometry(QRect(30, 470, 601, 51));
        main_hint_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 15px;\n"
"}"));
        basketList_button = new QPushButton(main);
        basketList_button->setObjectName("basketList_button");
        basketList_button->setGeometry(QRect(30, 330, 111, 41));
        basketList_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        label_4 = new QLabel(main);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 20, 251, 61));
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        shopsList_button = new QPushButton(main);
        shopsList_button->setObjectName("shopsList_button");
        shopsList_button->setGeometry(QRect(370, 330, 111, 41));
        shopsList_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        reallySumMain = new QLabel(main);
        reallySumMain->setObjectName("reallySumMain");
        reallySumMain->setGeometry(QRect(230, 160, 171, 61));
        reallySumMain->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        label_3 = new QLabel(main);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 220, 101, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 15px;\n"
"}"));
        label_2 = new QLabel(main);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 160, 191, 61));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        basketicon_label = new QLabel(main);
        basketicon_label->setObjectName("basketicon_label");
        basketicon_label->setGeometry(QRect(40, 380, 81, 41));
        shopsIcon_label = new QLabel(main);
        shopsIcon_label->setObjectName("shopsIcon_label");
        shopsIcon_label->setGeometry(QRect(390, 380, 81, 41));
        logo_label = new QLabel(main);
        logo_label->setObjectName("logo_label");
        logo_label->setGeometry(QRect(670, 500, 91, 81));
        stackedWidget->addWidget(main);
        shops = new QWidget();
        shops->setObjectName("shops");
        label_5 = new QLabel(shops);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 30, 121, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        toEdokShop_button = new QPushButton(shops);
        toEdokShop_button->setObjectName("toEdokShop_button");
        toEdokShop_button->setGeometry(QRect(60, 140, 171, 51));
        toEdokShop_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        toKirpichikShop_button = new QPushButton(shops);
        toKirpichikShop_button->setObjectName("toKirpichikShop_button");
        toKirpichikShop_button->setGeometry(QRect(60, 270, 171, 51));
        toKirpichikShop_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        toCybertechShop_button = new QPushButton(shops);
        toCybertechShop_button->setObjectName("toCybertechShop_button");
        toCybertechShop_button->setGeometry(QRect(60, 400, 171, 51));
        toCybertechShop_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        shopsListBack_button = new QPushButton(shops);
        shopsListBack_button->setObjectName("shopsListBack_button");
        shopsListBack_button->setGeometry(QRect(490, 410, 141, 41));
        shopsListBack_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        logo_label_2 = new QLabel(shops);
        logo_label_2->setObjectName("logo_label_2");
        logo_label_2->setGeometry(QRect(670, 500, 91, 81));
        imageForShopsMenu = new QLabel(shops);
        imageForShopsMenu->setObjectName("imageForShopsMenu");
        imageForShopsMenu->setGeometry(QRect(330, 10, 431, 391));
        stackedWidget->addWidget(shops);
        Edok = new QWidget();
        Edok->setObjectName("Edok");
        label_6 = new QLabel(Edok);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 50, 131, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        edok_toBasket_button = new QPushButton(Edok);
        edok_toBasket_button->setObjectName("edok_toBasket_button");
        edok_toBasket_button->setGeometry(QRect(352, 421, 111, 41));
        edok_toBasket_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        edok_back_button = new QPushButton(Edok);
        edok_back_button->setObjectName("edok_back_button");
        edok_back_button->setGeometry(QRect(602, 421, 111, 41));
        edok_back_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        edok_toMain_button = new QPushButton(Edok);
        edok_toMain_button->setObjectName("edok_toMain_button");
        edok_toMain_button->setGeometry(QRect(476, 421, 111, 41));
        edok_toMain_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        edokTableView = new QTableView(Edok);
        edokTableView->setObjectName("edokTableView");
        edokTableView->setGeometry(QRect(10, 120, 331, 191));
        edokTableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"    background-color: rgb(0, 170, 255);\n"
"	font: 900 9pt \"Segoe UI\";\n"
"    alternate-background-color: rgb(141, 163, 215);\n"
"	font-size:15px;\n"
"	outline: 0;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    color: white;\n"
"	font: 900 9pt \"Segoe UI\";	\n"
"    background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"} \n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	color: white;\n"
"	background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"}"));
        what_cost_edok_label = new QLabel(Edok);
        what_cost_edok_label->setObjectName("what_cost_edok_label");
        what_cost_edok_label->setGeometry(QRect(460, 260, 191, 61));
        what_cost_edok_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        add_edok = new QPushButton(Edok);
        add_edok->setObjectName("add_edok");
        add_edok->setGeometry(QRect(440, 340, 191, 41));
        add_edok->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
"\n"
""));
        label_18 = new QLabel(Edok);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(380, 270, 81, 41));
        label_18->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        label_19 = new QLabel(Edok);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(10, 530, 781, 31));
        label_19->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 15px;\n"
"}"));
        edok_shopTitle_label = new QLabel(Edok);
        edok_shopTitle_label->setObjectName("edok_shopTitle_label");
        edok_shopTitle_label->setGeometry(QRect(150, 50, 101, 31));
        edok_shopTitle_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        logo_label_3 = new QLabel(Edok);
        logo_label_3->setObjectName("logo_label_3");
        logo_label_3->setGeometry(QRect(670, 500, 91, 81));
        imageForEdok_label = new QLabel(Edok);
        imageForEdok_label->setObjectName("imageForEdok_label");
        imageForEdok_label->setGeometry(QRect(360, -10, 411, 211));
        label_17 = new QLabel(Edok);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(380, 190, 81, 61));
        label_17->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        what_item_edok_label_2 = new QLabel(Edok);
        what_item_edok_label_2->setObjectName("what_item_edok_label_2");
        what_item_edok_label_2->setGeometry(QRect(460, 230, 281, 51));
        what_item_edok_label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        what_item_edok_label = new QLabel(Edok);
        what_item_edok_label->setObjectName("what_item_edok_label");
        what_item_edok_label->setGeometry(QRect(460, 190, 331, 61));
        what_item_edok_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        edok_home_icon = new QLabel(Edok);
        edok_home_icon->setObjectName("edok_home_icon");
        edok_home_icon->setGeometry(QRect(490, 470, 81, 31));
        edok_back_icon = new QLabel(Edok);
        edok_back_icon->setObjectName("edok_back_icon");
        edok_back_icon->setGeometry(QRect(610, 470, 91, 31));
        edok_basket_icon = new QLabel(Edok);
        edok_basket_icon->setObjectName("edok_basket_icon");
        edok_basket_icon->setGeometry(QRect(362, 471, 81, 31));
        stackedWidget->addWidget(Edok);
        Kirpichik = new QWidget();
        Kirpichik->setObjectName("Kirpichik");
        label_7 = new QLabel(Kirpichik);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 40, 121, 51));
        label_7->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        kirpichik_toBasket_button = new QPushButton(Kirpichik);
        kirpichik_toBasket_button->setObjectName("kirpichik_toBasket_button");
        kirpichik_toBasket_button->setGeometry(QRect(360, 420, 111, 41));
        kirpichik_toBasket_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        kirpichik_back_button = new QPushButton(Kirpichik);
        kirpichik_back_button->setObjectName("kirpichik_back_button");
        kirpichik_back_button->setGeometry(QRect(600, 420, 111, 41));
        kirpichik_back_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        kirpichik_toMain_button = new QPushButton(Kirpichik);
        kirpichik_toMain_button->setObjectName("kirpichik_toMain_button");
        kirpichik_toMain_button->setGeometry(QRect(480, 420, 111, 41));
        kirpichik_toMain_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        label_20 = new QLabel(Kirpichik);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(10, 500, 771, 61));
        label_20->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 15px;\n"
"}"));
        what_cost_kirpichik_label = new QLabel(Kirpichik);
        what_cost_kirpichik_label->setObjectName("what_cost_kirpichik_label");
        what_cost_kirpichik_label->setGeometry(QRect(460, 260, 331, 61));
        what_cost_kirpichik_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        kirpichikTableView = new QTableView(Kirpichik);
        kirpichikTableView->setObjectName("kirpichikTableView");
        kirpichikTableView->setGeometry(QRect(10, 120, 331, 191));
        kirpichikTableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"    background-color: rgb(0, 170, 255);\n"
"	font: 900 9pt \"Segoe UI\";\n"
"    alternate-background-color: rgb(141, 163, 215);\n"
"	font-size:15px;\n"
"	outline: 0;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    color: white;\n"
"	font: 900 9pt \"Segoe UI\";	\n"
"    background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"} \n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	color: white;\n"
"	background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"}"));
        add_kirpichik = new QPushButton(Kirpichik);
        add_kirpichik->setObjectName("add_kirpichik");
        add_kirpichik->setGeometry(QRect(440, 340, 191, 41));
        add_kirpichik->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        label_22 = new QLabel(Kirpichik);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(380, 245, 71, 91));
        label_22->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        kirpichik_shopTitle_label = new QLabel(Kirpichik);
        kirpichik_shopTitle_label->setObjectName("kirpichik_shopTitle_label");
        kirpichik_shopTitle_label->setGeometry(QRect(140, 40, 131, 51));
        kirpichik_shopTitle_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        logo_label_4 = new QLabel(Kirpichik);
        logo_label_4->setObjectName("logo_label_4");
        logo_label_4->setGeometry(QRect(670, 500, 91, 81));
        kirpichik_basket_icon = new QLabel(Kirpichik);
        kirpichik_basket_icon->setObjectName("kirpichik_basket_icon");
        kirpichik_basket_icon->setGeometry(QRect(390, 470, 51, 31));
        kirpichik_main_icon = new QLabel(Kirpichik);
        kirpichik_main_icon->setObjectName("kirpichik_main_icon");
        kirpichik_main_icon->setGeometry(QRect(510, 470, 49, 31));
        kirpichik_back_icon = new QLabel(Kirpichik);
        kirpichik_back_icon->setObjectName("kirpichik_back_icon");
        kirpichik_back_icon->setGeometry(QRect(630, 470, 49, 31));
        imageForKirpichik_label = new QLabel(Kirpichik);
        imageForKirpichik_label->setObjectName("imageForKirpichik_label");
        imageForKirpichik_label->setGeometry(QRect(340, -10, 451, 211));
        what_item_kirpichik_label = new QLabel(Kirpichik);
        what_item_kirpichik_label->setObjectName("what_item_kirpichik_label");
        what_item_kirpichik_label->setGeometry(QRect(460, 191, 341, 61));
        what_item_kirpichik_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        what_item_kirpichik_label_2 = new QLabel(Kirpichik);
        what_item_kirpichik_label_2->setObjectName("what_item_kirpichik_label_2");
        what_item_kirpichik_label_2->setGeometry(QRect(460, 230, 311, 51));
        what_item_kirpichik_label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        label_21 = new QLabel(Kirpichik);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(380, 191, 81, 61));
        label_21->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        stackedWidget->addWidget(Kirpichik);
        Cybertech = new QWidget();
        Cybertech->setObjectName("Cybertech");
        label_8 = new QLabel(Cybertech);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 10, 131, 111));
        label_8->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        cybertech_back_button = new QPushButton(Cybertech);
        cybertech_back_button->setObjectName("cybertech_back_button");
        cybertech_back_button->setGeometry(QRect(600, 420, 111, 41));
        cybertech_back_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        cybertech_toMain_button = new QPushButton(Cybertech);
        cybertech_toMain_button->setObjectName("cybertech_toMain_button");
        cybertech_toMain_button->setGeometry(QRect(480, 420, 111, 41));
        cybertech_toMain_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        cybertech_toBasket_button = new QPushButton(Cybertech);
        cybertech_toBasket_button->setObjectName("cybertech_toBasket_button");
        cybertech_toBasket_button->setGeometry(QRect(360, 420, 111, 41));
        cybertech_toBasket_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        cybertechTableView = new QTableView(Cybertech);
        cybertechTableView->setObjectName("cybertechTableView");
        cybertechTableView->setGeometry(QRect(10, 121, 331, 191));
        cybertechTableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"    background-color: rgb(0, 170, 255);\n"
"	font: 900 9pt \"Segoe UI\";\n"
"    alternate-background-color: rgb(141, 163, 215);\n"
"	font-size:15px;\n"
"	outline: 0;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    color: white;\n"
"	font: 900 9pt \"Segoe UI\";	\n"
"    background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"} \n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	color: white;\n"
"	background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"}"));
        add1_cybertech = new QPushButton(Cybertech);
        add1_cybertech->setObjectName("add1_cybertech");
        add1_cybertech->setGeometry(QRect(440, 340, 191, 41));
        add1_cybertech->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        dataerror_cybertech = new QLabel(Cybertech);
        dataerror_cybertech->setObjectName("dataerror_cybertech");
        dataerror_cybertech->setGeometry(QRect(50, 490, 49, 16));
        label_15 = new QLabel(Cybertech);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 520, 801, 16));
        label_15->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 15px;\n"
"}"));
        label_16 = new QLabel(Cybertech);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(380, 259, 91, 61));
        label_16->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        what_cost_cybertech_label = new QLabel(Cybertech);
        what_cost_cybertech_label->setObjectName("what_cost_cybertech_label");
        what_cost_cybertech_label->setGeometry(QRect(470, 260, 421, 61));
        what_cost_cybertech_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        cybertech_shopTitle_label = new QLabel(Cybertech);
        cybertech_shopTitle_label->setObjectName("cybertech_shopTitle_label");
        cybertech_shopTitle_label->setGeometry(QRect(140, 0, 201, 131));
        cybertech_shopTitle_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        logo_label_5 = new QLabel(Cybertech);
        logo_label_5->setObjectName("logo_label_5");
        logo_label_5->setGeometry(QRect(670, 500, 91, 81));
        Cybertech_image_label = new QLabel(Cybertech);
        Cybertech_image_label->setObjectName("Cybertech_image_label");
        Cybertech_image_label->setGeometry(QRect(358, 0, 411, 211));
        label_14 = new QLabel(Cybertech);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(380, 190, 91, 61));
        label_14->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        what_item_cybertech_label_2 = new QLabel(Cybertech);
        what_item_cybertech_label_2->setObjectName("what_item_cybertech_label_2");
        what_item_cybertech_label_2->setGeometry(QRect(470, 230, 451, 41));
        what_item_cybertech_label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        what_item_cybertech_label = new QLabel(Cybertech);
        what_item_cybertech_label->setObjectName("what_item_cybertech_label");
        what_item_cybertech_label->setGeometry(QRect(470, 190, 401, 61));
        what_item_cybertech_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        cybertech_basket_icon = new QLabel(Cybertech);
        cybertech_basket_icon->setObjectName("cybertech_basket_icon");
        cybertech_basket_icon->setGeometry(QRect(378, 469, 71, 31));
        cybertech_home_icon = new QLabel(Cybertech);
        cybertech_home_icon->setObjectName("cybertech_home_icon");
        cybertech_home_icon->setGeometry(QRect(500, 470, 71, 31));
        cybertech_back_icon = new QLabel(Cybertech);
        cybertech_back_icon->setObjectName("cybertech_back_icon");
        cybertech_back_icon->setGeometry(QRect(620, 470, 71, 31));
        stackedWidget->addWidget(Cybertech);
        Basket = new QWidget();
        Basket->setObjectName("Basket");
        label_9 = new QLabel(Basket);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, -20, 181, 51));
        label_9->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        basketToShops_button = new QPushButton(Basket);
        basketToShops_button->setObjectName("basketToShops_button");
        basketToShops_button->setGeometry(QRect(220, 430, 201, 41));
        basketToShops_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        basketToMain_button = new QPushButton(Basket);
        basketToMain_button->setObjectName("basketToMain_button");
        basketToMain_button->setGeometry(QRect(10, 430, 201, 41));
        basketToMain_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        basketTableView = new QTableView(Basket);
        basketTableView->setObjectName("basketTableView");
        basketTableView->setGeometry(QRect(10, 60, 441, 261));
        basketTableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"    background-color: rgb(0, 170, 255);\n"
"	font: 900 9pt \"Segoe UI\";\n"
"    alternate-background-color: rgb(141, 163, 215);\n"
"	font-size:15px;\n"
"	outline: 0;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    color: white;\n"
"	font: 900 9pt \"Segoe UI\";	\n"
"    background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"} \n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	color: white;\n"
"	background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"}"));
        reallySumlabel = new QLabel(Basket);
        reallySumlabel->setObjectName("reallySumlabel");
        reallySumlabel->setGeometry(QRect(20, 340, 71, 21));
        reallySumlabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        sumLabel = new QLabel(Basket);
        sumLabel->setObjectName("sumLabel");
        sumLabel->setGeometry(QRect(90, 320, 291, 61));
        sumLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        addItem = new QLabel(Basket);
        addItem->setObjectName("addItem");
        addItem->setGeometry(QRect(590, 310, 49, 16));
        logo_label_6 = new QLabel(Basket);
        logo_label_6->setObjectName("logo_label_6");
        logo_label_6->setGeometry(QRect(670, 500, 91, 81));
        productlabel = new QLabel(Basket);
        productlabel->setObjectName("productlabel");
        productlabel->setGeometry(QRect(600, 400, 211, 31));
        productlabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"}"));
        costlabel = new QLabel(Basket);
        costlabel->setObjectName("costlabel");
        costlabel->setGeometry(QRect(600, 430, 101, 41));
        costlabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"}"));
        shoplabel = new QLabel(Basket);
        shoplabel->setObjectName("shoplabel");
        shoplabel->setGeometry(QRect(600, 350, 101, 51));
        shoplabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"}"));
        label_12 = new QLabel(Basket);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(500, 430, 61, 41));
        label_12->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"}"));
        label_10 = new QLabel(Basket);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(500, 397, 81, 31));
        label_10->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"}"));
        clearBasket_button = new QPushButton(Basket);
        clearBasket_button->setObjectName("clearBasket_button");
        clearBasket_button->setGeometry(QRect(500, 160, 201, 41));
        clearBasket_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        removeBasket_button = new QPushButton(Basket);
        removeBasket_button->setObjectName("removeBasket_button");
        removeBasket_button->setGeometry(QRect(500, 100, 201, 41));
        removeBasket_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        BasketAddItem_button = new QPushButton(Basket);
        BasketAddItem_button->setObjectName("BasketAddItem_button");
        BasketAddItem_button->setGeometry(QRect(500, 227, 201, 41));
        BasketAddItem_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        label_11 = new QLabel(Basket);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(500, 367, 111, 16));
        label_11->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"}"));
        nomeanAddLabel = new QLabel(Basket);
        nomeanAddLabel->setObjectName("nomeanAddLabel");
        nomeanAddLabel->setGeometry(QRect(500, 320, 281, 41));
        nomeanAddLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        label_47 = new QLabel(Basket);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(20, 520, 721, 51));
        label_47->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 15px;\n"
"}"));
        label_48 = new QLabel(Basket);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(20, 480, 791, 41));
        label_48->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 14px;\n"
"}"));
        stackedWidget->addWidget(Basket);
        firstPage = new QWidget();
        firstPage->setObjectName("firstPage");
        firstPage->setStyleSheet(QString::fromUtf8(""));
        background_Main_label = new QLabel(firstPage);
        background_Main_label->setObjectName("background_Main_label");
        background_Main_label->setGeometry(QRect(0, 0, 791, 591));
        enterProgramm_logo_label = new QLabel(firstPage);
        enterProgramm_logo_label->setObjectName("enterProgramm_logo_label");
        enterProgramm_logo_label->setGeometry(QRect(430, 30, 361, 101));
        enterProgramm_logo_label->setStyleSheet(QString::fromUtf8(""));
        enterProgramm_button = new QPushButton(firstPage);
        enterProgramm_button->setObjectName("enterProgramm_button");
        enterProgramm_button->setGeometry(QRect(370, 160, 281, 61));
        enterProgramm_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 68, 255);\n"
"	font-size: 22px;	\n"
"	border-radius: 13px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        stackedWidget->addWidget(firstPage);
        ifEmptyBasket = new QWidget();
        ifEmptyBasket->setObjectName("ifEmptyBasket");
        label_23 = new QLabel(ifEmptyBasket);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(380, 270, 451, 121));
        label_23->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 40px;\n"
"}"));
        emptyBasket_toShop_button = new QPushButton(ifEmptyBasket);
        emptyBasket_toShop_button->setObjectName("emptyBasket_toShop_button");
        emptyBasket_toShop_button->setGeometry(QRect(270, 460, 291, 71));
        emptyBasket_toShop_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(26, 18, 139);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        logo_label_7 = new QLabel(ifEmptyBasket);
        logo_label_7->setObjectName("logo_label_7");
        logo_label_7->setGeometry(QRect(690, 500, 91, 81));
        label_13 = new QLabel(ifEmptyBasket);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(140, 370, 681, 51));
        label_13->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"}"));
        imageForEmptyBasket_label = new QLabel(ifEmptyBasket);
        imageForEmptyBasket_label->setObjectName("imageForEmptyBasket_label");
        imageForEmptyBasket_label->setGeometry(QRect(138, 20, 541, 271));
        stackedWidget->addWidget(ifEmptyBasket);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        backgroundForMainMenu->setText(QString());
        label->setText(QString());
        main_hint_label->setText(QString());
        basketList_button->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\321\200\320\276 \320\237\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214!", nullptr));
        shopsList_button->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275\321\213", nullptr));
        reallySumMain->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "multiShops!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\320\276\321\200\320\267\320\270\320\275\321\213:", nullptr));
        basketicon_label->setText(QString());
        shopsIcon_label->setText(QString());
        logo_label->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275\321\213", nullptr));
        toEdokShop_button->setText(QCoreApplication::translate("MainWindow", "\320\225\320\264\320\276\320\272!", nullptr));
        toKirpichikShop_button->setText(QCoreApplication::translate("MainWindow", "\320\232\320\270\321\200\320\277\320\270\321\207\320\270\320\272", nullptr));
        toCybertechShop_button->setText(QCoreApplication::translate("MainWindow", "Cyber tech.", nullptr));
        shopsListBack_button->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        logo_label_2->setText(QString());
        imageForShopsMenu->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275\321\213 :", nullptr));
        edok_toBasket_button->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        edok_back_button->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        edok_toMain_button->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        what_cost_edok_label->setText(QString());
        add_edok->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276\320\261\321\213 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\320\276\320\262\320\260\321\200 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\320\265 \320\265\320\263\320\276 \320\270 \320\272\320\273\320\270\320\275\320\270\321\202\320\265 \"\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203\" :)", nullptr));
        edok_shopTitle_label->setText(QCoreApplication::translate("MainWindow", "\320\225\320\264\320\276\320\272!", nullptr));
        logo_label_3->setText(QString());
        imageForEdok_label->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\262\320\260\321\200:", nullptr));
        what_item_edok_label_2->setText(QString());
        what_item_edok_label->setText(QString());
        edok_home_icon->setText(QString());
        edok_back_icon->setText(QString());
        edok_basket_icon->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275\321\213 :", nullptr));
        kirpichik_toBasket_button->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        kirpichik_back_button->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        kirpichik_toMain_button->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276\320\261\321\213 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\320\276\320\262\320\260\321\200 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\320\265 \320\265\320\263\320\276 \320\270 \320\272\320\273\320\270\320\275\320\270\321\202\320\265 \"\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203\" :)", nullptr));
        what_cost_kirpichik_label->setText(QString());
        add_kirpichik->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260:", nullptr));
        kirpichik_shopTitle_label->setText(QCoreApplication::translate("MainWindow", "\320\232\320\270\321\200\320\277\320\270\321\207\320\270\320\272", nullptr));
        logo_label_4->setText(QString());
        kirpichik_basket_icon->setText(QString());
        kirpichik_main_icon->setText(QString());
        kirpichik_back_icon->setText(QString());
        imageForKirpichik_label->setText(QString());
        what_item_kirpichik_label->setText(QString());
        what_item_kirpichik_label_2->setText(QString());
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\262\320\260\321\200:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275\321\213 :", nullptr));
        cybertech_back_button->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        cybertech_toMain_button->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        cybertech_toBasket_button->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        add1_cybertech->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203", nullptr));
        dataerror_cybertech->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276\320\261\321\213 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\320\276\320\262\320\260\321\200 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\320\265 \320\265\320\263\320\276 \320\270 \320\272\320\273\320\270\320\275\320\270\321\202\320\265 \"\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203\" :)", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260:", nullptr));
        what_cost_cybertech_label->setText(QCoreApplication::translate("MainWindow", "wdwdwd", nullptr));
        cybertech_shopTitle_label->setText(QCoreApplication::translate("MainWindow", "Cyber tech.", nullptr));
        logo_label_5->setText(QString());
        Cybertech_image_label->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\262\320\260\321\200:", nullptr));
        what_item_cybertech_label_2->setText(QCoreApplication::translate("MainWindow", "wdwdwd", nullptr));
        what_item_cybertech_label->setText(QCoreApplication::translate("MainWindow", "wdwd", nullptr));
        cybertech_basket_icon->setText(QString());
        cybertech_home_icon->setText(QString());
        cybertech_back_icon->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        basketToShops_button->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275\321\213", nullptr));
        basketToMain_button->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        reallySumlabel->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\320\265\320\263\320\276: ", nullptr));
        sumLabel->setText(QString());
        addItem->setText(QString());
        logo_label_6->setText(QString());
        productlabel->setText(QString());
        costlabel->setText(QString());
        shoplabel->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\262\320\260\321\200:", nullptr));
        clearBasket_button->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\272\320\276\321\200\320\267\320\270\320\275\321\203", nullptr));
        removeBasket_button->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        BasketAddItem_button->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275: ", nullptr));
        nomeanAddLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\266\320\265\321\202 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\320\265 \320\265\321\211\320\265?", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276\320\261\321\213 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\320\265 \321\201\321\202\321\200\320\276\321\207\320\272\321\203, \320\263\320\264\320\265 \320\276\320\275 \321\200\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \"\320\243\320\264\320\260\320\273\320\270\321\202\321\214\"", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276\320\261\321\213 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\273\320\265\320\266\320\270\321\202 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\320\265 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\320\265 \321\201\321\202\321\200\320\276\321\207\320\272\321\203, \320\263\320\264\320\265 \320\276\320\275 \321\200\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \"+\"", nullptr));
        background_Main_label->setText(QString());
        enterProgramm_logo_label->setText(QString());
        enterProgramm_button->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\201! ", nullptr));
        emptyBasket_toShop_button->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275\321\213", nullptr));
        logo_label_7->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\222 \320\272\320\276\321\200\320\267\320\270\320\275\320\265 \320\265\321\211\320\265 \320\275\320\270\321\207\320\265\320\263\320\276 \320\275\320\265\321\202! \320\237\321\200\320\270\321\201\320\274\320\276\321\202\321\200\320\270\321\202\320\265 \321\207\321\202\320\276-\320\275\320\270\320\261\321\203\320\264\321\214?", nullptr));
        imageForEmptyBasket_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
