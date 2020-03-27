#include <stdio.h>

int main()
{
    struct node
    {
        char a;
        short b;
        int c;
    }s;
struct nod
    {
        short b;
        char a;
        int c;
    }e;
struct no
    {
        int c;
        char a;
        short b;
    }d;
struct n
    {
        int c;
        short b;
        char a;
    }o;
struct o
    {
        char a;
        int c;
        short b;
    }t;
struct d
    {
        short b;
        int c;
        char a;
    }m;

    printf("%ld\n",sizeof(s));
    printf("%ld\n",sizeof(e));
    printf("%ld\n",sizeof(d));
    printf("%ld\n",sizeof(o));
    printf("%ld\n",sizeof(t));
    printf("%ld\n",sizeof(m));
       return 0;
}

