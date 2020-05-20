// #include<stdio.h>
// #include "bubbleSort.h"
// #include "selectionSort.h"
// #include "quickSort.h"
// #include "makeArray.h"
// #include <time.h>

// int main() {
// clock_t start, end;

// double timeTake;
// int *p, *t, *l, i;
// int size = 1000000;

// p = makeArray(size);
// t = copyArray(p, size);
// l = copyArray(p, size);

// printf("Bubble Sort com %d elementos no array.\n", size);
// printf("Elementos: [");
// for(i = 0; i < 3; i++) {
//   printf("%d,", p[i]);
// }
// printf("...]");
// printf("\n");
// start = clock();
// // BubbleSort(p, size);
// end = clock();
// timeTake = ((double)(end - start) / CLOCKS_PER_SEC);
// printf("Tempo para ordenação: %f\n\n", timeTake);

// printf("Selection Sort com %d elementos no array.\n", size);
// printf("Elementos: [");
// for(i = 0; i < 3; i++) {
//   printf("%d,", t[i]);
// }
// printf("...]");
// printf("\n");
// start = clock();
// // SelectionSort(t, size);
// end = clock();
// timeTake = ((double)(end - start) / CLOCKS_PER_SEC);
// printf("Tempo para ordenação: %f\n\n", timeTake);

// printf("QuickSort com %d elementos no array.\n", size);
// printf("Elementos: [");
// for(i = 0; i < 3; i++) {
//   printf("%d,", l[i]);
// }
// printf("...]");
// printf("\n");
// start = clock();
// quickSort(l, 0, size);
// end = clock();
// timeTake = ((double)(end - start) / CLOCKS_PER_SEC);
// printf("Tempo para ordenação: %f\n\n", timeTake);

// return 0;
// }