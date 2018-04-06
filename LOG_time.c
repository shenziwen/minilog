#include"LOG_global.h"
static inline void LOG_get_time(LOG_TIME_S *logtime)
{
    struct tm *t;
    time_t tt;
    time(&tt);
    t = localtime(&tt);
    logtime->iYear = t->tm_year + 1900;
    logtime->iMon = t->tm_mon + 1;
    logtime->iDay = t->tm_mday;
    logtime->iHour = t->tm_hour;
    logtime->iMin = t->tm_min;
    logtime->iSec = t->tm_sec;
}

int LOG_sprintf_time(char *log)
{
    LOG_TIME_S logtime;
    LOG_get_time(&logtime);
    return sprintf(log,"%4d-%02d-%02d %02d:%02d:%02d\t", logtime.iYear, logtime.iMon, logtime.iDay, logtime.iHour, logtime.iMin, logtime.iSec);
}




