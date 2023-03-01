#include <QDateTime>
#include <QDebug>
#include "recordmodel.h"

RecordModel::RecordModel(QObject *parent) :
    QAbstractTableModel(parent)
{
}

void RecordModel::setRecordModel(const QByteArray& json)
{
    beginResetModel();
	Json::Reader reader;
	Json::Value	value;
	if(reader.parse(json.data(), value)) {
		m_recordList.clear();
		Json::Value &fileListVal = value["FileList"];
		if(fileListVal.isArray()) {
			int fileCount = fileListVal.size();
			for(int i = 0; i < fileCount; i++) {
				m_recordList.push_back(fileListVal[i]);
			}
		} 
	}
    qDebug() << __LINE__ << __FUNCTION__ << m_recordList.size();
    endResetModel();
}

int RecordModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_recordList.count();
}

int RecordModel::columnCount(const QModelIndex&  parent) const
{
    Q_UNUSED(parent)
    return roleNames().count();
}

QVariant RecordModel::data(const QModelIndex &index, int role) const
{
    if (Qt::DisplayRole != role)
        return QVariant();

    if (index.row() < 0 || index.row() > rowCount())
        return QVariant();

    int row = index.row();
	Json::Value json = m_recordList[row];

    int column = index.column();
    int roleType = Qt::UserRole + 1 + column;
    switch (roleType) {
    case StartTimeRole:
    case StopTimeRole:
		return json[roleNames()[roleType].data()].asString().c_str();
    }

    return QVariant();
}

QVariant RecordModel::headerData(int section, Qt::Orientation orientation, int role) const
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

QHash<int, QByteArray> RecordModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[StartTimeRole] = "StartTime";
    roles[StopTimeRole] = "EndTime";
    return roles;
}

void RecordModel::setDevSerial(const QString& devSerial)
{
    m_devSerial = devSerial;
}

QString RecordModel::getDevSerial() const
{
    return m_devSerial;
}

void RecordModel::setChannelNo(const int channelNo)
{
    m_iChannelNo = channelNo;
}

int RecordModel::getChannelNo() const
{
    return m_iChannelNo;
}

void RecordModel::setIsEncrypt(const int& isEncrypt)
{
    m_isEncrypt = isEncrypt;
}

int RecordModel::isEncrypt() const
{
    return m_isEncrypt;
}

QString RecordModel::getStartTime(const QModelIndex &index)
{
    int row = index.row();
	Json::Value json = m_recordList[row];
	return json["StartTime"].asString().c_str();
}

QString RecordModel::getStopTime(const QModelIndex &index)
{
    int row = index.row();
	Json::Value json = m_recordList[row];
	return json["EndTime"].asString().c_str();
}
int RecordModel::getFileSource(const QModelIndex &index)
{
    int row = index.row();
    Json::Value json = m_recordList[row];
    return json["FileSource"].asInt();
}

QString RecordModel::getVideoEncryptStatus(const QModelIndex &index)
{
    int row = index.row();
    Json::Value json = m_recordList[row];
    return json["KeyCheckSum"].asString().c_str();
}

