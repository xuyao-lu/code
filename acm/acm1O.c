#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10000];
    while(1)

    {
        scanf("%s",arr);
        if(strcmp(arr,"0")==0)
            break;
        int len=strlen(arr);
        long long int  data=0,dataend;
        for(int i=0;i<len;i++)
           data+=(arr[i]-'0');
           
           while(data>9) 
            {
                dataend=data;    
                data=0;    
                while(dataend)
               {
                   data+=dataend%10;
                   dataend/=10;  
               }
            }
               printf("%lld\n",data);
           }
    return 0;
}
