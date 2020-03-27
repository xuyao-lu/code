#include <stdio.h>

int main()
{
    int k=0;
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++)
            for(int m=1;m<=4;m++)
            {
                if(i==j||i==m||j==m)
                    continue;
                printf("%d%d%d\t",i,j,m);
                k++;
            }
    printf("\n%d\n",k);
                return 0;
}

