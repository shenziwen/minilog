#ifndef __LOG_TIME_H_
#define __LOG_TIME_H_

typedef enum tagLOG_TIME_WEEKDAY
{
	LOG_TIME_DAY_SUN = 0,
    LOG_TIME_DAY_MON,
    LOG_TIME_DAY_TUE,
    LOG_TIME_DAY_WED,
    LOG_TIME_DAY_THU,
    LOG_TIME_DAY_FRI,
    LOG_TIME_DAY_SAT
}LOG_TIME_WEEKDAY_E;

typedef struct tagLOG_TIME
{
    unsigned int iYear;
    unsigned int iMon;
    unsigned int iDay;
    unsigned int iHour;
    unsigned int iMin;
    unsigned int iSec;
}LOG_TIME_S;

int LOG_sprintf_time(char *log);

#endif