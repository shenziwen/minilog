#include"LOG_global.h"
#include"LOG_file.h"

const char LOG_FILE_NAME[] = "./minilog.log";

void log_file_write(FILE *p,char *log) 
{  		
	p = fopen(LOG_FILE_NAME, "a+");  
    if (p == NULL)  
    {  
		printf("fail to creat(open) file:%s.\n",LOG_FILE_NAME);
		printf("Debug info:FIEL:%s,FUNCTION:%s,LINE:%d\n",__FILE__,__FUNCTION__,__LINE__);
	}
	fwrite(log, strlen(log ), 1, p);	
	fclose(p);
}


/*
void _log_file_read(void *arg)  
{  
	char *filename = "./DLP_log.log";
	FILE *p = fopen(filename, "r+");  
    if (p == NULL)  
    {  
		printf("fail to open file.\n");
		printf("Debug info:FIEL:%s,FUNCTION:%s,LINE:%d\n",__FILE__,__FUNCTION__,__LINE__);
    }
	else  
    {  
        LOG_ATTRIBUTE_S log_attribute;	  
//        memset(&man, 0, sizeof(man));    
  //      while(fread(&man, sizeof(LOG_ATTRIBUTE_S), 1, p))  
    //    {  
	//		;  
      //  }		
        fclose(p);  
    } 
	//pthread_exit(NULL);
}

*/