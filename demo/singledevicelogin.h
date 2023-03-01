#ifndef SINGLEDEVICELOGIN_H
#define SINGLEDEVICELOGIN_H

#ifndef UI_SINGLEDEVICELOGIN_H
#define UI_SINGLEDEVICELOGIN_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QGridLayout>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SingleDeviceLogin
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *Token_label;
    QLineEdit *Token_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *AppKey_label;
    QLineEdit *AppKey_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *DevSerial_label;
    QLineEdit *DevSerial_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Channel_label;
    QLineEdit *Channel_lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *OKButton;
    QPushButton *QuitButton;

    void setupUi(QDialog *SingleDeviceLogin)
    {
        if (SingleDeviceLogin->objectName().isEmpty())
            SingleDeviceLogin->setObjectName(QString::fromUtf8("SingleDeviceLogin"));
        SingleDeviceLogin->resize(435, 258);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SingleDeviceLogin->sizePolicy().hasHeightForWidth());
        SingleDeviceLogin->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(SingleDeviceLogin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(SingleDeviceLogin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(400, 240));
        groupBox->setMaximumSize(QSize(480, 240));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, 0);
        Token_label = new QLabel(groupBox);
        Token_label->setObjectName(QString::fromUtf8("Token_label"));
        Token_label->setMaximumSize(QSize(80, 50));

        horizontalLayout->addWidget(Token_label);

        Token_lineEdit = new QLineEdit(groupBox);
        Token_lineEdit->setObjectName(QString::fromUtf8("Token_lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Token_lineEdit->sizePolicy().hasHeightForWidth());
        Token_lineEdit->setSizePolicy(sizePolicy1);
        Token_lineEdit->setMinimumSize(QSize(300, 25));
        Token_lineEdit->setMaximumSize(QSize(300, 25));

        horizontalLayout->addWidget(Token_lineEdit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        AppKey_label = new QLabel(groupBox);
        AppKey_label->setObjectName(QString::fromUtf8("AppKey_label"));
        sizePolicy.setHeightForWidth(AppKey_label->sizePolicy().hasHeightForWidth());
        AppKey_label->setSizePolicy(sizePolicy);
        AppKey_label->setMaximumSize(QSize(80, 50));
        AppKey_label->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(AppKey_label);

        AppKey_lineEdit = new QLineEdit(groupBox);
        AppKey_lineEdit->setObjectName(QString::fromUtf8("AppKey_lineEdit"));
        sizePolicy1.setHeightForWidth(AppKey_lineEdit->sizePolicy().hasHeightForWidth());
        AppKey_lineEdit->setSizePolicy(sizePolicy1);
        AppKey_lineEdit->setMinimumSize(QSize(300, 25));
        AppKey_lineEdit->setMaximumSize(QSize(300, 25));

        horizontalLayout_2->addWidget(AppKey_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        DevSerial_label = new QLabel(groupBox);
        DevSerial_label->setObjectName(QString::fromUtf8("DevSerial_label"));
        DevSerial_label->setMaximumSize(QSize(80, 50));

        horizontalLayout_3->addWidget(DevSerial_label);

        DevSerial_lineEdit = new QLineEdit(groupBox);
        DevSerial_lineEdit->setObjectName(QString::fromUtf8("DevSerial_lineEdit"));
        DevSerial_lineEdit->setEnabled(true);
        sizePolicy1.setHeightForWidth(DevSerial_lineEdit->sizePolicy().hasHeightForWidth());
        DevSerial_lineEdit->setSizePolicy(sizePolicy1);
        DevSerial_lineEdit->setMinimumSize(QSize(300, 25));
        DevSerial_lineEdit->setMaximumSize(QSize(300, 25));

        horizontalLayout_3->addWidget(DevSerial_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Channel_label = new QLabel(groupBox);
        Channel_label->setObjectName(QString::fromUtf8("Channel_label"));
        Channel_label->setMaximumSize(QSize(80, 50));

        horizontalLayout_4->addWidget(Channel_label);

        Channel_lineEdit = new QLineEdit(groupBox);
        Channel_lineEdit->setObjectName(QString::fromUtf8("Channel_lineEdit"));
        sizePolicy1.setHeightForWidth(Channel_lineEdit->sizePolicy().hasHeightForWidth());
        Channel_lineEdit->setSizePolicy(sizePolicy1);
        Channel_lineEdit->setMinimumSize(QSize(300, 25));
        Channel_lineEdit->setMaximumSize(QSize(300, 25));

        horizontalLayout_4->addWidget(Channel_lineEdit);

        gridLayout_2->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        OKButton = new QPushButton(groupBox);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));
        sizePolicy1.setHeightForWidth(OKButton->sizePolicy().hasHeightForWidth());
        OKButton->setSizePolicy(sizePolicy1);
        OKButton->setMaximumSize(QSize(50, 25));

        horizontalLayout_5->addWidget(OKButton);

        QuitButton = new QPushButton(groupBox);
        QuitButton->setObjectName(QString::fromUtf8("QuitButton"));
        sizePolicy1.setHeightForWidth(QuitButton->sizePolicy().hasHeightForWidth());
        QuitButton->setSizePolicy(sizePolicy1);
        QuitButton->setMinimumSize(QSize(0, 0));
        QuitButton->setMaximumSize(QSize(50, 25));

        horizontalLayout_5->addWidget(QuitButton);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        gridLayout_2->addLayout(horizontalLayout_5, 4, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        QuitButton->raise();
        groupBox->raise();

        retranslateUi(SingleDeviceLogin);

        QMetaObject::connectSlotsByName(SingleDeviceLogin);
    } // setupUi

    void retranslateUi(QDialog *SingleDeviceLogin)
    {
        SingleDeviceLogin->setWindowTitle(QApplication::translate("SingleDeviceLogin", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("SingleDeviceLogin", "QuiclyInput", 0));
        Token_label->setText(QApplication::translate("SingleDeviceLogin", "AccessToken:", 0));
        AppKey_label->setText(QApplication::translate("SingleDeviceLogin", "AppKey:", 0));
        DevSerial_label->setText(QApplication::translate("SingleDeviceLogin", "DevSerial:", 0));
        Channel_label->setText(QApplication::translate("SingleDeviceLogin", "ChannelNo:", 0));
        OKButton->setText(QApplication::translate("SingleDeviceLogin", "OK", 0));
        QuitButton->setText(QApplication::translate("SingleDeviceLogin", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class SingleDeviceLogin: public Ui_SingleDeviceLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEDEVICELOGIN_H




namespace Ui {
class SingleDeviceLogin;
}

class SingleDeviceLogin : public QDialog
{
    Q_OBJECT

public:
    explicit SingleDeviceLogin(QWidget *parent = 0);
    ~SingleDeviceLogin();
    void getTokenFromLogin(QString& acToken);
    void getAppKeyFromLogin(QString& appKey);
    void getDevSerialFromLogin(QString& devSerial);
    void getChannelFromLogin(int& channel);
    void clearParam();


private slots:
    void on_QuitButton_clicked();

    void on_OKButton_clicked();

private:
    Ui::SingleDeviceLogin *ui;
    QString m_AcessToken;
    QString m_AppKey;
    QString m_DevSerial;
    int m_Channel;
};

#endif // SINGLEDEVICELOGIN_H
