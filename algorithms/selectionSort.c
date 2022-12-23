/* Implementation of selectionSort algorithm in C */
#include <stdio.h>

/* Create swap function */
void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

/* Create selectionSort function */
void selectionSort(int array[], int n) {
  for (int i = 0; i < n-1; i++) {
    int min = i;
    /* Search through the array for the minimum element */
    for (int j = i+1; j < n; j++)
      if (array[j] < array[min])
        min = j;

    /* Swap the minimum and the first elements */
    if (min != i)
      swap(&array[min], &array[i]);
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
  int array[] = {2,7,4,1,5,3};
  int n = sizeof(array)/sizeof(int);

  printf("Before sorting:\n");
  printArray(array, n);

  printf("After sorting:\n");
  selectionSort(array, n);
  printArray(array, n);

  return 0;
}
