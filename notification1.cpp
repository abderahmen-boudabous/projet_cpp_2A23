#include "notification1.h"

notification1::notification1()
{

}
void notification1::notification_system()
{
    QSystemTrayIcon * notifyIcon = new QSystemTrayIcon();
    notifyIcon->show();
    notifyIcon->showMessage("gestion des tickets","ticket ajoutee",QSystemTrayIcon::Information,15000);
}
