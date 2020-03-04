#include <stdio.h>
#include <string.h>
size_t q(size_t b)
{
    return b;
}

size_t(*p(char *str))(size_t a)
{
    printf("%s\n",str);
    return q;
}

int main()
{
    char str[]="XiyouLinuxGroup";
    printf("%lu\n",p(str)(strlen(str)));
       return 0;
}
