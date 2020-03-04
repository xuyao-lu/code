#include <stdio.h>

int main()
{
    int n;
    int k=0;
    int sum=0;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
            sum=sum-a+b;
           if(sum>k)
            k=sum;
    }
    printf("%d\n",k);
       return 0;
}

