#include <stdio.h>

entern long power(int);
int A = 2;

int main()
{
    int n = 10,total;
    total = power(n);
    printf("2^10 = %d \n",total);
    return 0;
}
 entern A;
  long power(int n)
  {
      long total = 1;
      int i;
      for(i=1;i<=n;i++)                                                         
      {   
          total = total * A;
  
      }   
      return total;
  }

