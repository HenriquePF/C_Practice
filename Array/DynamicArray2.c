// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// struct Array {
//   int count; 
//   int reserved; 
//   int *p; 
// };

// void addElement(struct Array *a, int inputValue) {
//   int *temp;
//   if(a->p == NULL) {
//     a->p = malloc(sizeof(int) * 1); 
//     a->reserved++; 
//   }

//   if(a->count == a->reserved) {
    
//     int i = 0;
//     temp = malloc(sizeof(int) * (a->count * 2)); 
//     a->reserved = a->count * 2; 

//     for(i = 0; i < a->count; i++) {
//       temp[i] = a->p[i];
//     }

//     free(a->p);
//     a->p = temp;
//   }

//     a->count++;
// }

// void removeElement(struct Array *a, int index) {
//   int i, j = 0;
//   int *temp = malloc(sizeof(int) * (a->count - 1));
//   for (i = 0; i < a->count; i++) {
//     if (i != index) {
//       temp[j] = a->p[i];
//       j++; 
//     }
//   }
  
//   a->count = a->count - 1; 
//   a->reserved = a->count; 
//   free(a->p);
//   a->p = temp;
// }

// void printArray(struct Array *printArr) {
//   int i;
  
//   if (printArr == NULL) {
//     printf("NULL\n");
//     return;
//   }

//   printf("%d element(s), %d slots [", printArr->count, printArr->reserved);
//   for (i = 0; i < printArr->count; i++) {
//     printf("%d", printArr->p[i]);
//     if (i != printArr->count - 1) {
//       printf(", ");
//     }
//   }

//   printf("]\n");
// }

// int main(void) {
//   struct Array a;
//   a.count = 0;
//   a.p = NULL;

//   printArray(&a);

//   addElement(&a, 1);
//   printArray(&a);

//   addElement(&a, 4);
//   printArray(&a);

//   addElement(&a, 6);
//   printArray(&a);

//   printf("\n\n%d\n\n", a.count);

//   addElement(&a, 5);
//   printArray(&a);

//   addElement(&a, 8);
//   printArray(&a);

//   addElement(&a, 8);
//   printArray(&a);

//   addElement(&a, 8);
//   printArray(&a);

//   addElement(&a, 10);
//   printArray(&a);

//   addElement(&a, 8);
//   printArray(&a);

//   removeElement(&a, 1);
//   printArray(&a);

//   int init = time(NULL), i;

//   for (i = 0; i < 131073; i++) {
//     addElement(&a, i);
//   }

//   init = time(NULL) - init;

//   // printArray(&a);
//   printf("%d seconds", init);
//   printf("%d element(s), %d slots [", a.count, a.reserved);

//   return 0;
// }