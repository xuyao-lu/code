#include <stdio.h>

int main()
{
    int sum=0;
    int k=0;
    int a[100][3];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        { if(a[i][j]==1)
                sum++;
             if(sum>=2)
             { k++;
              break;
              
        
             }
    
        }
    }

    printf("%d\n",k);
       return 0;
}

