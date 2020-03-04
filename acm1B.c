#include <stdio.h>

int main()
{
    int n;
    int a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        int sum=0;
        while(a--)
        {
            scanf("%d",&b);
            sum+=b;
        }
        printf("%d\n",sum);
    }
    return 0;
}

