#include <stdio.h>
#include<string.h>
#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}
 
char *match( char *s, char ch1, char ch2 )
{ int i=0;
    char *rtn; 
    int len=strlen(s);
    for(;(i<len&&(s[i]!=ch1));i++); 
    rtn=&s[i]; 
    for(;i<len;i++) 
    { 
        printf("%c",s[i]); 
        if(s[i]==ch2)
            break; 

    } 
    printf("\n"); 
    return rtn;
}
