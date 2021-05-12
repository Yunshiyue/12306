#ifndef CHANGE_PASSWORD_DIALOG_H
#define CHANGE_PASSWORD_DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "train_socket.h"

namespace Ui {
class ChangePasswordDialog;
}

class ChangePasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePasswordDialog(QWidget *parent = 0);
    ~ChangePasswordDialog();

private slots:
    void on_sure_button_clicked();

private:
    Ui::ChangePasswordDialog *ui;
};

#endif // CHANGE_PASSWORD_DIALOG_H
