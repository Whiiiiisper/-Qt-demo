#ifndef LOCALSETTING_H
#define LOCALSETTING_H

#include <QObject>

class LocalSetting : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString authAddress READ authAddress)
    Q_PROPERTY(QString platformAddress READ platformAddress)
    Q_PROPERTY(QString appKey READ appKey)

private:
    explicit LocalSetting(QObject *parent = 0);

public:
    ~LocalSetting();
    static LocalSetting* getInstance();

    QString& authAddress();
    QString& platformAddress();
    QString& appKey();
	QString& appSecret();
	QString& pushSecret();
    QString& areaId();
    QString& loginVer();
	bool isPlay();
    bool dataUtf8();
    bool streamTrans();
    bool saveData();
    int  PageStart();
    int  PageSize();
    bool closeP2P();
    int  P2PMaxNum();
    int  P2PCheckPeriod();
    int  P2PExpire();
    int  logLevel();
    bool download();
    bool p2pdownload();
signals:

public slots:

private:
    QString m_authAddress;
    QString m_platformAddress;
    QString m_appKey;
	QString m_appSecret;
	QString m_pushSecret;
    QString m_areaID;
    QString m_loginVer;
	QString m_Phone;
	bool m_bPlay;
    bool m_bSaveData;
    int m_iPageStart;
    int m_iPageSize;
    bool m_bDataUtf8;
    bool m_bStreamTrans;
    bool m_bCloseP2P;
    bool m_bDownload;
    int m_iP2PMaxNum;
    int m_iP2PCheckPeroid;
    int m_iP2PExpire;
    int m_iLogLevel;
    bool m_bp2pDownload;
};

#endif // LOCALSETTING_H
