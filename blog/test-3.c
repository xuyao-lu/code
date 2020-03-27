#include <stdio.h>
#define N 4
void foundkey(int a[N][N],int *pm,int *pn);
int main()
{
    int a[N][N]={   };//这里采用N*N的方阵，数组的初始化自己进行
    int m=-1,n=-1;
    printf("%d %d %d",a[m][n],m,n);
    foundkey(a,&m,&n);
       return 0;
}
void foundkey(int a[N][N],int *pm,int *pn,int key)
{
    scanf("%d",&key);
    int i=0,j=N-1;
    while(i==N||j==-1)
    {
        if(key>a[i][j])
            i++;
        else if(key<a[i][j])
            j--;
        else
        {
            *pm=i;
            *pn=j;
        }
    }
}

