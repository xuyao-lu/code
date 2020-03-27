#include <stdio.h>

int main()
{
    int i;
    for(i=0;i<=2;i++)
    {
        switch(i)
        {
        default:
            printf("%d",i);
            break;
        case 0:
            printf("%d",i);
            break;
        case 1:
            printf("%d",i);
            break;
        }
    }
       return 0;
}

