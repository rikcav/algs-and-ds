/* Implementation of bubbleSort algorithm in C */
#include <stdio.h>

/* Create swap function */
void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

/* Create bubbleSort function */
void bubbleSort(int array[], int n) {
  for (int k = 1; k < n-1; k++) {
    /* If the i elements are already in place */
    for (int i = 0; i < n-k; i++) {
      if (array[i] > array[i+1]) {
        swap(&array[i], &array[i+1]);
      }
    }
  }
}

/* Create printArray function */
void printArray(int array[], int size) {
  printf("{");
  for (int i = 0; i < size; i++)
    printf("%d,", array[i]);
  printf("\b}\n");
}

/* Test the sorting algorithm */
int main(int argc, char *argv[]) {
  int A[] = {2,7,4,1,5,3};
  int n = sizeof(A)/sizeof(int);

  printf("Before sorting\n");
  printArray(A, n);

  printf("After sorting\n");
  bubbleSort(A, n);
  printArray(A, n);
}
