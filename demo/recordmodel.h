#ifndef RECORDMODEL_H
#define RECORDMODEL_H

#include <QAbstractTableModel>
#include "json/json.h"

class RecordModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    enum RecordRoles {
        StartTimeRole = Qt::UserRole + 1,
        StopTimeRole
    };

    explicit RecordModel(QObject *parent = 0);

    void setRecordModel(const QByteArray& json);
    QString getStartTime(const QModelIndex& index);
    QString getStopTime(const QModelIndex& index);
    int getFileSource(const QModelIndex &index);
    QString getVideoEncryptStatus(const QModelIndex &index);

    void setDevSerial(const QString& devSerial);
    QString getDevSerial() const;
    void setChannelNo(const int channelNo);
    int getChannelNo() const;
    void setIsEncrypt(const int& isEncrypt);
    int isEncrypt() const;

    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    virtual int columnCount(const QModelIndex&  parent = QModelIndex()) const override;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

protected:
    virtual QHash<int, QByteArray> roleNames() const;

signals:

public slots:

private:
    QList<Json::Value> m_recordList;
    QString m_devSerial;
    int     m_iChannelNo;
    int m_isEncrypt;
};

#endif // RECORDMODEL_H
