#include <stdio.h>

int main()
{
    unsigned int a = 10;
    int b = -20; 
    int c=-1;
    if(a+b>0)
    {
        printf("a + b = %d\n",a+b);
        printf("a + b = %u\n",a+b);
        printf("b = %u\n",b);
        printf("a = %d\n",a);
        printf("c = %u\n",c);
    }
    else
    {
        printf("a = %d b = %d\n",a,b);
    }
       return 0;
}

