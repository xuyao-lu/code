#include <stdio.h>

int jiecheng (int n);
int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n",jiecheng(n));
       return 0;
}

int jiecheng(int n)
{
    if(n==0)
        return 1;
    else
        return n*jiecheng(n-1);
}

