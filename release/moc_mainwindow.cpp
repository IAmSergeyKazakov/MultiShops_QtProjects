/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_shopsList_button_clicked",
    "",
    "on_shopsListBack_button_clicked",
    "on_toEdokShop_button_clicked",
    "on_toKirpichikShop_button_clicked",
    "on_toCybertechShop_button_clicked",
    "on_edok_back_button_clicked",
    "on_edok_toMain_button_clicked",
    "on_edok_toBasket_button_clicked",
    "on_kirpichik_toBasket_button_clicked",
    "on_kirpichik_toMain_button_clicked",
    "on_kirpichik_back_button_clicked",
    "on_cybertech_toBasket_button_clicked",
    "on_cybertech_toMain_button_clicked",
    "on_cybertech_back_button_clicked",
    "on_basketToMain_button_clicked",
    "on_basketToShops_button_clicked",
    "on_basketList_button_clicked",
    "on_add1_cybertech_clicked",
    "on_basketTableView_clicked",
    "QModelIndex",
    "index",
    "on_removeBasket_button_clicked",
    "on_clearBasket_button_clicked",
    "on_BasketAddItem_button_clicked",
    "on_enterProgramm_button_clicked",
    "on_cybertechTableView_clicked",
    "on_add_edok_clicked",
    "on_edokTableView_clicked",
    "on_add_kirpichik_clicked",
    "on_kirpichikTableView_clicked",
    "on_emptyBasket_toShop_button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[11];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[29];
    char stringdata5[34];
    char stringdata6[34];
    char stringdata7[28];
    char stringdata8[30];
    char stringdata9[32];
    char stringdata10[37];
    char stringdata11[35];
    char stringdata12[33];
    char stringdata13[37];
    char stringdata14[35];
    char stringdata15[33];
    char stringdata16[31];
    char stringdata17[32];
    char stringdata18[29];
    char stringdata19[26];
    char stringdata20[27];
    char stringdata21[12];
    char stringdata22[6];
    char stringdata23[31];
    char stringdata24[30];
    char stringdata25[32];
    char stringdata26[32];
    char stringdata27[30];
    char stringdata28[20];
    char stringdata29[25];
    char stringdata30[25];
    char stringdata31[30];
    char stringdata32[37];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 27),  // "on_shopsList_button_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 31),  // "on_shopsListBack_button_clicked"
        QT_MOC_LITERAL(72, 28),  // "on_toEdokShop_button_clicked"
        QT_MOC_LITERAL(101, 33),  // "on_toKirpichikShop_button_cli..."
        QT_MOC_LITERAL(135, 33),  // "on_toCybertechShop_button_cli..."
        QT_MOC_LITERAL(169, 27),  // "on_edok_back_button_clicked"
        QT_MOC_LITERAL(197, 29),  // "on_edok_toMain_button_clicked"
        QT_MOC_LITERAL(227, 31),  // "on_edok_toBasket_button_clicked"
        QT_MOC_LITERAL(259, 36),  // "on_kirpichik_toBasket_button_..."
        QT_MOC_LITERAL(296, 34),  // "on_kirpichik_toMain_button_cl..."
        QT_MOC_LITERAL(331, 32),  // "on_kirpichik_back_button_clicked"
        QT_MOC_LITERAL(364, 36),  // "on_cybertech_toBasket_button_..."
        QT_MOC_LITERAL(401, 34),  // "on_cybertech_toMain_button_cl..."
        QT_MOC_LITERAL(436, 32),  // "on_cybertech_back_button_clicked"
        QT_MOC_LITERAL(469, 30),  // "on_basketToMain_button_clicked"
        QT_MOC_LITERAL(500, 31),  // "on_basketToShops_button_clicked"
        QT_MOC_LITERAL(532, 28),  // "on_basketList_button_clicked"
        QT_MOC_LITERAL(561, 25),  // "on_add1_cybertech_clicked"
        QT_MOC_LITERAL(587, 26),  // "on_basketTableView_clicked"
        QT_MOC_LITERAL(614, 11),  // "QModelIndex"
        QT_MOC_LITERAL(626, 5),  // "index"
        QT_MOC_LITERAL(632, 30),  // "on_removeBasket_button_clicked"
        QT_MOC_LITERAL(663, 29),  // "on_clearBasket_button_clicked"
        QT_MOC_LITERAL(693, 31),  // "on_BasketAddItem_button_clicked"
        QT_MOC_LITERAL(725, 31),  // "on_enterProgramm_button_clicked"
        QT_MOC_LITERAL(757, 29),  // "on_cybertechTableView_clicked"
        QT_MOC_LITERAL(787, 19),  // "on_add_edok_clicked"
        QT_MOC_LITERAL(807, 24),  // "on_edokTableView_clicked"
        QT_MOC_LITERAL(832, 24),  // "on_add_kirpichik_clicked"
        QT_MOC_LITERAL(857, 29),  // "on_kirpichikTableView_clicked"
        QT_MOC_LITERAL(887, 36)   // "on_emptyBasket_toShop_button_..."
    },
    "MainWindow",
    "on_shopsList_button_clicked",
    "",
    "on_shopsListBack_button_clicked",
    "on_toEdokShop_button_clicked",
    "on_toKirpichikShop_button_clicked",
    "on_toCybertechShop_button_clicked",
    "on_edok_back_button_clicked",
    "on_edok_toMain_button_clicked",
    "on_edok_toBasket_button_clicked",
    "on_kirpichik_toBasket_button_clicked",
    "on_kirpichik_toMain_button_clicked",
    "on_kirpichik_back_button_clicked",
    "on_cybertech_toBasket_button_clicked",
    "on_cybertech_toMain_button_clicked",
    "on_cybertech_back_button_clicked",
    "on_basketToMain_button_clicked",
    "on_basketToShops_button_clicked",
    "on_basketList_button_clicked",
    "on_add1_cybertech_clicked",
    "on_basketTableView_clicked",
    "QModelIndex",
    "index",
    "on_removeBasket_button_clicked",
    "on_clearBasket_button_clicked",
    "on_BasketAddItem_button_clicked",
    "on_enterProgramm_button_clicked",
    "on_cybertechTableView_clicked",
    "on_add_edok_clicked",
    "on_edokTableView_clicked",
    "on_add_kirpichik_clicked",
    "on_kirpichikTableView_clicked",
    "on_emptyBasket_toShop_button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  188,    2, 0x08,    1 /* Private */,
       3,    0,  189,    2, 0x08,    2 /* Private */,
       4,    0,  190,    2, 0x08,    3 /* Private */,
       5,    0,  191,    2, 0x08,    4 /* Private */,
       6,    0,  192,    2, 0x08,    5 /* Private */,
       7,    0,  193,    2, 0x08,    6 /* Private */,
       8,    0,  194,    2, 0x08,    7 /* Private */,
       9,    0,  195,    2, 0x08,    8 /* Private */,
      10,    0,  196,    2, 0x08,    9 /* Private */,
      11,    0,  197,    2, 0x08,   10 /* Private */,
      12,    0,  198,    2, 0x08,   11 /* Private */,
      13,    0,  199,    2, 0x08,   12 /* Private */,
      14,    0,  200,    2, 0x08,   13 /* Private */,
      15,    0,  201,    2, 0x08,   14 /* Private */,
      16,    0,  202,    2, 0x08,   15 /* Private */,
      17,    0,  203,    2, 0x08,   16 /* Private */,
      18,    0,  204,    2, 0x08,   17 /* Private */,
      19,    0,  205,    2, 0x08,   18 /* Private */,
      20,    1,  206,    2, 0x08,   19 /* Private */,
      23,    0,  209,    2, 0x08,   21 /* Private */,
      24,    0,  210,    2, 0x08,   22 /* Private */,
      25,    0,  211,    2, 0x08,   23 /* Private */,
      26,    0,  212,    2, 0x08,   24 /* Private */,
      27,    1,  213,    2, 0x08,   25 /* Private */,
      28,    0,  216,    2, 0x08,   27 /* Private */,
      29,    1,  217,    2, 0x08,   28 /* Private */,
      30,    0,  220,    2, 0x08,   30 /* Private */,
      31,    1,  221,    2, 0x08,   31 /* Private */,
      32,    0,  224,    2, 0x08,   33 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_shopsList_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_shopsListBack_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toEdokShop_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toKirpichikShop_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toCybertechShop_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edok_back_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edok_toMain_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edok_toBasket_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_kirpichik_toBasket_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_kirpichik_toMain_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_kirpichik_back_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cybertech_toBasket_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cybertech_toMain_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cybertech_back_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_basketToMain_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_basketToShops_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_basketList_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add1_cybertech_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_basketTableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_removeBasket_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearBasket_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BasketAddItem_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_enterProgramm_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cybertechTableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_add_edok_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edokTableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_add_kirpichik_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_kirpichikTableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_emptyBasket_toShop_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_shopsList_button_clicked(); break;
        case 1: _t->on_shopsListBack_button_clicked(); break;
        case 2: _t->on_toEdokShop_button_clicked(); break;
        case 3: _t->on_toKirpichikShop_button_clicked(); break;
        case 4: _t->on_toCybertechShop_button_clicked(); break;
        case 5: _t->on_edok_back_button_clicked(); break;
        case 6: _t->on_edok_toMain_button_clicked(); break;
        case 7: _t->on_edok_toBasket_button_clicked(); break;
        case 8: _t->on_kirpichik_toBasket_button_clicked(); break;
        case 9: _t->on_kirpichik_toMain_button_clicked(); break;
        case 10: _t->on_kirpichik_back_button_clicked(); break;
        case 11: _t->on_cybertech_toBasket_button_clicked(); break;
        case 12: _t->on_cybertech_toMain_button_clicked(); break;
        case 13: _t->on_cybertech_back_button_clicked(); break;
        case 14: _t->on_basketToMain_button_clicked(); break;
        case 15: _t->on_basketToShops_button_clicked(); break;
        case 16: _t->on_basketList_button_clicked(); break;
        case 17: _t->on_add1_cybertech_clicked(); break;
        case 18: _t->on_basketTableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 19: _t->on_removeBasket_button_clicked(); break;
        case 20: _t->on_clearBasket_button_clicked(); break;
        case 21: _t->on_BasketAddItem_button_clicked(); break;
        case 22: _t->on_enterProgramm_button_clicked(); break;
        case 23: _t->on_cybertechTableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 24: _t->on_add_edok_clicked(); break;
        case 25: _t->on_edokTableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 26: _t->on_add_kirpichik_clicked(); break;
        case 27: _t->on_kirpichikTableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 28: _t->on_emptyBasket_toShop_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}
QT_WARNING_POP
