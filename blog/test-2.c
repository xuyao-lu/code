#include <stdio.h>
int main()
{
    int a[100][100];
    int key;
    int flag=1;
    int m,n;//横行，竖列
    scanf("%d",&key);
    scanf("%d %d",&m,&n);
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    //此时将需要查找的数据，和要查找的数组已经选取好了
    int i=0,j=n-1;
    while(i==m||j==-1)//查找的数字不会同时到达a[m][-1]这一位置
    {
        if(key>a[i][j])
            i++;
        else if(key<a[i][j])
            j--;
             else
             {
                 flag=0;
                 printf("%d %d %d\n",a[i][j],i,j);

                 break;    
             }
    }
    if(flag)
        printf("no find");
       return 0;

}
