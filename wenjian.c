#include <stdio.h>

int main()
{
    FILE *FP fopen ("luxuyao.txt","w");
    if(NULL==FP)
    {
        printf("打开失败");
        return -1;
    }
       return 0;
}

