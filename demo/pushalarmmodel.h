#ifndef PUSHALARMMODEL_H
#define PUSHALARMMODEL_H

#include <QAbstractTableModel>
#include "json/json.h"

class PushAlarmModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    enum PushAlarmRoles {
        PushMsgTypeRole = Qt::UserRole + 1,
        PushAlarmTimeRole,
        PushDeviceSerialRole,
        PushChannelIDRole,
        PushAlarmTypeRole,
		PushPicUrlRole,
        PushVideoUrlRole,
        PushCustominfoRole,
        PushCustominfoTypeRole,
		PushAlarmPicUrlRole,
        PushIsEncryptRole
    };

    explicit PushAlarmModel(QObject *parent = 0);

    void AddPushAlarmModel(const QByteArray& json);
    QString getAlarmType(const QModelIndex& index);
    QString getAlarmTime(const QModelIndex& index);
    QString getPicUrl(const QModelIndex& index);
    QString getDeviceSerial(const QModelIndex& index);
    bool    isEncrypt(const QModelIndex& index);
    int     getEncryptType(const QModelIndex& index);
    QString getPlatPassWord(const QModelIndex& index);


    virtual int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    virtual int columnCount(const QModelIndex&  parent = QModelIndex()) const override;
    virtual QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

protected:
    virtual QHash<int, QByteArray> roleNames() const;

signals:

public slots:

private:
	QList<Json::Value>  m_pushAlarmList;
    int                 m_EncryptType;
    QString             m_PlatPassWord;
};

#endif // PUSHALARMMODEL_H
