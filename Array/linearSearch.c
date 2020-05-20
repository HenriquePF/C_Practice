// #include <stdio.h>


// void linearSearch(int arrayList[], int item) {
//   int i, flag;

//   for(i = 0; i < 20; i++) {
//     if(arrayList[i] == item) {
//       flag = i + 1;
//       break;
//     } else {
//       flag = 0;
//     } 
//   }
//     if(flag != 0) {
//       printf("\nItem found at the locaation: %d", flag);
//     } else {
//       printf("\nLocation not found!");
//     }
//   }

// int main(){

//   int list[20] = {4, 55, 21, 9, -1, 43, 2, 12, 52, 27, 34, 666, 2, 333, 17, 20, 12, 74, 31, 98};
//   int item, i, flag;

//   printf("Enter number to be searched:\n");
//   scanf("\n%d", &item);

//   linearSearch(list, item);

//   return 0;
// }