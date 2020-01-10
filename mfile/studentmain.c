#include <stdio.h>
#include "student.h"

int main() {

  struct Student studentArray[5];
  char input[256];
  char answer = 'n';
  int max = 0;
  for (int i = 0; i <= 5; i++) {
    printf("Input student name:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", studentArray[i].firstName);

    printf("Input student last name:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", studentArray[i].lastName);

    printf("Input student age:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &studentArray[i].age);

    printf("Input student ID:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &studentArray[i].studentID);

    printf("Done?:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", &answer);
    if (answer == 'y') {
        break;
    }
    max++;
  }

  for (int i = 0; i <= max; i++) {
    printStudent(&studentArray[i]);
  }

}
