#include <stdio.h>
#include <stdlib.h>

float areaOfCircle(float radius) {
  float radsq = radius * radius;
  float tmparea = 3.14 * radsq;
  return tmparea;
}

int main(int argc, char* argv[]) {
  float minr, maxr;
  char input[256];
  float area;
	if (argc == 3) {
		minr = atof(argv[1]);
		maxr = atof(argv[2]);
	}
	else {
		printf("Sorry, you didn't enter the right arguments. Please enter 2 numbers.\n");
		printf("Enter Min:\n");
		while (1) {
			fgets(input, 256, stdin);
			if (sscanf(input, "%f", &minr) == 1) break;
				printf("That isn't a valid number, please input again.\n");
		}
		printf("Enter Max:\n");
                while (1) {
                        fgets(input, 256, stdin);
                        if (sscanf(input, "%f", &maxr) == 1) break;
                                printf("That isn't a valid number, please input again.\n");
                }
	}

	if (minr > maxr) {
		int temp = 0;
		temp = minr;
		minr = maxr;
		maxr = temp;
	}

  for (float radius = minr; radius <= maxr; radius++) {
    area = areaOfCircle(radius);
    printf("The area of the circle with a radius of %f is %f\n", radius, area);
  }

}
