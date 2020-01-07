#include <stdio.h>


float areaOfCircle(float radius) {
  float radsq = radius * radius;
  float tmparea = 3.14 * radsq;
  return tmparea;
}

int main() {
  float radius = 3.5;
  float area;


  while (radius <= 12.5) {
    area = areaOfCircle(radius);
    printf("The area of the circle with a radius of %f is %f\n", radius, area);
    radius++;
  }

}
