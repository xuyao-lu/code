#include <stdio.h>

int main()
{
    char a;
    a=getchar();
    if(a<' ')
        printf("控制字符\n");
    else if(a>='0'&&a<='9')
        printf("数字\n");
    else if(a>='a'&&a<='z')
        printf("小写字符\n");
    else if(a>='A'&&a<='Z')
        printf("大写字符\n");
    else 
        printf("其他字符\n");
        
       return 0;
}

