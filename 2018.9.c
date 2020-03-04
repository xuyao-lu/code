#include <stdio.h>
int main(int argc, char *argv[])
{
	char n[] = { 1, 0, 0, 0 };
	printf("%d\n", *(int *)n); 
}

