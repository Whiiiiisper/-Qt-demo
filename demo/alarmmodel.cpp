#include "alarmmodel.h"

AlarmModel::AlarmModel(QObject *parent) :
    QAbstractTableModel(parent)
{
}

void AlarmModel::setAlarmModel(const QByteArray& json)
{
    beginResetModel();
	Json::Reader reader;
	Json::Value	value;
	if(reader.parse(json.data(), value) && value["result"]["code"].asString() == "200") {
        value = value["result"];
        if (value.isObject() && value["code"].asString() == "200")
        {
            m_alarmList.clear();
            Json::Value &alarmListVal = value["data"];
            if(alarmListVal.isArray()) {
                int alarmCount = alarmListVal.size();
                for(int i = 0; i < alarmCount; i++) {
                    m_alarmList.push_back(alarmListVal[i]);
                }
            } 
        }
	}
    endResetModel();
}

QString AlarmModel::getAlarmId(const QModelIndex &index)
{
    int row = index.row();
	Json::Value json = m_alarmList[row];
	return json["alarmId"].asString().c_str();
}

QString AlarmModel::getPicUrl(const QModelIndex& index)
{
    int row = index.row();
    Json::Value json = m_alarmList[row];
    return json["alarmPicUrl"].asString().c_str();
}

QString AlarmModel::getDeviceSerial(const QModelIndex& index)
{
    int row = index.row();
    Json::Value json = m_alarmList[row];
    return json["deviceSerial"].asString().c_str();
}

int AlarmModel::isEncrypt(const QModelIndex& index)
{
    int row = index.row();
    Json::Value json = m_alarmList[row];
    return json["isEncrypt"].asInt();
}

void AlarmModel::setAlarmChecked(const QModelIndex& index)
{
    int row = index.row();
    m_alarmList[row]["isChecked"] = 1;
}


int AlarmModel::rowCount(const QModelIndex& parent) const
{
    Q_UNUSED(parent)
    return m_alarmList.count();
}

int AlarmModel::columnCount(const QModelIndex&  parent) const
{
    Q_UNUSED(parent)
    return roleNames().count();
}

QVariant AlarmModel::data(const QModelIndex& index, int role) const
{
    if (Qt::DisplayRole != role)
        return QVariant();

    if (index.row() < 0 || index.row() >= m_alarmList.count())
        return QVariant();

    int row = index.row();
	Json::Value json = m_alarmList[row];

    int column = index.column();
    int roleType = Qt::UserRole + 1 + column;
    switch (roleType) {
    case AlarmIdRole:
    case AlarmSerialRole:
    case AlarmNameRole:
    case AlarmStartRole:
	case AlarmPicUrlRole:
		return json[roleNames()[roleType].data()].asString().c_str();
    case AlarmTypeRole:
	case AlarmChannelNoRole:
	case AlarmCheckedRole:
	case AlarmEncryptedRole:
		return json[roleNames()[roleType].data()].asInt();
    }

    return QVariant();
}

QVariant AlarmModel::headerData(int section, Qt::Orientation orientation, int role) const
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

QHash<int, QByteArray> AlarmModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[AlarmIdRole]    = "alarmId";
    roles[AlarmSerialRole] = "deviceSerial";
    roles[AlarmNameRole] = "alarmName";
    roles[AlarmTypeRole]  = "alarmType";
    roles[AlarmStartRole] = "alarmStart";
	roles[AlarmChannelNoRole] = "cameraNo";
	roles[AlarmCheckedRole] = "isChecked";
	roles[AlarmEncryptedRole] = "isEncrypt";
	roles[AlarmPicUrlRole] = "alarmPicUrl";
    return roles;
}
