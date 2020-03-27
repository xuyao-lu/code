#include <stdio.h>
#include <string.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    char h[19][10]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
    char t[20][10]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok",  "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
    printf("%d\n",N);
    while(N)
    {
        char month[100];
        int year,day,data;
        scanf("%d.%s %d",&day,month,&year);

        
        for(i=0;i<19;i++)
        {
            if(strcmp(h[i],month)==0)
                break;
        }
        data=365*year+i*20+day;
        printf("%d %s %d\n",1+data%13,t[data%20],data/260);
        N--;
    }
       return 0;
}
