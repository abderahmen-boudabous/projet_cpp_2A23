#include "notification.h"

notification::notification()
{


    }
    void notification::notification_system()
    {
        QSystemTrayIcon * notifyIcon = new QSystemTrayIcon();
        notifyIcon->show();
        notifyIcon->showMessage("buzz yekhdem","",QSystemTrayIcon::Information,15000);
    }
    void notification::notification_sys()
    {
        QSystemTrayIcon * notifyIcon = new QSystemTrayIcon();
        notifyIcon->show();
        notifyIcon->showMessage("Buzzer Fermer ","",QSystemTrayIcon::Information,15000);

}
