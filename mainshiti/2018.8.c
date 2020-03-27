#include <stdio.h>

int f(unsigned int num)
{ 
    unsigned int i;
	for ( i = 0; num; i++){
		num &= (num-1);
	}
	return i;
} 

int main()
{
   printf("%d\n",f(2018));
}
