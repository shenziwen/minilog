#include"LOG_global.h"

int main(int argc,char *argv[])  
{  
    int i = 0;
    char test_log[LOG_LEN] = {0};
    FILE *p;
    i = LOG_sprintf_time(test_log);
    i += sprintf(test_log + i,"%s","this is a test log.\n");
    log_file_write(p,test_log);
    return 0;  
}


/*    int         err;  
    pthread_t   tid;   
  
    err = pthread_create(&tid, NULL, thr_file_write, NULL);  
    if (err != 0)
    {
        printf("failed to create thread.\n");
		printf("Debug info:FIEL:%s,FUNCTION:%s,LINE:%d\n",__FILE__,__FUNCTION__,__LINE__);
    }
	
    err = pthread_join(tid, NULL);
    if (err != 0)
    {
        printf("fail to join with thread.\n"); 
		printf("Debug info:FIEL:%s,FUNCTION:%s,LINE:%d\n",__FILE__,__FUNCTION__,__LINE__);
    }
*/	 
