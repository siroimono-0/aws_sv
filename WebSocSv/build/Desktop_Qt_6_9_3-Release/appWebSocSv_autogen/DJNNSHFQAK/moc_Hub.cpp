/****************************************************************************
** Meta object code from reading C++ file 'Hub.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Cpp_Module/Hub.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Hub.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3HubE_t {};
} // unnamed namespace

template <> constexpr inline auto Hub::qt_create_metaobjectdata<qt_meta_tag_ZN3HubE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Hub",
        "sig_end",
        "",
        "slot_start_sv",
        "slot_end",
        "slot_new_connection",
        "slot_del_mpWk",
        "idx",
        "slot_timeOut_heartbit",
        "slot_charging_log_select_ret_From_DB__To_admin",
        "mp_wk_key",
        "QList<charging_log_admin>",
        "ret",
        "slot_hmi_current_stat_select_ret_From_DB__To_admin",
        "QList<hmi_current_stat_admin>",
        "slot_hmi_device_select_ret_From_DB__To_admin",
        "QList<hmi_device_admin>",
        "slot_membership_card_select_ret_From_DB__To_admin",
        "QList<membership_card_admin>",
        "slot_membership_log_select_ret_From_DB__To_admin",
        "QList<membership_log_admin>",
        "slot_store_user_select_ret_From_DB__To_admin",
        "QList<store_user_admin>",
        "slot_membershipCard_authorized_ack_To_hmi",
        "ok",
        "msg",
        "slot_membershipCard_finished_ack_To_hmi",
        "slot_chargingLog_authorized_ack_To_hmi",
        "slot_chargingLog_charging_start_ack_To_hmi",
        "uint32_t",
        "ocpp_tx_id",
        "slot_chargingLog_charging_finished_ack_To_hmi",
        "slot_mCard_status_ret_From_DB__To_admin"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sig_end'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slot_start_sv'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slot_end'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slot_new_connection'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slot_del_mpWk'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'slot_timeOut_heartbit'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slot_charging_log_select_ret_From_DB__To_admin'
        QtMocHelpers::SlotData<void(const mp_wk_key, QVector<charging_log_admin>)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { 0x80000000 | 11, 12 },
        }}),
        // Slot 'slot_hmi_current_stat_select_ret_From_DB__To_admin'
        QtMocHelpers::SlotData<void(const mp_wk_key, QVector<hmi_current_stat_admin>)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { 0x80000000 | 14, 12 },
        }}),
        // Slot 'slot_hmi_device_select_ret_From_DB__To_admin'
        QtMocHelpers::SlotData<void(const mp_wk_key, QVector<hmi_device_admin>)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { 0x80000000 | 16, 12 },
        }}),
        // Slot 'slot_membership_card_select_ret_From_DB__To_admin'
        QtMocHelpers::SlotData<void(const mp_wk_key, QVector<membership_card_admin>)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { 0x80000000 | 18, 12 },
        }}),
        // Slot 'slot_membership_log_select_ret_From_DB__To_admin'
        QtMocHelpers::SlotData<void(const mp_wk_key, QVector<membership_log_admin>)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { 0x80000000 | 20, 12 },
        }}),
        // Slot 'slot_store_user_select_ret_From_DB__To_admin'
        QtMocHelpers::SlotData<void(const mp_wk_key, QVector<store_user_admin>)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { 0x80000000 | 22, 12 },
        }}),
        // Slot 'slot_membershipCard_authorized_ack_To_hmi'
        QtMocHelpers::SlotData<void(const mp_wk_key, bool, QString)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { QMetaType::Bool, 24 }, { QMetaType::QString, 25 },
        }}),
        // Slot 'slot_membershipCard_authorized_ack_To_hmi'
        QtMocHelpers::SlotData<void(const mp_wk_key, bool)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { QMetaType::Bool, 24 },
        }}),
        // Slot 'slot_membershipCard_finished_ack_To_hmi'
        QtMocHelpers::SlotData<void(const mp_wk_key, bool)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { QMetaType::Bool, 24 },
        }}),
        // Slot 'slot_chargingLog_authorized_ack_To_hmi'
        QtMocHelpers::SlotData<void(const mp_wk_key)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 },
        }}),
        // Slot 'slot_chargingLog_charging_start_ack_To_hmi'
        QtMocHelpers::SlotData<void(const mp_wk_key, uint32_t)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { 0x80000000 | 29, 30 },
        }}),
        // Slot 'slot_chargingLog_charging_finished_ack_To_hmi'
        QtMocHelpers::SlotData<void(const mp_wk_key)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 },
        }}),
        // Slot 'slot_mCard_status_ret_From_DB__To_admin'
        QtMocHelpers::SlotData<void(const mp_wk_key, QVector<membership_card_admin>)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { 0x80000000 | 18, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Hub, qt_meta_tag_ZN3HubE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Hub::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3HubE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3HubE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3HubE_t>.metaTypes,
    nullptr
} };

void Hub::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Hub *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sig_end(); break;
        case 1: _t->slot_start_sv(); break;
        case 2: _t->slot_end(); break;
        case 3: _t->slot_new_connection(); break;
        case 4: _t->slot_del_mpWk((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->slot_timeOut_heartbit(); break;
        case 6: _t->slot_charging_log_select_ret_From_DB__To_admin((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<charging_log_admin>>>(_a[2]))); break;
        case 7: _t->slot_hmi_current_stat_select_ret_From_DB__To_admin((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<hmi_current_stat_admin>>>(_a[2]))); break;
        case 8: _t->slot_hmi_device_select_ret_From_DB__To_admin((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<hmi_device_admin>>>(_a[2]))); break;
        case 9: _t->slot_membership_card_select_ret_From_DB__To_admin((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<membership_card_admin>>>(_a[2]))); break;
        case 10: _t->slot_membership_log_select_ret_From_DB__To_admin((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<membership_log_admin>>>(_a[2]))); break;
        case 11: _t->slot_store_user_select_ret_From_DB__To_admin((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<store_user_admin>>>(_a[2]))); break;
        case 12: _t->slot_membershipCard_authorized_ack_To_hmi((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 13: _t->slot_membershipCard_authorized_ack_To_hmi((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 14: _t->slot_membershipCard_finished_ack_To_hmi((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 15: _t->slot_chargingLog_authorized_ack_To_hmi((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1]))); break;
        case 16: _t->slot_chargingLog_charging_start_ack_To_hmi((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2]))); break;
        case 17: _t->slot_chargingLog_charging_finished_ack_To_hmi((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1]))); break;
        case 18: _t->slot_mCard_status_ret_From_DB__To_admin((*reinterpret_cast< std::add_pointer_t<mp_wk_key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<membership_card_admin>>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<charging_log_admin> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<hmi_current_stat_admin> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<hmi_device_admin> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
            }
            break;
        case 12:
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mp_wk_key >(); break;
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
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Hub::*)()>(_a, &Hub::sig_end, 0))
            return;
    }
}

const QMetaObject *Hub::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hub::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3HubE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Hub::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Hub::sig_end()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
