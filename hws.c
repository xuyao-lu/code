#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *desk;
	scanf ("%s",desk);
	if(zifu(&desk))
		printf ("yes\n");
		printf ("no\n");

}

int zifu(char* dest) {
	char* begin = dest;
	char* end = dest + strlen(dest)-1;
		while (*begin == *end && begin < end)
				{
						begin++;
						end--;
					}
	if (begin >= end) 
	return 1;
	return 0;
}
