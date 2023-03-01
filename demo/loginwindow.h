#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QStackedLayout>
#include <QPushButton>
#include <QTextEdit>
#include <QLineEdit>
#include <QLabel>

class LoginWindow : public QDialog
{
    Q_OBJECT
public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();
     void closeEvent(QCloseEvent *event);
     void getTokenFromLogin(QString& acToken);
     void clearParam();

signals:

public slots:
    void on_OAuthButton_clicked();
    void on_AcTokenButton_clicked();
    void on_GetDevListButton_clicked();

private:
    //[1] ui data
    QStackedLayout *m_pLayout;

    QWidget *m_pHomeWidget;
    QGridLayout *m_pHomeLayout;
    QPushButton *m_pOAuthButton;
    QPushButton *m_pAcTokenButton;

    QWidget *m_pPage1Widget;
    QGridLayout *m_pPage1Layout;
    QLabel *m_pTokenHintLabel;
    QTextEdit *m_pTokenTextEdit;
    QPushButton *m_pGetDevListButton;
    //[1]

    //[2] user data
    QString m_acToken;
    //[2]
};

#endif // LOGINWINDOW_H


