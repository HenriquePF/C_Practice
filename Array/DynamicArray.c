// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// struct Array {
//   int count;
//   int *p;
// };

// void addElement(struct Array *a, int inputValue) {
//   int i;
//   int *temp = malloc(sizeof(int) * (a->count + 1));//malloc the size of int times coutn plus 1

//   for (i = 0; i < a->count; i++) {
//     temp[i] = a->p[i];//temp i gets the elements from the a->p i(change the array, temporarily)
//   }

//   temp[i] = inputValue;//temp i gets the inputValue
//   a->count++; // a count gets incremented
//   free(a->p);// a->p gets freed
//   a->p = temp;// a->p gets the array from temp... making tempo available again
// }

// void removeElement(struct Array *a, int index) {
//   int i, j = 0;
//   int *temp = malloc(sizeof(int) * (a->count - 1)); // memory malloched with the size of of count - 1

//   for (i = 0; i < a->count; i++) {
//     if (i != index) {
//       temp[j] = a->p[i];
//       j++;
//     }
//   }
//   a->count = a->count - 1;
//   free(a->p);
//   a->p = temp;
// }

// void printArray(struct Array *printArr) {
//   int i;

//   if (printArr == NULL) {
//     printf("NULL\n");
//     return;
//   }

//   printf("%d element(s): [", printArr->count);
//   for (i = 0; i < printArr->count; i++) {
//     printf("%d", printArr->p[i]);

//     if (i != printArr->count + 1) {
//       printf(", ");
//     }
//   }
//   printf("]\n");
// }

// int main(void) {
//   int i = 0;
//   int init = 0;
//   struct Array a;
//   a.count = 0;
//   a.p = NULL;

//   printArray(&a);

//   addElement(&a, 1);
//   addElement(&a, 2);
//   addElement(&a, 3);
//   addElement(&a, 4);
//   addElement(&a, 5);
//   addElement(&a, 6);
//   printArray(&a);

//   removeElement(&a, 4);
//   printArray(&a);

//   removeElement(&a, 4);
//   printArray(&a);

//   removeElement(&a, 1);
//   printArray(&a);

//   // init = time(NULL);

//   // for (i = 0; i < 50000; i++) {
//   //   addElement(&a, i);
//   // }

//   // init = time(NULL) - init;

//   // printf("%d seconds", init);
 
//   return 0;
// }
