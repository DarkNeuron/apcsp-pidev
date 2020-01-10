#include <stdio.h>

int arrayAdd(int* arr, int s, int n) {

	for (int i = 0; i < s; i++) {

		*(arr+i) = *(arr+i) + n;

		printf("Value is: %d\n", arr[i]);
	}

}

int main() {

  int arr[101];
  for (int i = 0; i <=100; i++) {
    arr[i] = i * i;
  }

	arrayAdd(arr, 15, 10);

}
