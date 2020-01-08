#include <stdio.h>
#include <string.h>


int main() {

  char alphabetOne[] = "abcdefghijklmnopqrstuvwxyz";
  char alphabetTwo[27];

  for (int i = 0; i <= 25; i++) {

    alphabetTwo[i] = 'a' + i;

  }
  alphabetTwo[26] = '\0';


  printf("%s is the first string, and %s is the second string.\n", alphabetOne, alphabetTwo);


  if (strcmp(alphabetOne, alphabetTwo) == 0)

    printf("The two alphabet strings are the same.\n");

  else

    printf("The two alphabet strings are different.\n");

  for (int i = 0; i <= 25; i++) {

    alphabetOne[i] = alphabetOne[i] - 32;

 }

  printf("%s is the new string, and %s is the second string.\n", alphabetOne, alphabetTwo);

  if (strcmp(alphabetOne, alphabetTwo) == 0)

    printf("The two strings are the same.\n");

  else

    printf("The two strings are different.\n");

  char alphabetThree[53];
  strcpy(alphabetThree, alphabetOne);
  strcat(alphabetThree, alphabetTwo);

  printf("String One: %s\n String Two: %s\n String Three: %s\n", alphabetOne, alphabetTwo, alphabetThree);

}
