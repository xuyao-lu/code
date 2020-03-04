#include <stdio.h>
#include <string.h>
struct node{
	char a;
	short b;
	int c;
};

int main(int argc, char *argv[]) {
    struct node s;
    memset(&s,0,sizeof(s));
	s.a = 3;
	s.b = 5;
	s.c = 7;
	struct node *pt = &s;	
	printf("%d\n", *(int*)pt);
	printf("%lld\n", *(long long *)pt);
}

