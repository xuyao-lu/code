#include <stdio.h>
#include <string.h>
#include <malloc.h>
char* get_str(char *ptr)
{
    ptr=(char*)malloc(17);
    strcpy(ptr,"Xiyou Linux Group");
    return ptr;
}

int main()
{
    char *str = NULL;
    str=get_str(str);
    printf("%s\n",str);
       return 0;
}

