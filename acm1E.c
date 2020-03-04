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
        if(n=1)
            printf("%d\n",sum);
        else
            
        printf("%d\n\n",sum);
    }
    return 0;
}

