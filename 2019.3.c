#include <stdio.h>

void f();

int main()
{
    f();
    f();
    f();
    f();
       return 0;
}
void f() {
  static int a = 0;
  int b = 0;
  printf("%d, %d\n", ++a, ++b);
}

