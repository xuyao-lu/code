#include <stdio.h>

int main()
{
    int a;
    int num;
    while(scanf("%d",&num)&&num!=0)
    {
        int sum=0;
        while(num--)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
        
    }
       return 0;
}

