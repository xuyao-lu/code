#include <stdio.h>
#include<math.h>
int main()
{
    int a,c,b;
    float s,area;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        s=(a+b+c)/2.0;
        area=s*(s-a)*(s-b)*(s-c);
        area=sqrt(area);
        printf("%f",area);
    }
       return 0;

}

