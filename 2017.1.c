#include <stdio.h>

int main(int argc , char *argv[])
{
    int t=0;
    double a=0;
    printf("%d\n",t--);
    printf("%lu\n",sizeof(a++));
    printf("%lu\n",sizeof("ab c\nt\012\xa1*2"));
       return 0;
}

