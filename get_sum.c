#include <stdio.h>

int get_sum(int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
        sum+=i;
    return sum;
}

int main()
{
    int i=100;
    int result=get_sum(i);
    printf("1+2+3+...+%d=%d\n",i,result);
       return 0;
}

