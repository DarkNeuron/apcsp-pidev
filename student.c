#include <stdio.h>

struct Student {

  char firstName[50];
  char lastName[50];
  int age;
  int studentID;

};

int printStudent(struct Student* student) {

  printf("this student is -\n");
  printf("First Name:%s\n", student->firstName);
  printf("Last Name:%s\n", student->lastName);
  printf("Age:%d\n", student->age);
  printf("ID:%d\n", student->studentID);

}

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
