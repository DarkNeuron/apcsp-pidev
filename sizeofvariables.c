#include<stdio.h>

int main()
{
  char a = '8';
  int b = 545;
  float c = 1.23;
  double d = 12.34;
  signed int e = -1;
  long f = 55;


  // print value and size of an int variable
  printf("char a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("int b value: %d and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %d and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %d and size: %d bytes\n", d, sizeof(d));
  printf("signed int e value: %d and size: %d bytes\n", e, sizeof(e));
  printf("long f value: %d and size: %d bytes\n", f, sizeof(f));
}


