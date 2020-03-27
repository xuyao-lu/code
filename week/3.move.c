#include <stdio.h>
#include <string.h>
int main()
{
    char start[12];
    char a[1000];
    char end[10];
    int len;
    char c[10]="START";
    char b[20]="ENDOFINPUT";
    while(1)
    {   
    
        fgets(start,12,stdin);

        if(strcmp(start,b)==0)

            return 0;

        if(strcmp(start,c)==0)
         
        {
        fgets(a,1000,stdin);
        len=strlen(a);
        fgets(end,10,stdin);
        int i;
        for(i=0;i<len;i++)
        {
        if(a[i]>=65&&a[i]<=90)
        {
            if(a[i]>=70)
                a[i]-=5;
            else
                a[i]+=21;
        }
        }
        
            printf("%s",a);
        memset(a,'\0',sizeof(a));
        memset(start,'\0',sizeof(start));
        memset(end,'\0',sizeof(end));
        }
    }

       return 0;
}




#include <stdio.h>
#include <string.h>
int main()
{
    char start[20];
    char a[1000];
    char end[10];
    int len;
    char End[] = "ENDOFINPUT";

    while(1)
    {

        fgets(start,20,stdin);

        if(strcmp(start,End)==0)
           return 0;

        fgets(a,1000,stdin);
        fgets(end,10,stdin);

        len=strlen(a);
        int i;
        for(i=0;i<len;i++)
        {
            if(a[i]>=65&&a[i]<=90)
            {
                if(a[i]>=70)
                    a[i]-=5;
                else
                    a[i]=a[i]+21;
            }
        }
        printf("%s",a);
        memset(a,'\0',sizeof(a));
        memset(start,'\0',sizeof(start));
        memset(end,'\0',sizeof(end));
    }

       return 0;
}
