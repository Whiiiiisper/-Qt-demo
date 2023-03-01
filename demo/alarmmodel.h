#ifndef ALARMMODEL_H
#define ALARMMODEL_H

#include <QAbstractTableModel>
#include "json/json.h"

class AlarmModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    enum AlarmRoles {
        AlarmIdRole = Qt::UserRole + 1,
        AlarmSerialRole,
        AlarmNameRole,
        AlarmTypeRole,
        AlarmStartRole,
		AlarmChannelNoRole,
		AlarmCheckedRole,
		AlarmEncryptedRole,
		AlarmPicUrlRole
    };

    explicit AlarmModel(QObject *parent = 0);

    void setAlarmModel(const QByteArray& json);
    QString getAlarmId(const QModelIndex& index);
    QString getPicUrl(const QModelIndex& index);
    QString getDeviceSerial(const QModelIndex& index);
    int isEncrypt(const QModelIndex& index);
	void setAlarmChecked(const QModelIndex& index);

    virtual int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    virtual int columnCount(const QModelIndex&  parent = QModelIndex()) const override;
    virtual QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

protected:
    virtual QHash<int, QByteArray> roleNames() const;

signals:

public slots:

private:
	QList<Json::Value>  m_alarmList;
};

#endif // ALARMMODEL_H
