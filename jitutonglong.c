#include <stdio.h>

int main()
{
    int chicken,rabbit;
    int foot,head;
    scanf("%d %d",&foot,&head);
    rabbit=(foot-2*head)/(4-2);
    chicken=(4*head-foot)/(4-2);
    if(rabbit*4+chicken*2==foot&&rabbit+chicken==head)
    printf("%d %d\n",chicken,rabbit);
        return 0;
}

