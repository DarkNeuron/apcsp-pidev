#include <stdio.h>

int main()
{
  int a = 5;
  int b = 89;
  // if statement to test if a is equal to 0
  if (a == b)
  {
    printf("a is equal to b\n");
  }
  if (a != b)
  {
    printf("a is not b\n");
  }
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  if (a == 0 && b == 0)
  {
    printf("a is equal to 0 AND b is equal to 0\n");
  }
  if (a == 0 || b == 0)
  {
    printf("a is equal to 0 OR b is equal to 0\n");
  }
  if (!(a == 0))
  {
    printf("a is NOT equal to 0\n");
  }
}
