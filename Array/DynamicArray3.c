// #include <stdio.h>
// #include <stdlib.h>

// struct head {
//   int qtd;
//   int reserved;
//   int *p;
// };

// void addElement(struct head *add, int userInput) {
// int *temp;

//   if(add->p == NULL) {
//     add->p = malloc(sizeof(int) * 1);
//     add->reserved++;
//   }

//   if(add->qtd == add->reserved) {
//     int i = 0;
//     temp = malloc(sizeof(int) * (add->qtd * 2));
//     add->reserved = add->qtd * 2;

//     for(i = 0; i < add->qtd; i++) {
//       temp[i] = add->p[i];
//     }
//     free(add->p);
//     add->p = temp;
//   }

//   add->p[add->qtd] = userInput;
//   add->qtd++;
// }

// void removeElement(struct head *rm, int index) {
// int i, j;
// int *temp = malloc(sizeof(int) * (rm->qtd - 1));
// for(i = 0; i < rm->qtd; i++) {
//   if(i != index) {
//     temp[j] = rm->p[i];
//     j++;
//   }
// }
// rm->qtd = rm->qtd - 1;
// rm->reserved = rm->qtd;
// free(rm->p);
// rm->p = temp;
// }

// void printArray(struct head *printArray) {
// int i;

// printf("%d Elements - %d Slots [", printArray->qtd, printArray->reserved);
//   for(i = 0; i < printArray->qtd; i++) {
//     printf("%d" ,printArray->p[i]);
//     if(i != printArray->qtd - 1) {
//       printf(", ");
//     }
//   }
//   printf("]");
// }

// int main(void) {
// struct head mainArray;
// mainArray.qtd = 0;
// mainArray.p = NULL;

// addElement(&mainArray, 1);
// addElement(&mainArray, 2);
// addElement(&mainArray, 3);
// addElement(&mainArray, 4);
// addElement(&mainArray, 5);
// addElement(&mainArray, 6);
// removeElement(&mainArray, 3);
// printArray(&mainArray);
// }