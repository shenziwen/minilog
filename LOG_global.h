#ifndef __LOG_GLOBAL_H_
#define __LOG_GLOBAL_H_

//sys def include
#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<time.h>
#include<pthread.h>  

//user def include
#include"LOG_time.h"
#include"LOG_file.h"

#define LOG_LEN 256

#define LOG_OUTPUT_ALL     0x11
#define LOG_OUTPUT_CONSOLE 0x01
#define LOG_OUTPUT_LOGFILE 0x10

typedef enum tagLOG_PRIORITY
{
	LOG_PRIORITY_EMERG = 0,
	LOG_PRIORITY_ALERT,
	LOG_PRIORITY_CRIT,
	LOG_PRIORITY_ERR,
	LOG_PRIORITY_WARNING,
    LOG_PRIORITY_NOTICE,
    LOG_PRIORITY_INFO,
    LOG_PRIORITY_DEBUG
}LOG_PRIORITY_E;

typedef struct tagLOG_ATTRIBUTE_BIT 
{  
    unsigned int LOG_priority    :3;  
	unsigned int LOG_faciity  :7; 
	unsigned int LOG_rev      :14; 
	unsigned int LOG_type     :8; 
}LOG_ATTRIBUTE_BIT_S;  

typedef union tagLOG_ATTRIBUTE
{
	unsigned int all;
	LOG_ATTRIBUTE_BIT_S bit;
}LOG_ATTRIBUTE_S;

typedef struct tagLOG_BODY
{
	LOG_ATTRIBUTE_S log_attribute;
	LOG_TIME_S log_time;
	char log_context[LOG_LEN];
}LOG_BODY_S;

/*
void LOG_openlog(const char *ident, int option, int facility);
void LOG_syslog(int priority, const char *format, ...);
void LOG_closelog(void);
*/
#endif