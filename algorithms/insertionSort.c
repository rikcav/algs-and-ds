/* Implementation of insertionSort algorithm in C */
#include <stdio.h>
#include <math.h>

/* Create insertionSort function */
void insertionSort(int array[], int n) {
  for (int i = 1; i < n; i++) {
    int key = array[i];
    int hole = i - 1;
    /* Move elements greater than key to one position ahead */
    while (hole >= 0 && array[hole] > key) {
      array[hole + 1] = array[hole];
      hole = hole - 1;
    }
    array[hole + 1] = key;
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
  insertionSort(A, n);
  printArray(A, n);
}
