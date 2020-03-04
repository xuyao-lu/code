#include <stdio.h>

int main()
{
    int n,k,m=0,i;
    scanf("%d %d",&n,&k);
    int a[100];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
            m++;
        else
            break;
    }

    int l=i;
    for(i=n-1;i>=l;i--)
    {
        if(a[i]<=k)
            m++;
        else
            break;
    }
    printf("%d\n",m);



       return 0;
}

