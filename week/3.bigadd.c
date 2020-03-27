#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str1[10000],str2[10000];

    int a1[10000],b1[10000];
    while(scanf("%s %s",str1,str2)!=EOF)
    {
        int len1=strlen(str1);
        int len2=strlen(str2);
        for (i=0;i<len1;i++)
            a1[len1-i-1]=str1[i]-'0';
        for (i=0;i<len2;i++)
            b1[len2-i-1]=str2[i]-'0';

        int max=len1>len2?len1:len2;
        for (i=0;i<max;i++)
        {
            a1[i]+=b1[i];
            a1[i+1]+=a1[i]/10;
            a1[i]%=10;
        }
        if(a1[max])
            max++;
        for(i=max-1;i>=0;i--)
            printf ("%d",a1[i]);
        printf ("\n");
        memset(str1,'\0',sizeof(str1));
        memset(str2,'\0',sizeof(str2));
        memset(a1,0,sizeof(a1));
        memset(b1,0,sizeof(b1));
    }
       return 0;
}

