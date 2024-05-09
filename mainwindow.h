#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class LoginMainWindow;
}

class LoginMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginMainWindow(QWidget *parent = nullptr);
    ~LoginMainWindow();

private slots:
    void on_loginButton_clicked();

private:
    Ui::LoginMainWindow *ui;
    QString username;
    QString password;

    bool validateCredentials(const QString &id, const QString &password);
    void openMainInterface();
};

#endif // MAINWINDOW_H
