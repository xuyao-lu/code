#include <stdio.h>

int main()
{
    int a,b;
    char m;
    while(scanf("%d %c %d",&a,&m,&b)!=EOF)
    {
    if(m=='+')
        printf("%d %c %d = %d\n",a,m,b,a+b);
    if(m=='-')
        printf("%d %c %d = %d\n",a,m,b,a-b);
    }

       return 0;
}

