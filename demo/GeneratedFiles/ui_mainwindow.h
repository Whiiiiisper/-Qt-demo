/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_1;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButton;
    QPushButton *logoutButton;
    QPushButton *pushButton;
    QPushButton *SwitchPlat_Button;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *getSingleDeviceButton;
    QPushButton *deviceListButton;
    QPushButton *shareDevListButton;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *updateCameraInfoButton;
    QPushButton *getCameraInfoButton;
    QPushButton *deviceInfoButton;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *alarmListButton;
    QPushButton *setAlarmReadButton;
    QPushButton *showAlarmPicButton;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *switchVideoLevelButton;
    QPushButton *startRealPlayButton;
    QPushButton *stopRealPlayButton;
    QPushButton *capturePictureButton;
    QSpinBox *capturePictureSpinBox;
    QLabel *label;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QPushButton *searchLoacalRecordButton;
    QPushButton *searchCloudRecordButton;
    QPushButton *startPlayBackButton;
    QLabel *osdLabel;
    QPushButton *pauseButton;
    QPushButton *setPlayBackTimeButton;
    QPushButton *stopPlayBackButton;
    QPushButton *SetScaleButton;
    QPushButton *resumeButton;
    QPushButton *stopDownloadButton;
    QPushButton *startDownloadButton;
    QLineEdit *PbStartTime;
    QCheckBox *videoRecordBox;
    QLineEdit *PbEndTime;
    QPushButton *playBackListButton;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *switchSoundButton;
    QSlider *setVolumeSlider;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *startVoiceTalkButton;
    QPushButton *stopVoiceTalkButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *defenceOnButton;
    QPushButton *defenceOffButton;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout;
    QWidget *previewWindow;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_U;
    QPushButton *pushButton_UR;
    QPushButton *pushButton_L;
    QPushButton *pushButton_R;
    QPushButton *pushButton_DL;
    QPushButton *pushButton_D;
    QPushButton *pushButton_DR;
    QPushButton *pushButton_Wiper;
    QPushButton *pushButton_Auto;
    QPushButton *pushButton_UL;
    QPushButton *pushButton_ZoomOut;
    QPushButton *pushButton_ZoomIn;
    QPushButton *pushButton_FocusNear;
    QPushButton *pushButton_FocusFar;
    QPushButton *pushButton_IrisStart;
    QPushButton *pushButton_IrisStop;
    QPushButton *pushButton_Light;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout;
    QCheckBox *pushAlarmCheckBox;
    QCheckBox *pushDevStatusCheckBox;
    QCheckBox *pushTransparentChannelCheckBox;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *startPushRecvButton;
    QPushButton *stopPushRecvButton;
    QTabWidget *tabWidget;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(1271, 753);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(1677215, 1677215));
        gridLayout_5 = new QGridLayout(MainWindow);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_1 = new QGroupBox(MainWindow);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        groupBox_1->setMinimumSize(QSize(300, 70));
        groupBox_1->setMaximumSize(QSize(300, 16777215));
        horizontalLayout_2 = new QHBoxLayout(groupBox_1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loginButton = new QPushButton(groupBox_1);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(loginButton);

        logoutButton = new QPushButton(groupBox_1);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(logoutButton);

        pushButton = new QPushButton(groupBox_1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(pushButton);

        SwitchPlat_Button = new QPushButton(groupBox_1);
        SwitchPlat_Button->setObjectName(QString::fromUtf8("SwitchPlat_Button"));
        SwitchPlat_Button->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(SwitchPlat_Button);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(groupBox_1);

        groupBox_2 = new QGroupBox(MainWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(300, 150));
        groupBox_2->setMaximumSize(QSize(300, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        getSingleDeviceButton = new QPushButton(groupBox_2);
        getSingleDeviceButton->setObjectName(QString::fromUtf8("getSingleDeviceButton"));
        getSingleDeviceButton->setMinimumSize(QSize(29, 25));
        getSingleDeviceButton->setMaximumSize(QSize(86, 16777215));

        horizontalLayout_3->addWidget(getSingleDeviceButton);

        deviceListButton = new QPushButton(groupBox_2);
        deviceListButton->setObjectName(QString::fromUtf8("deviceListButton"));
        deviceListButton->setMinimumSize(QSize(29, 25));
        deviceListButton->setMaximumSize(QSize(86, 16777215));

        horizontalLayout_3->addWidget(deviceListButton);

        shareDevListButton = new QPushButton(groupBox_2);
        shareDevListButton->setObjectName(QString::fromUtf8("shareDevListButton"));
        shareDevListButton->setMinimumSize(QSize(29, 25));
        shareDevListButton->setMaximumSize(QSize(86, 16777215));

        horizontalLayout_3->addWidget(shareDevListButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        updateCameraInfoButton = new QPushButton(groupBox_2);
        updateCameraInfoButton->setObjectName(QString::fromUtf8("updateCameraInfoButton"));
        updateCameraInfoButton->setMinimumSize(QSize(29, 25));
        updateCameraInfoButton->setMaximumSize(QSize(86, 16777215));

        horizontalLayout_10->addWidget(updateCameraInfoButton);

        getCameraInfoButton = new QPushButton(groupBox_2);
        getCameraInfoButton->setObjectName(QString::fromUtf8("getCameraInfoButton"));
        getCameraInfoButton->setMinimumSize(QSize(29, 25));
        getCameraInfoButton->setMaximumSize(QSize(86, 16777215));

        horizontalLayout_10->addWidget(getCameraInfoButton);

        deviceInfoButton = new QPushButton(groupBox_2);
        deviceInfoButton->setObjectName(QString::fromUtf8("deviceInfoButton"));
        deviceInfoButton->setMinimumSize(QSize(29, 25));
        deviceInfoButton->setMaximumSize(QSize(86, 16777215));

        horizontalLayout_10->addWidget(deviceInfoButton);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        alarmListButton = new QPushButton(groupBox_2);
        alarmListButton->setObjectName(QString::fromUtf8("alarmListButton"));
        alarmListButton->setMinimumSize(QSize(29, 25));
        alarmListButton->setMaximumSize(QSize(86, 16777215));

        horizontalLayout_11->addWidget(alarmListButton);

        setAlarmReadButton = new QPushButton(groupBox_2);
        setAlarmReadButton->setObjectName(QString::fromUtf8("setAlarmReadButton"));
        setAlarmReadButton->setMinimumSize(QSize(29, 25));
        setAlarmReadButton->setMaximumSize(QSize(86, 16777215));

        horizontalLayout_11->addWidget(setAlarmReadButton);

        showAlarmPicButton = new QPushButton(groupBox_2);
        showAlarmPicButton->setObjectName(QString::fromUtf8("showAlarmPicButton"));
        showAlarmPicButton->setMinimumSize(QSize(29, 25));
        showAlarmPicButton->setMaximumSize(QSize(86, 16777215));

        horizontalLayout_11->addWidget(showAlarmPicButton);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(MainWindow);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(300, 60));
        groupBox_3->setMaximumSize(QSize(300, 16777215));
        horizontalLayout_17 = new QHBoxLayout(groupBox_3);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        switchVideoLevelButton = new QPushButton(groupBox_3);
        switchVideoLevelButton->setObjectName(QString::fromUtf8("switchVideoLevelButton"));
        switchVideoLevelButton->setMinimumSize(QSize(0, 25));

        horizontalLayout_7->addWidget(switchVideoLevelButton);

        startRealPlayButton = new QPushButton(groupBox_3);
        startRealPlayButton->setObjectName(QString::fromUtf8("startRealPlayButton"));
        startRealPlayButton->setMinimumSize(QSize(0, 25));

        horizontalLayout_7->addWidget(startRealPlayButton);

        stopRealPlayButton = new QPushButton(groupBox_3);
        stopRealPlayButton->setObjectName(QString::fromUtf8("stopRealPlayButton"));
        stopRealPlayButton->setMinimumSize(QSize(0, 25));

        horizontalLayout_7->addWidget(stopRealPlayButton);

        capturePictureButton = new QPushButton(groupBox_3);
        capturePictureButton->setObjectName(QString::fromUtf8("capturePictureButton"));
        capturePictureButton->setMinimumSize(QSize(0, 25));

        horizontalLayout_7->addWidget(capturePictureButton);

        capturePictureSpinBox = new QSpinBox(groupBox_3);
        capturePictureSpinBox->setObjectName(QString::fromUtf8("capturePictureSpinBox"));
        capturePictureSpinBox->setMaximum(3600);
        capturePictureSpinBox->setValue(30);

        horizontalLayout_7->addWidget(capturePictureSpinBox);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);


        horizontalLayout_17->addLayout(horizontalLayout_7);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(MainWindow);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(300, 220));
        groupBox_4->setMaximumSize(QSize(300, 16777215));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        searchLoacalRecordButton = new QPushButton(groupBox_4);
        searchLoacalRecordButton->setObjectName(QString::fromUtf8("searchLoacalRecordButton"));
        searchLoacalRecordButton->setMinimumSize(QSize(0, 25));
        searchLoacalRecordButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(searchLoacalRecordButton, 0, 0, 1, 1);

        searchCloudRecordButton = new QPushButton(groupBox_4);
        searchCloudRecordButton->setObjectName(QString::fromUtf8("searchCloudRecordButton"));
        searchCloudRecordButton->setMinimumSize(QSize(0, 25));
        searchCloudRecordButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(searchCloudRecordButton, 0, 1, 1, 1);

        startPlayBackButton = new QPushButton(groupBox_4);
        startPlayBackButton->setObjectName(QString::fromUtf8("startPlayBackButton"));
        startPlayBackButton->setMinimumSize(QSize(0, 25));
        startPlayBackButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(startPlayBackButton, 1, 0, 1, 1);

        osdLabel = new QLabel(groupBox_4);
        osdLabel->setObjectName(QString::fromUtf8("osdLabel"));
        osdLabel->setMinimumSize(QSize(0, 25));
        osdLabel->setMaximumSize(QSize(16777215, 16777215));
        osdLabel->setLayoutDirection(Qt::LeftToRight);
        osdLabel->setTextFormat(Qt::AutoText);
        osdLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(osdLabel, 1, 2, 1, 1);

        pauseButton = new QPushButton(groupBox_4);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setMinimumSize(QSize(0, 25));
        pauseButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(pauseButton, 1, 1, 1, 1);

        setPlayBackTimeButton = new QPushButton(groupBox_4);
        setPlayBackTimeButton->setObjectName(QString::fromUtf8("setPlayBackTimeButton"));
        setPlayBackTimeButton->setMinimumSize(QSize(0, 25));
        setPlayBackTimeButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(setPlayBackTimeButton, 3, 0, 1, 1);

        stopPlayBackButton = new QPushButton(groupBox_4);
        stopPlayBackButton->setObjectName(QString::fromUtf8("stopPlayBackButton"));
        stopPlayBackButton->setMinimumSize(QSize(0, 25));
        stopPlayBackButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(stopPlayBackButton, 2, 0, 1, 1);

        SetScaleButton = new QPushButton(groupBox_4);
        SetScaleButton->setObjectName(QString::fromUtf8("SetScaleButton"));
        SetScaleButton->setMinimumSize(QSize(0, 25));
        SetScaleButton->setMaximumSize(QSize(86, 16777215));

        gridLayout_4->addWidget(SetScaleButton, 2, 2, 1, 1);

        resumeButton = new QPushButton(groupBox_4);
        resumeButton->setObjectName(QString::fromUtf8("resumeButton"));
        resumeButton->setMinimumSize(QSize(0, 25));
        resumeButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(resumeButton, 2, 1, 1, 1);

        stopDownloadButton = new QPushButton(groupBox_4);
        stopDownloadButton->setObjectName(QString::fromUtf8("stopDownloadButton"));
        stopDownloadButton->setMinimumSize(QSize(0, 25));
        stopDownloadButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(stopDownloadButton, 4, 2, 1, 1);

        startDownloadButton = new QPushButton(groupBox_4);
        startDownloadButton->setObjectName(QString::fromUtf8("startDownloadButton"));
        startDownloadButton->setEnabled(true);
        startDownloadButton->setMinimumSize(QSize(0, 25));
        startDownloadButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(startDownloadButton, 4, 1, 1, 1);

        PbStartTime = new QLineEdit(groupBox_4);
        PbStartTime->setObjectName(QString::fromUtf8("PbStartTime"));
        PbStartTime->setMinimumSize(QSize(0, 25));
        PbStartTime->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(PbStartTime, 3, 1, 1, 1);

        videoRecordBox = new QCheckBox(groupBox_4);
        videoRecordBox->setObjectName(QString::fromUtf8("videoRecordBox"));
        videoRecordBox->setMinimumSize(QSize(0, 25));
        videoRecordBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(videoRecordBox, 4, 0, 1, 1);

        PbEndTime = new QLineEdit(groupBox_4);
        PbEndTime->setObjectName(QString::fromUtf8("PbEndTime"));
        PbEndTime->setMinimumSize(QSize(0, 25));
        PbEndTime->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(PbEndTime, 3, 2, 1, 1);

        playBackListButton = new QPushButton(groupBox_4);
        playBackListButton->setObjectName(QString::fromUtf8("playBackListButton"));
        playBackListButton->setMinimumSize(QSize(0, 25));
        playBackListButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(playBackListButton, 0, 2, 1, 1);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(MainWindow);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(300, 110));
        groupBox_5->setMaximumSize(QSize(300, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        switchSoundButton = new QRadioButton(groupBox_5);
        switchSoundButton->setObjectName(QString::fromUtf8("switchSoundButton"));

        horizontalLayout_9->addWidget(switchSoundButton);

        setVolumeSlider = new QSlider(groupBox_5);
        setVolumeSlider->setObjectName(QString::fromUtf8("setVolumeSlider"));
        setVolumeSlider->setEnabled(false);
        setVolumeSlider->setMaximum(99);
        setVolumeSlider->setTracking(true);
        setVolumeSlider->setOrientation(Qt::Horizontal);
        setVolumeSlider->setInvertedAppearance(false);
        setVolumeSlider->setInvertedControls(false);
        setVolumeSlider->setTickPosition(QSlider::NoTicks);
        setVolumeSlider->setTickInterval(0);

        horizontalLayout_9->addWidget(setVolumeSlider);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        startVoiceTalkButton = new QPushButton(groupBox_5);
        startVoiceTalkButton->setObjectName(QString::fromUtf8("startVoiceTalkButton"));
        startVoiceTalkButton->setMinimumSize(QSize(0, 25));

        horizontalLayout_8->addWidget(startVoiceTalkButton);

        stopVoiceTalkButton = new QPushButton(groupBox_5);
        stopVoiceTalkButton->setObjectName(QString::fromUtf8("stopVoiceTalkButton"));
        stopVoiceTalkButton->setMinimumSize(QSize(0, 25));

        horizontalLayout_8->addWidget(stopVoiceTalkButton);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_4->addWidget(groupBox_5);

        groupBox = new QGroupBox(MainWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(230, 60));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        defenceOnButton = new QPushButton(groupBox);
        defenceOnButton->setObjectName(QString::fromUtf8("defenceOnButton"));
        defenceOnButton->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(defenceOnButton);

        defenceOffButton = new QPushButton(groupBox);
        defenceOffButton->setObjectName(QString::fromUtf8("defenceOffButton"));
        defenceOffButton->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(defenceOffButton);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_7 = new QGroupBox(MainWindow);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(630, 460));
        groupBox_7->setMaximumSize(QSize(16777215, 16777215));
        formLayout = new QFormLayout(groupBox_7);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        previewWindow = new QWidget(groupBox_7);
        previewWindow->setObjectName(QString::fromUtf8("previewWindow"));
        previewWindow->setEnabled(true);
        previewWindow->setMinimumSize(QSize(610, 425));
        previewWindow->setMaximumSize(QSize(960, 640));

        formLayout->setWidget(0, QFormLayout::LabelRole, previewWindow);


        verticalLayout->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(MainWindow);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        sizePolicy.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy);
        groupBox_8->setMinimumSize(QSize(630, 160));
        groupBox_8->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(groupBox_8);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_U = new QPushButton(groupBox_8);
        pushButton_U->setObjectName(QString::fromUtf8("pushButton_U"));
        pushButton_U->setMinimumSize(QSize(60, 25));
        pushButton_U->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_U, 0, 1, 1, 1);

        pushButton_UR = new QPushButton(groupBox_8);
        pushButton_UR->setObjectName(QString::fromUtf8("pushButton_UR"));
        pushButton_UR->setMinimumSize(QSize(60, 25));
        pushButton_UR->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_UR, 0, 2, 1, 1);

        pushButton_L = new QPushButton(groupBox_8);
        pushButton_L->setObjectName(QString::fromUtf8("pushButton_L"));
        pushButton_L->setMinimumSize(QSize(60, 25));
        pushButton_L->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_L, 1, 0, 1, 1);

        pushButton_R = new QPushButton(groupBox_8);
        pushButton_R->setObjectName(QString::fromUtf8("pushButton_R"));
        pushButton_R->setMinimumSize(QSize(60, 25));
        pushButton_R->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_R, 1, 2, 1, 1);

        pushButton_DL = new QPushButton(groupBox_8);
        pushButton_DL->setObjectName(QString::fromUtf8("pushButton_DL"));
        pushButton_DL->setMinimumSize(QSize(60, 25));
        pushButton_DL->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_DL, 2, 0, 1, 1);

        pushButton_D = new QPushButton(groupBox_8);
        pushButton_D->setObjectName(QString::fromUtf8("pushButton_D"));
        pushButton_D->setMinimumSize(QSize(60, 25));
        pushButton_D->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_D, 2, 1, 1, 1);

        pushButton_DR = new QPushButton(groupBox_8);
        pushButton_DR->setObjectName(QString::fromUtf8("pushButton_DR"));
        pushButton_DR->setMinimumSize(QSize(60, 25));
        pushButton_DR->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_DR, 2, 2, 1, 1);

        pushButton_Wiper = new QPushButton(groupBox_8);
        pushButton_Wiper->setObjectName(QString::fromUtf8("pushButton_Wiper"));
        pushButton_Wiper->setMinimumSize(QSize(60, 25));
        pushButton_Wiper->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_Wiper, 3, 2, 1, 1);

        pushButton_Auto = new QPushButton(groupBox_8);
        pushButton_Auto->setObjectName(QString::fromUtf8("pushButton_Auto"));
        pushButton_Auto->setMinimumSize(QSize(60, 25));
        pushButton_Auto->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_Auto, 1, 1, 1, 1);

        pushButton_UL = new QPushButton(groupBox_8);
        pushButton_UL->setObjectName(QString::fromUtf8("pushButton_UL"));
        pushButton_UL->setMinimumSize(QSize(60, 25));
        pushButton_UL->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_UL, 0, 0, 1, 1);

        pushButton_ZoomOut = new QPushButton(groupBox_8);
        pushButton_ZoomOut->setObjectName(QString::fromUtf8("pushButton_ZoomOut"));
        pushButton_ZoomOut->setMinimumSize(QSize(60, 25));
        pushButton_ZoomOut->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_ZoomOut, 0, 3, 1, 1);

        pushButton_ZoomIn = new QPushButton(groupBox_8);
        pushButton_ZoomIn->setObjectName(QString::fromUtf8("pushButton_ZoomIn"));
        pushButton_ZoomIn->setMinimumSize(QSize(60, 25));
        pushButton_ZoomIn->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_ZoomIn, 1, 3, 1, 1);

        pushButton_FocusNear = new QPushButton(groupBox_8);
        pushButton_FocusNear->setObjectName(QString::fromUtf8("pushButton_FocusNear"));
        pushButton_FocusNear->setMinimumSize(QSize(60, 25));
        pushButton_FocusNear->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_FocusNear, 2, 3, 1, 1);

        pushButton_FocusFar = new QPushButton(groupBox_8);
        pushButton_FocusFar->setObjectName(QString::fromUtf8("pushButton_FocusFar"));
        pushButton_FocusFar->setMinimumSize(QSize(60, 25));
        pushButton_FocusFar->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_FocusFar, 3, 3, 1, 1);

        pushButton_IrisStart = new QPushButton(groupBox_8);
        pushButton_IrisStart->setObjectName(QString::fromUtf8("pushButton_IrisStart"));
        pushButton_IrisStart->setMinimumSize(QSize(60, 25));
        pushButton_IrisStart->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_IrisStart, 3, 0, 1, 1);

        pushButton_IrisStop = new QPushButton(groupBox_8);
        pushButton_IrisStop->setObjectName(QString::fromUtf8("pushButton_IrisStop"));
        pushButton_IrisStop->setMinimumSize(QSize(60, 25));
        pushButton_IrisStop->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_IrisStop, 3, 1, 1, 1);

        pushButton_Light = new QPushButton(groupBox_8);
        pushButton_Light->setObjectName(QString::fromUtf8("pushButton_Light"));
        pushButton_Light->setMinimumSize(QSize(60, 25));
        pushButton_Light->setMaximumSize(QSize(140, 70));

        gridLayout_2->addWidget(pushButton_Light, 4, 0, 1, 1);


        verticalLayout->addWidget(groupBox_8);

        groupBox_10 = new QGroupBox(MainWindow);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setMinimumSize(QSize(630, 80));
        groupBox_10->setMaximumSize(QSize(16777215, 16777215));
        groupBox_10->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(groupBox_10);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushAlarmCheckBox = new QCheckBox(groupBox_10);
        pushAlarmCheckBox->setObjectName(QString::fromUtf8("pushAlarmCheckBox"));
        pushAlarmCheckBox->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(pushAlarmCheckBox, 0, 0, 1, 1);

        pushDevStatusCheckBox = new QCheckBox(groupBox_10);
        pushDevStatusCheckBox->setObjectName(QString::fromUtf8("pushDevStatusCheckBox"));
        pushDevStatusCheckBox->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(pushDevStatusCheckBox, 0, 1, 1, 1);

        pushTransparentChannelCheckBox = new QCheckBox(groupBox_10);
        pushTransparentChannelCheckBox->setObjectName(QString::fromUtf8("pushTransparentChannelCheckBox"));
        pushTransparentChannelCheckBox->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(pushTransparentChannelCheckBox, 0, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        startPushRecvButton = new QPushButton(groupBox_10);
        startPushRecvButton->setObjectName(QString::fromUtf8("startPushRecvButton"));
        startPushRecvButton->setMaximumSize(QSize(160, 25));

        horizontalLayout_6->addWidget(startPushRecvButton);

        stopPushRecvButton = new QPushButton(groupBox_10);
        stopPushRecvButton->setObjectName(QString::fromUtf8("stopPushRecvButton"));
        stopPushRecvButton->setMaximumSize(QSize(160, 25));

        horizontalLayout_6->addWidget(stopPushRecvButton);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 3);


        verticalLayout->addWidget(groupBox_10);


        horizontalLayout_5->addLayout(verticalLayout);


        horizontalLayout_12->addLayout(horizontalLayout_5);

        tabWidget = new QTabWidget(MainWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(tabWidget);


        gridLayout_5->addLayout(horizontalLayout_12, 0, 0, 1, 1);


        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Open SDK Demo", 0, QApplication::UnicodeUTF8));
        groupBox_1->setTitle(QApplication::translate("MainWindow", "Mid Page", 0, QApplication::UnicodeUTF8));
        loginButton->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
        logoutButton->setText(QApplication::translate("MainWindow", "Logout", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "TokenUpdate", 0, QApplication::UnicodeUTF8));
        SwitchPlat_Button->setText(QApplication::translate("MainWindow", "SwitchPlat", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Data", 0, QApplication::UnicodeUTF8));
        getSingleDeviceButton->setText(QApplication::translate("MainWindow", "GetSingleDev", 0, QApplication::UnicodeUTF8));
        deviceListButton->setText(QApplication::translate("MainWindow", "DeviceList", 0, QApplication::UnicodeUTF8));
        shareDevListButton->setText(QApplication::translate("MainWindow", "ShareDevList", 0, QApplication::UnicodeUTF8));
        updateCameraInfoButton->setText(QApplication::translate("MainWindow", "DevDetailUpdate", 0, QApplication::UnicodeUTF8));
        getCameraInfoButton->setText(QApplication::translate("MainWindow", "DevDetailInfo", 0, QApplication::UnicodeUTF8));
        deviceInfoButton->setText(QApplication::translate("MainWindow", "ChannelInfo", 0, QApplication::UnicodeUTF8));
        alarmListButton->setText(QApplication::translate("MainWindow", "AlarmList", 0, QApplication::UnicodeUTF8));
        setAlarmReadButton->setText(QApplication::translate("MainWindow", "AlarmSetRead", 0, QApplication::UnicodeUTF8));
        showAlarmPicButton->setText(QApplication::translate("MainWindow", "AlarmPic", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "RealPlay", 0, QApplication::UnicodeUTF8));
        switchVideoLevelButton->setText(QApplication::translate("MainWindow", "SwitchDef", 0, QApplication::UnicodeUTF8));
        startRealPlayButton->setText(QApplication::translate("MainWindow", "StartPlay", 0, QApplication::UnicodeUTF8));
        stopRealPlayButton->setText(QApplication::translate("MainWindow", "StopPlay", 0, QApplication::UnicodeUTF8));
        capturePictureButton->setText(QApplication::translate("MainWindow", "CapturePic", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\347\247\222", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "PlayBack", 0, QApplication::UnicodeUTF8));
        searchLoacalRecordButton->setText(QApplication::translate("MainWindow", "LocalRecord", 0, QApplication::UnicodeUTF8));
        searchCloudRecordButton->setText(QApplication::translate("MainWindow", "CloudRecord", 0, QApplication::UnicodeUTF8));
        startPlayBackButton->setText(QApplication::translate("MainWindow", "StartPlayBack", 0, QApplication::UnicodeUTF8));
        osdLabel->setText(QApplication::translate("MainWindow", "00:00:00", 0, QApplication::UnicodeUTF8));
        pauseButton->setText(QApplication::translate("MainWindow", "PausePlay", 0, QApplication::UnicodeUTF8));
        setPlayBackTimeButton->setText(QApplication::translate("MainWindow", "SelectDate", 0, QApplication::UnicodeUTF8));
        stopPlayBackButton->setText(QApplication::translate("MainWindow", "StopPlayBack", 0, QApplication::UnicodeUTF8));
        SetScaleButton->setText(QApplication::translate("MainWindow", "SetScale", 0, QApplication::UnicodeUTF8));
        resumeButton->setText(QApplication::translate("MainWindow", "ResumePlay", 0, QApplication::UnicodeUTF8));
        stopDownloadButton->setText(QApplication::translate("MainWindow", "stopDownload", 0, QApplication::UnicodeUTF8));
        startDownloadButton->setText(QApplication::translate("MainWindow", "startDownload", 0, QApplication::UnicodeUTF8));
        videoRecordBox->setText(QApplication::translate("MainWindow", "VideoRecord", 0, QApplication::UnicodeUTF8));
        playBackListButton->setText(QApplication::translate("MainWindow", "PlayBackList", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "VoiceTalk", 0, QApplication::UnicodeUTF8));
        switchSoundButton->setText(QApplication::translate("MainWindow", "Sound", 0, QApplication::UnicodeUTF8));
        startVoiceTalkButton->setText(QApplication::translate("MainWindow", "StartVoiceTalk", 0, QApplication::UnicodeUTF8));
        stopVoiceTalkButton->setText(QApplication::translate("MainWindow", "StopVoiceTalk", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Device Defence", 0, QApplication::UnicodeUTF8));
        defenceOnButton->setText(QApplication::translate("MainWindow", "Defence", 0, QApplication::UnicodeUTF8));
        defenceOffButton->setText(QApplication::translate("MainWindow", "Undefence", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Preview", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "PTZ Control", 0, QApplication::UnicodeUTF8));
        pushButton_U->setText(QApplication::translate("MainWindow", "Top", 0, QApplication::UnicodeUTF8));
        pushButton_UR->setText(QApplication::translate("MainWindow", "RightTop", 0, QApplication::UnicodeUTF8));
        pushButton_L->setText(QApplication::translate("MainWindow", "Left", 0, QApplication::UnicodeUTF8));
        pushButton_R->setText(QApplication::translate("MainWindow", "Right", 0, QApplication::UnicodeUTF8));
        pushButton_DL->setText(QApplication::translate("MainWindow", "LeftDown", 0, QApplication::UnicodeUTF8));
        pushButton_D->setText(QApplication::translate("MainWindow", "Down", 0, QApplication::UnicodeUTF8));
        pushButton_DR->setText(QApplication::translate("MainWindow", "RightDown", 0, QApplication::UnicodeUTF8));
        pushButton_Wiper->setText(QApplication::translate("MainWindow", "WIPER", 0, QApplication::UnicodeUTF8));
        pushButton_Auto->setText(QApplication::translate("MainWindow", "AUTO", 0, QApplication::UnicodeUTF8));
        pushButton_UL->setText(QApplication::translate("MainWindow", "LeftTop", 0, QApplication::UnicodeUTF8));
        pushButton_ZoomOut->setText(QApplication::translate("MainWindow", "ZOOMOUT", 0, QApplication::UnicodeUTF8));
        pushButton_ZoomIn->setText(QApplication::translate("MainWindow", "ZOOMIN", 0, QApplication::UnicodeUTF8));
        pushButton_FocusNear->setText(QApplication::translate("MainWindow", "FOCUSNEAR", 0, QApplication::UnicodeUTF8));
        pushButton_FocusFar->setText(QApplication::translate("MainWindow", "FOCUSFAR", 0, QApplication::UnicodeUTF8));
        pushButton_IrisStart->setText(QApplication::translate("MainWindow", "IRISSTARTUP", 0, QApplication::UnicodeUTF8));
        pushButton_IrisStop->setText(QApplication::translate("MainWindow", "IRISSTOPDOWN", 0, QApplication::UnicodeUTF8));
        pushButton_Light->setText(QApplication::translate("MainWindow", "LIGHT", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Push Message", 0, QApplication::UnicodeUTF8));
        pushAlarmCheckBox->setText(QApplication::translate("MainWindow", "Alarm", 0, QApplication::UnicodeUTF8));
        pushDevStatusCheckBox->setText(QApplication::translate("MainWindow", "DevOffline", 0, QApplication::UnicodeUTF8));
        pushTransparentChannelCheckBox->setText(QApplication::translate("MainWindow", "AlphaChannel", 0, QApplication::UnicodeUTF8));
        startPushRecvButton->setText(QApplication::translate("MainWindow", "OpenPush", 0, QApplication::UnicodeUTF8));
        stopPushRecvButton->setText(QApplication::translate("MainWindow", "ClosePush", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
