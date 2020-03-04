#include <stdio.h>

int main()
{
    int sum;
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        sum=0;
        while(a--)
        {
            scanf("%d",&b);
            sum+=b;
        }
        printf("%d\n",sum);
    }
       return 0;
}

