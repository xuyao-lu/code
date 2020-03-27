#include <stdio.h>
struct icd {
	int a;
    char b; 
    double c;
};
struct cdi { 
	char a; 
	double b; 
	int c; 
};
int main(int argc, char *argv[]) 
{ 
	printf("%zu %zu\n",sizeof(struct icd),sizeof(struct cdi)); 
}

