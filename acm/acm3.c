#include <stdio.h>

int main()
{
    int a,b;
    int N;
    scanf("%d",&N);
    while(N)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
        N--;
    }
       return 0;
}

