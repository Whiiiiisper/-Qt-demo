#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QTableWidgetItem>
#include "loginwindow.h"
#include "opennetstream.h"
#include "singledevicelogin.h"

QT_BEGIN_NAMESPACE
class QTableView;
class QTextBrowser;
class CameraModel;
class AlarmModel;
class PushAlarmModel;
class RecordModel;
class QMenu;
class QAction;
QT_END_NAMESPACE

/** \enum PTZDirect
 *  \brief PTZ Control Direct
 */
enum PTZCMD
{
    DIRECT_UP,
    DIRECT_DOWN,
    DIRECT_LEFT,
    DIRECT_RIGHT,
    DIRECT_UPLEFT,
    DIRECT_DOWNLEFT,
    DIRECT_UPRIGHT,
    DIRECT_DOWNRIGHT,
    PTZ_ZOOMIN,
    PTZ_ZOOMOUT,
    PTZ_FOCUSNEAR,
    PTZ_FOCUSFAR,
    PTZ_IRISSTARTUP,
    PTZ_IRISSTOPDOWN,
    PTZ_LIGHT,
    PTZ_WIPER,
    PTZ_AUTO
};


enum PlayBackScale
{

     EZ_PLAYBACK_RATE_1 = 1 ,
     EZ_PLAYBACK_RATE_2 ,    
     EZ_PLAYBACK_RATE_1_2 ,
     EZ_PLAYBACK_RATE_4 ,     
     EZ_PLAYBACK_RATE_1_4 ,
     EZ_PLAYBACK_RATE_8 , 
     EZ_PLAYBACK_RATE_1_8 ,
     EZ_PLAYBACK_RATE_16 ,
     EZ_PLAYBACK_RATE_1_16 ,
     EZ_PLAYBACK_RATE_32 

};



#define PTZ_SPEED 7 //Default PTZ Control Speed

typedef struct tagDeviceTableViewInfo
{
    QString strSubserial;
    int iChannelNo;
    bool bEncrypt;
    int  iVideoLevel;
}DeviceTableViewInfo;

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT
    Q_ENUMS(TableIndex)

public:
    enum TableIndex {
        DeviceTableIndex,
        SharedDeviceIndex,
        AlarmTableIndex,
        PushAlarmTableIndex,
        PlayBackTableIndex,
        JsonInfoTableIndex
    };

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    static void __stdcall messageHandler(const char* szSessionId, unsigned int iMsgType, unsigned int iErrorCode,const char *pMessageInfo, void *pUser);
    static void __stdcall alarmTransparentMessageHandler(const char* szContent, void* pUser);
	static void __stdcall videoDataHandler(DataType enType, char* const pData, int iLen, void* pUser);
    static void __stdcall pushAlarmHandler(const char* szDesc, const char* szContent, const char* szDetail, void* pUser);
    static void __stdcall pushDevStatusHandler(const char* szDesc, const char* szContent, const char* szDetail, void* pUser);
    static void __stdcall pushTransparentHandler(const char* szDesc, const char* szContent, const char* szDetail, void* pUser);

    int switchVideoLevel(int videoLevel);
    int startRealPlay(int videoLevel);
    void doDefence(bool iOnOrOff);
	void showErrInfo(QString caption);
	void setVideoPath(const QString devSerial);
    int  setPlayBackScale(int iScale);
    const QString& curVideoPath();

    void addPushAlarm(const char* szAlarmInfo);

signals:
    void insRecordFile(const QByteArray& messageInfo);
    void insPlayException(unsigned errorCode, const QByteArray& messageInfo);
	void insPlayBackEnd(unsigned errorCode);
	void insPlayReconnectException(unsigned errorCode, const QByteArray& messageInfo);
    void insRecordSearchFailed(unsigned errorCode, const QByteArray& messageInfo);
    void insPlayAlarm(QString szCameraId, QString szContent, QString szAlarmTime);
	void insPlayPush(QString szDesc, QString szContent, QString szDetail);
	void insPlayPushAlarm(QString szDesc, QString szContent, QString szDetail);
    void insPtzStart(PTZCMD emDirect);
    void insPtzStop(PTZCMD emDirect);
    void insPlayStart();
    void insPlayStop();
    void insDownloadCloudFileEnd(unsigned errorCode);
    void insDownloadCloudFileException(unsigned errorCode, const QByteArray& messageInfo);
    void insStopDownloadCloudFile();

public slots:
    void slotDeviceTableViewPressed(const QModelIndex & index);
    void slotPlayBackTableViewPressed(const QModelIndex & index);
    void slotPushAlarmTableViewPressed(const QModelIndex & index);

public slots:
    void on_loginButton_clicked();
    void on_deviceAddButton_clicked();
    void on_stopRealPlayButton_clicked();
    void on_playBackListButton_clicked();
    void on_startPlayBackButton_clicked();
    void on_stopPlayBackButton_clicked();
    void on_pauseButton_clicked();
    void on_resumeButton_clicked();
    void on_deviceListButton_clicked();
    void on_alarmListButton_clicked();
    void on_capturePictureButton_clicked();
    void on_startVoiceTalkButton_clicked();
    void on_stopVoiceTalkButton_clicked();
    void on_switchSoundButton_clicked();
    void on_setVolumeSlider_sliderReleased();
    void on_setAlarmReadButton_clicked();
    void on_defenceOnButton_clicked();
    void on_defenceOffButton_clicked();

    void on_insRecordFile(const QByteArray& messageInfo);
    void on_insPlayException(unsigned errorCode, const QByteArray& messageInfo);
	void on_insPlayBackEnd(unsigned errorCode);
    void on_insPlayReconnectException(unsigned errorCode, const QByteArray& messageInfo);
    void on_insRecordSearchFailed(unsigned errorCode, const QByteArray& messageInfo);
    void on_insPlayAlarm(QString szCameraId, QString szContent, QString szAlarmTime);
	void on_insPlayPush(QString szDesc, QString szContent, QString szDetail);
	void on_insPtzStartUp();
	void on_insPtzStartDown();
	void on_insPtzStartLeft();
	void on_insPtzStartRight();
	void on_insPtzStartUpLeft();
	void on_insPtzStartDownLeft();
	void on_insPtzStartUpRight();
	void on_insPtzStartDownRight();

	void on_insPtzStopUp();
	void on_insPtzStopDown();
	void on_insPtzStopLeft();
	void on_insPtzStopRight();
	void on_insPtzStopUpLeft();
	void on_insPtzStopDownLeft();
	void on_insPtzStopUpRight();
	void on_insPtzStopDownRight();
    void on_insPtzStartZoomIn();
    void on_insPtzStartZoomOut();
    void on_insPtzStopZoomIn();
    void on_insPtzStopZoomOut();
    void on_insPtzStartFocusFar();
    void on_insPtzStartFocusNear();
    void on_insPtzStopFocusFar();
    void on_insPtzStopFocusNear();
    void on_insPtzStartIrisStartUp();
    void on_insPtzStartIrisStopDown();
    void on_insPtzStopIrisStartUp();
    void on_insPtzStopIrisStopDown();
	void on_insPtzAutoStartUp();
	void on_insPtzAutoStopDown();
    void on_insPtzStart(PTZCMD emDirect);
    void on_insPtzStop(PTZCMD emDirect);
    void on_insPlayStart();
    void on_insPlayStop();
    void on_insDownloadCloudFileEnd(unsigned errorCode);
    void on_insDownloadCloudFileException(unsigned errorCode, const QByteArray& messageInfo);
    void on_insStopDownloadCloudFile();
    void on_insGetCameraInfo();
    void on_insUpdateCameraInfo();
    void on_insGetSingleDeviceInfo();

    void on_smoothAction();
    void on_equilibriumAction();
    void on_clearAction();
    void on_highAction();
    void displayosd();
    int  ConvertOSDTime(char* szOsdTime);

    void on_sixteenthScaleAction();
    void on_eighthScaleAction();
    void on_quarterScaleAction();
    void on_halfScaleAction();
    void on_normalScaleAction();
    void on_doubleScaleAction();
    void on_fourScaleAction();
    void on_eightScaleAction();
    void on_sixteenScaleAction();
    void on_thirtytwoScaleAction();
    void on_isSupportQuickPlay();

private slots:

    void on_stopPushRecvButton_clicked();

    void on_startPushRecvButton_clicked();

    void on_pushAlarmCheckBox_stateChanged(int arg1);

    void on_pushDevStatusCheckBox_stateChanged(int arg1);

    void on_pushTransparentChannelCheckBox_stateChanged(int arg1);

    void on_showAlarmPicButton_clicked();

    void on_startRealPlayButton_clicked();

    void on_setPlayBackTimeButton_clicked();

    void on_pushButton_clicked();

    void on_shareDevListButton_clicked();

    void on_logoutButton_clicked();

    void on_videoRecordBox_stateChanged(int arg1);

    void on_deviceInfoButton_clicked();

    void on_SwitchPlat_Button_clicked();

    void on_startDownloadButton_clicked();

    void on_stopDownloadButton_clicked();

    void on_getSingleDeviceButton_clicked();

    void on_searchLoacalRecordButton_clicked();

    void on_searchCloudRecordButton_clicked();

	void periodic_capture_picture();


private:
	void updateVideoLevelBtn(const int iLevel);
    void updatePlayBackScaleBtn(int iScale);
    QString ConvertPlayErrorToMessage(const char* szError);
    bool  GetDeviceTableViewInfo(DeviceTableViewInfo& stDeviceInfo);

private:
    //! [1] ui controls
    Ui::MainWindow *ui;
    QTableView*   m_deviceTableView;
    QTableView*   m_shareDevTableView;
    QTableView*   m_alarmTableView;
    QTableView*   m_pushAlarmTableView;
    QTableView*   m_playBackTableView;
    QTextBrowser* m_jsonTextBrowser;
    QMenu*        m_realPlayMenu;
    QMenu*        m_SetPlayBackScaleMenu;
    //! [1]

    //! [2] ui data
    CameraModel*    m_deviceTableModel;
    CameraModel*    m_shareDevTableModel;
    AlarmModel*     m_alarmTableModel;
    PushAlarmModel* m_pushAlarmTableModel;
    RecordModel*    m_playBackTableModel;
    QTimer*         m_osdTimer;
    LoginWindow*    m_loginWindow;
    SingleDeviceLogin* m_getSingleDevInfo;
    //! [2]

    //! [3] user data
    QString m_sessionId;
    QString m_devSerial;
    int     m_Channel;

    //! [3]
	bool m_bSync;
	bool m_bRealPlayStarted;
	bool m_bPlayBackStarted;
	bool m_bPlayBackFinished;
    bool m_bVideoDownload;
    bool m_bDeviceVideoDownload;
    bool m_bCloudVideoDownload;
    bool m_bP2PDownload;
    bool m_bCloudPlayBack;           //云存储回放标志
    int  m_iFileSource;
    int  m_iSuportQuickPlayWay;
	QString m_videoPath;

	QTimer *capturePictureTimer; //周期性截图定时器
	QString capturePictureFilePath;// save_image/{m_devSerial}
};

#endif // MAINWINDOW_H
