#ifndef SWITCHPLAT_DIALOG_H
#define SWITCHPLAT_DIALOG_H



#ifndef UI_SWITCHPLAT_H
#define UI_SWITCHPLAT_H

#include <QDialog>

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>


class Ui_SwitchPlat
{
public:
	QGroupBox *groupBox;
	QPushButton *OKButton;
	QWidget *layoutWidget;
	QVBoxLayout *verticalLayout;
	QHBoxLayout *horizontalLayout;
	QLabel *AuthAddr;
	QLineEdit *AuthAddress;
	QHBoxLayout *horizontalLayout_2;
	QLabel *PlatAddr;
	QLineEdit *PlatformAddress;
	QHBoxLayout *horizontalLayout_3;
	QLabel *AppID;
	QLineEdit *Appkey;

	void setupUi(QDialog *switchPlat)
	{
		if (switchPlat->objectName().isEmpty())
			switchPlat->setObjectName(QString::fromUtf8("switchPlat_Dialog"));
		switchPlat->resize(400, 313);
		groupBox = new QGroupBox(switchPlat);
		groupBox->setObjectName(QString::fromUtf8("groupBox"));
		groupBox->setGeometry(QRect(20, 10, 361, 281));
		OKButton = new QPushButton(groupBox);
		OKButton->setObjectName(QString::fromUtf8("OKButton"));
		OKButton->setGeometry(QRect(140, 250, 75, 23));
		layoutWidget = new QWidget(groupBox);
		layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
		layoutWidget->setGeometry(QRect(20, 30, 321, 211));
		verticalLayout = new QVBoxLayout(layoutWidget);
		verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
		verticalLayout->setContentsMargins(0, 0, 0, 0);
		horizontalLayout = new QHBoxLayout();
		horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
		AuthAddr = new QLabel(layoutWidget);
		AuthAddr->setObjectName(QString::fromUtf8("AuthAddr"));

		horizontalLayout->addWidget(AuthAddr);

		AuthAddress = new QLineEdit(layoutWidget);
		AuthAddress->setObjectName(QString::fromUtf8("AuthAddress"));

		horizontalLayout->addWidget(AuthAddress);


		verticalLayout->addLayout(horizontalLayout);

		horizontalLayout_2 = new QHBoxLayout();
		horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
		PlatAddr = new QLabel(layoutWidget);
		PlatAddr->setObjectName(QString::fromUtf8("PlatAddr"));

		horizontalLayout_2->addWidget(PlatAddr);

		PlatformAddress = new QLineEdit(layoutWidget);
		PlatformAddress->setObjectName(QString::fromUtf8("PlatformAddress"));

		horizontalLayout_2->addWidget(PlatformAddress);


		verticalLayout->addLayout(horizontalLayout_2);

		horizontalLayout_3 = new QHBoxLayout();
		horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
		AppID = new QLabel(layoutWidget);
		AppID->setObjectName(QString::fromUtf8("AppID"));

		horizontalLayout_3->addWidget(AppID);

		Appkey = new QLineEdit(layoutWidget);
		Appkey->setObjectName(QString::fromUtf8("Appkey"));

		horizontalLayout_3->addWidget(Appkey);


		verticalLayout->addLayout(horizontalLayout_3);


		retranslateUi(switchPlat);

		QMetaObject::connectSlotsByName(switchPlat);
	} // setupUi

	void retranslateUi(QDialog *switchPlat_Dialog)
	{
        switchPlat_Dialog->setWindowTitle(QApplication::translate("switchPlat_Dialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("switchPlat_Dialog", "SwitchPlatform", 0));
        OKButton->setText(QApplication::translate("switchPlat_Dialog", "OK", 0));
        AuthAddr->setText(QApplication::translate("switchPlat_Dialog", "AuthAddress", 0));
        PlatAddr->setText(QApplication::translate("switchPlat_Dialog", "PlatformAddress", 0));
        AppID->setText(QApplication::translate("switchPlat_Dialog", "AppID", 0));
	} // retranslateUi

};

namespace Ui {
	class switchPlat: public Ui_SwitchPlat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWITCHPLAT_H



namespace Ui {
class switchPlat;
}

class switchPlat : public QDialog
{
    Q_OBJECT

public:
    explicit switchPlat(QWidget *parent = 0);
    ~switchPlat();

private slots:
    void on_OKButton_clicked();

private:
    Ui::switchPlat *ui;
};

#endif // SWITCHPLAT_DIALOG_H
