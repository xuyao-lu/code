#include <stdio.h>
int min(int a,int b);
int main()
{
    int d1,d2,d3;
    scanf("%d %d %d",&d1,&d2,&d3);

    int sum;
    sum=min(d1,d2+d3)+min(d2,d1+d3)+min(d3,d1+d2);
    printf("%d\n",sum);

       return 0;
}
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
//他家到a超市最短路，他家到b超市最短路，a超市到b超市最短路
