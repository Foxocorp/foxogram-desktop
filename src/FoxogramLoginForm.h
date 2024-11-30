#pragma once

#include "ui_FoxogramLogin.h"
#include <foxogram/Me.h>

class FoxogramLoginForm : public QWidget {
    Q_OBJECT
public:
    explicit FoxogramLoginForm(QWidget *parrent = nullptr);
protected:
    virtual void resizeEvent(QResizeEvent* event);
private slots:
    void on_loginButton_clicked();
private:
    foxogram::Me* me;
    Ui::Form ui;
};
