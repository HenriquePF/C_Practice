#include <stdio.h>

int partition(int arr[], int left, int size) {
  int i, j, temp;
  i = left; 

  for(j = left; j <= size; j++) {
    if(arr[j] < arr[left]) {
      i++;
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

temp = arr[left];
arr[left] = arr[i];
arr[i] = temp;

return i;
}

void quickSort(int arr[], int left, int size) {
int part, temp, i, j;

  if(size > left) {
    part = partition(arr, left, size);
    quickSort(arr, left, part);
    quickSort(arr, part + 1, size);
  }

  for(j = left; j <= size; j++) {
      if(arr[j] < arr[left]) {
        i++;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }

  temp = arr[left];
  arr[left] = arr[i];
  arr[i] = temp;

}