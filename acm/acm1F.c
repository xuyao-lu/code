#include <stdio.h>
#include<string.h>
int main()
{
    int n,sum,i,k;
    char a[100];
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
        scanf("%s",&a);
        k=strlen(a);
        for(i=0;i<k;i++)
        {
            if(a[i]>='0'&&a[i]<='9')
            {
                sum++;
            }
        }
            printf("%d\n",sum);
    }
       return 0;
}

