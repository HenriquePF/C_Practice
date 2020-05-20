// #include <stdio.h>


// int binarySearch(int firstArray[], int leftMost, int rightMost, int userInput) {
//   int middle;
//   if(rightMost >= leftMost) { 
//     middle = (leftMost + rightMost) / 2;
//     if(firstArray[middle] == userInput) {
//       return middle;
//     } else if(firstArray[middle] < userInput) {
//       return binarySearch(firstArray, middle+1, rightMost, userInput);
//     } else {
//       return binarySearch(firstArray, leftMost,middle-1, userInput);
//     }
//   }
//   return 0;
// }

// int main(){

//   int list[10] = {2, 3, 5, 7, 6, 8, 9, 10, 12, 15};
//   int userInput, local = 0;

//   printf("Input the item to be searched in the array:\n");
//   scanf("%d", &userInput);
//   local = binarySearch(list, 0, 19, userInput);

//   if (local != -1) {
//     printf("Your item is located at the position: %d\n", local);
//   } else {
//     printf("Item not found.");
//   }
// }

// JN251922959BR
