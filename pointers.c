#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 6.9, e = 4.20;
  float* ptrtod = &d;
  float* ptrtoe = &e;
  printf("The value of d is %f, the value of e is %f\n", d, e);
  printf("The address of d is %d, the address of e is %d\n", &d, &e);

  float tmp = e;
  e = *ptrtod;
  *ptrtod = tmp;
  printf("The values of d and e have been swapped, so d should be %f, and e should be %f\n", d, e);
}
