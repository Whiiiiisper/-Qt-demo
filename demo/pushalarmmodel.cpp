#include "pushalarmmodel.h"

PushAlarmModel::PushAlarmModel(QObject *parent) :
    QAbstractTableModel(parent)
{
}

void PushAlarmModel::AddPushAlarmModel(const QByteArray& json)
{
    beginResetModel();
	Json::Reader reader;
	Json::Value	value;
	if(reader.parse(json.data(), value)) {
	    m_pushAlarmList.push_back(value);
	}
    endResetModel();
}

QString PushAlarmModel::getAlarmType(const QModelIndex &index)
{
    int row = index.row();
	Json::Value json = m_pushAlarmList[row];
	return json["alarmType"].asString().c_str();
}

QString PushAlarmModel::getAlarmTime(const QModelIndex& index)
{
    int row = index.row();
    Json::Value json = m_pushAlarmList[row];
    return json["alarmTime"].asString().c_str();
}

QString PushAlarmModel::getPicUrl(const QModelIndex& index)
{
    int row = index.row();
    Json::Value json = m_pushAlarmList[row];
    return json["alarmPicUrl"].asString().c_str();
}

QString PushAlarmModel::getDeviceSerial(const QModelIndex& index)
{
    int row = index.row();
    Json::Value json = m_pushAlarmList[row];
    return json["deviceSeril"].asString().c_str();
}

bool PushAlarmModel::isEncrypt(const QModelIndex& index)
{
    int row = index.row();
    Json::Value json = m_pushAlarmList[row];
    return json["isEncrypt"].asInt() == 1?true:false;
}

int PushAlarmModel::rowCount(const QModelIndex& parent) const
{
    Q_UNUSED(parent)
    return m_pushAlarmList.count();
}

int PushAlarmModel::columnCount(const QModelIndex&  parent) const
{
    Q_UNUSED(parent)
    return roleNames().count();
}

QVariant PushAlarmModel::data(const QModelIndex& index, int role) const
{
    if (Qt::DisplayRole != role)
        return QVariant();

    if (index.row() < 0 || index.row() >= m_pushAlarmList.count())
        return QVariant();

    int row = index.row();
	Json::Value json = m_pushAlarmList[row];

    int column = index.column();
    int roleType = Qt::UserRole + 1 + column;
    switch (roleType) {
    case PushMsgTypeRole:
    case PushAlarmTimeRole:
    case PushDeviceSerialRole:
    case PushChannelIDRole:
	case PushAlarmTypeRole:
    case PushPicUrlRole:
    case PushVideoUrlRole:
    case PushCustominfoRole:
    case PushCustominfoTypeRole:
    case PushAlarmPicUrlRole:
		return json[roleNames()[roleType].data()].asString().c_str();
    case PushIsEncryptRole:
        return json[roleNames()[roleType].data()].asInt();
    }

    return QVariant();
}

QVariant PushAlarmModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (Qt::DisplayRole != role)
        return QVariant();

    if (Qt::Horizontal == orientation) {
        return roleNames()[Qt::UserRole + 1 + section];
    }
    else {
        return section + 1;
    }
}

QHash<int, QByteArray> PushAlarmModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[PushMsgTypeRole]    = "msgType";
    roles[PushAlarmTimeRole] = "alarmTime";
    roles[PushDeviceSerialRole] = "deviceSeril";
    roles[PushChannelIDRole]  = "channelID";
    roles[PushAlarmTypeRole] = "alarmType";
	roles[PushPicUrlRole] = "picUrl";
	roles[PushVideoUrlRole] = "videoUrl";
	roles[PushCustominfoRole] = "custominfo";
	roles[PushCustominfoTypeRole] = "custominfoType";
    roles[PushAlarmPicUrlRole] = "alarmPicUrl";
    roles[PushIsEncryptRole] = "isEncrypt";
    return roles;
}
