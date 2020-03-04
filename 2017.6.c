#include <stdio.h>

int main()
{
    int a[][2]={1,2,3,4,5,6,7,8};
    for(int i=0;i<=2;i++)
    {
        printf("%d\n",a[i][i]);
    }
       return 0;
}

