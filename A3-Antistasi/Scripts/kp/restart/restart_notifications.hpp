class CfgNotifications {
	
      class lib_default_notification {
        duration = 10;
        soundClose = "defaultNotificationClose";
        colorIconPicture[] = { 1, 1, 1, 1 };
        colorIconText[] = { 1, 1, 1, 1 };
        priority = 5;
    };
    class lib_restart_60_s : lib_default_notification {
        title = SERVER RESTART NOTIFICATION;
        description = The server will restart in less than 60 seconds;
        iconPicture = "res\notif\ui_notif_restart.paa";
        color[] = { 1, 1, 0, 1 };
        sound = "taskCanceled";
    };
    class lib_restart_5_min : lib_default_notification {
        title = SERVER RESTART NOTIFICATION;
        description = The server will restart in less than 5 minutes;
        iconPicture = "Scripts\kp\restart\ui_notif_restart.paa";
        color[] = { 1, 1, 0, 1 };
        sound = "taskCanceled";
    };
    class lib_restart_15_min : lib_default_notification {
        title = SERVER RESTART NOTIFICATION;
        description = The server will restart in less than 15 minutes;
        iconPicture = "Scripts\kp\restart\ui_notif_restart.paa";
        color[] = { 1, 1, 0, 1 };
        sound = "taskCanceled";
    };
    class lib_restart_30_min : lib_default_notification {
        title = SERVER RESTART NOTIFICATION;
        description = The server will restart in less than 30 minutes;
        iconPicture = "Scripts\kp\restart\ui_notif_restart.paa";
        color[] = { 1, 1, 0, 1 };
        sound = "taskCanceled";
    };
};
