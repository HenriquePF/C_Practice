#include <stdio.h>

void BubbleSort(int mkArr[], int size){
  int i, j, temp;

  for(i = 0; i < size; i++) {
    for(j = i + 1; j < size; j++) {
      if(mkArr[i] > mkArr[j]){
        temp = mkArr[i];
        mkArr[i] = mkArr[j];
        mkArr[j] = temp;
      }
    }
  }
}