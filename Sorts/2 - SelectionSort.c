#include<stdio.h>

void SelectionSort(int mkArr[], int size) {
  int i, j, position, swap, x;

  for(i = 0; i < size; i++) {//Iterate through the elements of the array
    position = i;//Holds first position
    
    for(j = i + 1; j < size; j++) {//iterate through the elements of the array, starting from the second position
      if(mkArr[position] > mkArr[j]) {//if the first position(position) is greater than the second position(j)...
        position = j;//... Then position gets j(exchange the larger for the smaller number)
      }
    }

    if(position != i) {//If the position is different from the i(starting value)
      swap = mkArr[i];
      mkArr[i] = mkArr[position];
      mkArr[position] = swap;
    }
  }

}