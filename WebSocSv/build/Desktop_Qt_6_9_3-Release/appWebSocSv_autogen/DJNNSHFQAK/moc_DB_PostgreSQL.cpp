/****************************************************************************
** Meta object code from reading C++ file 'DB_PostgreSQL.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Cpp_Module/DB_PostgreSQL.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DB_PostgreSQL.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
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
struct qt_meta_tag_ZN13DB_PostgreSQLE_t {};
} // unnamed namespace

template <> constexpr inline auto DB_PostgreSQL::qt_create_metaobjectdata<qt_meta_tag_ZN13DB_PostgreSQLE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DB_PostgreSQL",
        "sig_end",
        "",
        "sig_charging_log_select_ret",
        "mp_wk_key",
        "key",
        "QList<charging_log_admin>",
        "ret",
        "sig_hmi_current_stat_select_ret",
        "QList<hmi_current_stat_admin>",
        "sig_hmi_device_select_ret",
        "QList<hmi_device_admin>",
        "sig_membership_card_select_ret",
        "QList<membership_card_admin>",
        "sig_membership_log_select_ret",
        "QList<membership_log_admin>",
        "sig_store_user_select_ret",
        "QList<store_user_admin>",
        "slot_end",
        "slot_set_p_soc",
        "Hub*",
        "soc",
        "slot_createStore",
        "id",
        "name",
        "location",
        "slot_query_register",
        "slot_query_register_hmi",
        "storeId",
        "hmiId",
        "slot_query_find_hello_hmi",
        "slot_chargingLog_From_soc",
        "db_data",
        "st_db_data",
        "slot_heartbitData_From_soc",
        "heartbit_data",
        "st_hb_data",
        "slot_membershipCard_authorized_From_soc",
        "adv_pay",
        "card_uid",
        "request_id",
        "slot_membershipCard_finished_From_soc",
        "act_pay",
        "can_pay",
        "uint32_t",
        "t_id",
        "slot_select_From_soc",
        "table",
        "total",
        "col1",
        "val1",
        "col2",
        "val2",
        "col3",
        "val3",
        "slot_select_mCard_status_From_soc",
        "slot_revision_mCard_status_From_soc",
        "remain",
        "hold",
        "stat"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sig_end'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sig_charging_log_select_ret'
        QtMocHelpers::SignalData<void(const mp_wk_key, QVector<charging_log_admin>)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'sig_hmi_current_stat_select_ret'
        QtMocHelpers::SignalData<void(const mp_wk_key, QVector<hmi_current_stat_admin>)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 9, 7 },
        }}),
        // Signal 'sig_hmi_device_select_ret'
        QtMocHelpers::SignalData<void(const mp_wk_key, QVector<hmi_device_admin>)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 11, 7 },
        }}),
        // Signal 'sig_membership_card_select_ret'
        QtMocHelpers::SignalData<void(const mp_wk_key, QVector<membership_card_admin>)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 13, 7 },
        }}),
        // Signal 'sig_membership_log_select_ret'
        QtMocHelpers::SignalData<void(const mp_wk_key, QVector<membership_log_admin>)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 15, 7 },
        }}),
        // Signal 'sig_store_user_select_ret'
        QtMocHelpers::SignalData<void(const mp_wk_key, QVector<store_user_admin>)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 17, 7 },
        }}),
        // Slot 'slot_end'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slot_set_p_soc'
        QtMocHelpers::SlotData<void(Hub *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'slot_createStore'
        QtMocHelpers::SlotData<bool(int, QString, QString)>(22, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 23 }, { QMetaType::QString, 24 }, { QMetaType::QString, 25 },
        }}),
        // Slot 'slot_query_register'
        QtMocHelpers::SlotData<bool(const QString, const QString, const QString)>(26, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 23 }, { QMetaType::QString, 24 }, { QMetaType::QString, 25 },
        }}),
        // Slot 'slot_query_register_hmi'
        QtMocHelpers::SlotData<bool(const QString, const QString)>(27, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 28 }, { QMetaType::QString, 29 },
        }}),
        // Slot 'slot_query_find_hello_hmi'
        QtMocHelpers::SlotData<bool(const QString, const QString)>(30, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 28 }, { QMetaType::QString, 29 },
        }}),
        // Slot 'slot_chargingLog_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, db_data)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 32, 33 },
        }}),
        // Slot 'slot_heartbitData_From_soc'
        QtMocHelpers::SlotData<void(heartbit_data)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'slot_membershipCard_authorized_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, int, QString, QString)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Int, 38 }, { QMetaType::QString, 39 }, { QMetaType::QString, 40 },
        }}),
        // Slot 'slot_membershipCard_finished_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, int, int, int, QString, uint32_t, QString)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Int, 38 }, { QMetaType::Int, 42 }, { QMetaType::Int, 43 },
            { QMetaType::QString, 39 }, { 0x80000000 | 44, 45 }, { QMetaType::QString, 40 },
        }}),
        // Slot 'slot_select_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, QString, int, QString, QString, QString, QString, QString, QString)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QString, 47 }, { QMetaType::Int, 48 }, { QMetaType::QString, 49 },
            { QMetaType::QString, 50 }, { QMetaType::QString, 51 }, { QMetaType::QString, 52 }, { QMetaType::QString, 53 },
            { QMetaType::QString, 54 },
        }}),
        // Slot 'slot_select_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, QString, int, QString, QString, QString, QString, QString)>(46, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QString, 47 }, { QMetaType::Int, 48 }, { QMetaType::QString, 49 },
            { QMetaType::QString, 50 }, { QMetaType::QString, 51 }, { QMetaType::QString, 52 }, { QMetaType::QString, 53 },
        }}),
        // Slot 'slot_select_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, QString, int, QString, QString, QString, QString)>(46, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QString, 47 }, { QMetaType::Int, 48 }, { QMetaType::QString, 49 },
            { QMetaType::QString, 50 }, { QMetaType::QString, 51 }, { QMetaType::QString, 52 },
        }}),
        // Slot 'slot_select_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, QString, int, QString, QString, QString)>(46, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QString, 47 }, { QMetaType::Int, 48 }, { QMetaType::QString, 49 },
            { QMetaType::QString, 50 }, { QMetaType::QString, 51 },
        }}),
        // Slot 'slot_select_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, QString, int, QString, QString)>(46, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QString, 47 }, { QMetaType::Int, 48 }, { QMetaType::QString, 49 },
            { QMetaType::QString, 50 },
        }}),
        // Slot 'slot_select_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, QString, int, QString)>(46, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QString, 47 }, { QMetaType::Int, 48 }, { QMetaType::QString, 49 },
        }}),
        // Slot 'slot_select_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, QString, int)>(46, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QString, 47 }, { QMetaType::Int, 48 },
        }}),
        // Slot 'slot_select_mCard_status_From_soc'
        QtMocHelpers::SlotData<void(const mp_wk_key, QString, QString)>(55, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QString, 47 }, { QMetaType::QString, 39 },
        }}),
        // Slot 'slot_revision_mCard_status_From_soc'
        QtMocHelpers::SlotData<void(QString, int, int, int, QString)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 39 }, { QMetaType::Int, 48 }, { QMetaType::Int, 57 }, { QMetaType::Int, 58 },
            { QMetaType::QString, 59 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DB_PostgreSQL, qt_meta_tag_ZN13DB_PostgreSQLE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DB_PostgreSQL::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DB_PostgreSQLE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DB_PostgreSQLE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13DB_PostgreSQLE_t>.metaTypes,
    nullptr
} };

void DB_PostgreSQL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DB_PostgreSQL *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sig_end(); break;
        case 1: _t->sig_charging_log_select_ret((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<charging_log_admin>>>(_a[2]))); break;
        case 2: _t->sig_hmi_current_stat_select_ret((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<hmi_current_stat_admin>>>(_a[2]))); break;
        case 3: _t->sig_hmi_device_select_ret((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<hmi_device_admin>>>(_a[2]))); break;
        case 4: _t->sig_membership_card_select_ret((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<membership_card_admin>>>(_a[2]))); break;
        case 5: _t->sig_membership_log_select_ret((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<membership_log_admin>>>(_a[2]))); break;
        case 6: _t->sig_store_user_select_ret((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<store_user_admin>>>(_a[2]))); break;
        case 7: _t->slot_end(); break;
        case 8: _t->slot_set_p_soc((*reinterpret_cast< std::add_pointer_t<Hub*>>(_a[1]))); break;
        case 9: { bool _r = _t->slot_createStore((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->slot_query_register((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->slot_query_register_hmi((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->slot_query_find_hello_hmi((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->slot_chargingLog_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<db_data>>(_a[2]))); break;
        case 14: _t->slot_heartbitData_From_soc((*reinterpret_cast< std::add_pointer_t<heartbit_data>>(_a[1]))); break;
        case 15: _t->slot_membershipCard_authorized_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 16: _t->slot_membershipCard_finished_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7]))); break;
        case 17: _t->slot_select_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[9]))); break;
        case 18: _t->slot_select_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8]))); break;
        case 19: _t->slot_select_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7]))); break;
        case 20: _t->slot_select_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        case 21: _t->slot_select_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 22: _t->slot_select_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 23: _t->slot_select_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 24: _t->slot_select_mCard_status_From_soc((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 25: _t->slot_revision_mCard_status_From_soc((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<charging_log_admin> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<hmi_current_stat_admin> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<hmi_device_admin> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< heartbit_data >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DB_PostgreSQL::*)()>(_a, &DB_PostgreSQL::sig_end, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DB_PostgreSQL::*)(const mp_wk_key , QVector<charging_log_admin> )>(_a, &DB_PostgreSQL::sig_charging_log_select_ret, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DB_PostgreSQL::*)(const mp_wk_key , QVector<hmi_current_stat_admin> )>(_a, &DB_PostgreSQL::sig_hmi_current_stat_select_ret, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DB_PostgreSQL::*)(const mp_wk_key , QVector<hmi_device_admin> )>(_a, &DB_PostgreSQL::sig_hmi_device_select_ret, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DB_PostgreSQL::*)(const mp_wk_key , QVector<membership_card_admin> )>(_a, &DB_PostgreSQL::sig_membership_card_select_ret, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DB_PostgreSQL::*)(const mp_wk_key , QVector<membership_log_admin> )>(_a, &DB_PostgreSQL::sig_membership_log_select_ret, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DB_PostgreSQL::*)(const mp_wk_key , QVector<store_user_admin> )>(_a, &DB_PostgreSQL::sig_store_user_select_ret, 6))
            return;
    }
}

const QMetaObject *DB_PostgreSQL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DB_PostgreSQL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DB_PostgreSQLE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DB_PostgreSQL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void DB_PostgreSQL::sig_end()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DB_PostgreSQL::sig_charging_log_select_ret(const mp_wk_key _t1, QVector<charging_log_admin> _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void DB_PostgreSQL::sig_hmi_current_stat_select_ret(const mp_wk_key _t1, QVector<hmi_current_stat_admin> _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void DB_PostgreSQL::sig_hmi_device_select_ret(const mp_wk_key _t1, QVector<hmi_device_admin> _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void DB_PostgreSQL::sig_membership_card_select_ret(const mp_wk_key _t1, QVector<membership_card_admin> _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void DB_PostgreSQL::sig_membership_log_select_ret(const mp_wk_key _t1, QVector<membership_log_admin> _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void DB_PostgreSQL::sig_store_user_select_ret(const mp_wk_key _t1, QVector<store_user_admin> _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}
QT_WARNING_POP
