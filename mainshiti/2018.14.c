#include <stdio.h>
#include <string.h>
#include <math.h>
int Convert(const char * num);

int main()
{
    char *num="12345";
    int res=Convert(num);
    printf("%d\n",res);
       return 0;
}

int Convert(const char * num)
{

    int a=0;
    int i=0;
    char ch = *num;
    char p[10];

    strcpy(p,num);

    while(ch!='\0')
    {

        a=a*10+ch-'0';
       ch=p[++i];
    }
    return a;
}
