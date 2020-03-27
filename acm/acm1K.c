#include <stdio.h>

int main()
{
    int n,m,k;
    while(scanf("%d",&n)!=EOF)
    {
        m=n/2;
        k=n-m;

        if(n==1)
            printf("0\n");
        else if(n==2)
            printf("1\n");
        else
            printf("%d\n",m*(m-1)/2+k*(k-1)/2);
    }   
        return 0;
}

