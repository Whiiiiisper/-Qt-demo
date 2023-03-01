#include <QFile>
#include <QSettings>
#include <QDebug>
#include <QCoreApplication>
#include "localsetting.h"

LocalSetting::LocalSetting(QObject *parent) :
    QObject(parent)
{
    QString appName = "EzvizQtDemo";
    QString iniFile = "/" + appName + ".ini";
    QString configFile = QCoreApplication::applicationDirPath()  + iniFile;
    QSettings settingFile(configFile, QSettings::IniFormat);
    qDebug() << appName << configFile;

    //Judge Config is exist
    if (QFile::exists(configFile)) {
        m_authAddress = settingFile.value("OpenAPI/authAddress").toString();
        m_platformAddress = settingFile.value("OpenAPI/platformAddress").toString();
        m_appKey = settingFile.value("OpenAPI/appKey").toString();
		m_pushSecret = settingFile.value("OpenAPI/pushSecret").toString();
        m_areaID = settingFile.value("OpenAPI/areaID").toString();
        m_loginVer = settingFile.value("OpenAPI/loginVer").toString();
		m_bPlay = settingFile.value("OpenAPI/isPlay").toBool();
        m_bDataUtf8 = settingFile.value("OpenAPI/dataUtf8").toBool();
        m_bStreamTrans = settingFile.value("OpenAPI/streamTrans").toBool();
        m_bSaveData = settingFile.value("OpenAPI/saveData").toBool();
        m_iPageStart = settingFile.value("OpenAPI/pageStart").toInt();
        m_iPageSize = settingFile.value("OpenAPI/pageSize").toInt();
        m_bCloseP2P = settingFile.value("OpenAPI/closeP2P").toBool();
        m_iP2PMaxNum = settingFile.value("OpenAPI/P2PMaxNum").toInt();
        m_iP2PCheckPeroid = settingFile.value("OpenAPI/P2PCheckPeriod").toInt();
        m_iP2PExpire = settingFile.value("OpenAPI/P2PExpire").toInt();
        m_iLogLevel = settingFile.value("OpenAPI/logLevel").toInt();
        m_bDownload = settingFile.value("OpenAPI/download").toBool();
        m_bp2pDownload= settingFile.value("OpenAPI/p2pdownload").toBool();
    }
    else {
        m_authAddress = "https://auth.ys7.com";
        settingFile.setValue("OpenAPI/authAddress", m_authAddress);

        m_platformAddress = "https://open.ys7.com";
        settingFile.setValue("OpenAPI/platformAddress", m_platformAddress);

        m_appKey = "";
        settingFile.setValue("OpenAPI/appKey", m_appKey);

        m_pushSecret = "";
        settingFile.setValue("OpenAPI/pushSecret", m_pushSecret);

        m_areaID = "";
        settingFile.setValue("OpenAPI/areaID", m_areaID);

        m_loginVer = "";
        settingFile.setValue("OpenAPI/loginVer", m_loginVer);

		m_iPageStart = 0;
		settingFile.setValue("OpenAPI/pageStart", m_iPageStart);

        m_iPageSize = 0;
        settingFile.setValue("OpenAPI/pageSize", m_iPageStart);

		m_bPlay = true;
		settingFile.setValue("OpenAPI/isPlay", m_bPlay);

        m_bDataUtf8 = false;
        settingFile.setValue("OpenAPI/dataUtf8", m_bDataUtf8);

        m_bStreamTrans = false;
        settingFile.setValue("OpenAPI/streamTrans", m_bStreamTrans);

        m_bSaveData = false;
        settingFile.setValue("OpenAPI/saveData", m_bSaveData);

        m_bCloseP2P = false;
        settingFile.setValue("OpenAPI/closeP2P", m_bCloseP2P);

        m_iP2PMaxNum = 0;
        settingFile.setValue("OpenAPI/P2PMaxNum", m_iP2PMaxNum);

        m_iP2PCheckPeroid = 0;
        settingFile.setValue("OpenAPI/P2PCheckPeriod", m_iP2PCheckPeroid);

        m_iP2PExpire = 0;
        settingFile.setValue("OpenAPI/P2PExpire", m_iP2PExpire);

        m_iLogLevel = 3;
        settingFile.setValue("OpenAPI/logLevel", m_iLogLevel);

        m_bDownload = false;
        settingFile.setValue("OpenAPI/download", m_bDownload);

        m_bp2pDownload =false;
        settingFile.setValue("OpenAPI/p2pdownload", m_bp2pDownload);
    }
    qDebug() << "AuthAddr:" << m_authAddress;
    qDebug() << "PlatformAddress:" << m_platformAddress;
    qDebug() << "AppID:" <<  m_appKey;
}

LocalSetting::~LocalSetting()
{
}

LocalSetting* LocalSetting::getInstance()
{
    static LocalSetting m_instance;
    return &m_instance;
}

QString& LocalSetting::authAddress()
{
    return m_authAddress;
}

QString& LocalSetting::platformAddress()
{
    return m_platformAddress;
}

QString& LocalSetting::appKey()
{
    return m_appKey;
}

QString& LocalSetting::pushSecret()
{
	return m_pushSecret;
}

QString& LocalSetting::appSecret()
{
	return m_appSecret;
}

QString& LocalSetting::areaId()
{
    return m_areaID;
}

QString& LocalSetting::loginVer()
{
    return m_loginVer;
}

bool LocalSetting::isPlay()
{
	return m_bPlay;
}

bool LocalSetting::dataUtf8()
{
    return m_bDataUtf8;
}

bool LocalSetting::streamTrans()
{
    return m_bStreamTrans;
}

bool LocalSetting::saveData()
{
    return m_bSaveData;
}

int  LocalSetting::PageStart()
{
    return m_iPageStart;
}

int  LocalSetting::PageSize()
{
    return m_iPageSize;
}

bool LocalSetting::closeP2P()
{
    return m_bCloseP2P;
}

int  LocalSetting::P2PMaxNum()
{
    return m_iP2PMaxNum;
}

int  LocalSetting::P2PCheckPeriod()
{
    return m_iP2PCheckPeroid;
}

int  LocalSetting::P2PExpire()
{
    return m_iP2PExpire;
}

int  LocalSetting::logLevel()
{
    return m_iLogLevel;
}

bool LocalSetting::download()
{
    return m_bDownload;
}

bool LocalSetting::p2pdownload()
{
    return m_bp2pDownload;
}