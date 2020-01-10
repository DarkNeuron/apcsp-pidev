#include "student.h"

void printStudent(struct Student* student) {

  printf("this student is -\n");
  printf("First Name:%s\n", student->firstName);
  printf("Last Name:%s\n", student->lastName);
  printf("Age:%d\n", student->age);
  printf("ID:%d\n", student->studentID);

}
