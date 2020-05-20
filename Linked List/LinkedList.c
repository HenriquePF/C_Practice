// #include <stdio.h>
// #include <stdlib.h>

// //Node struct
// struct node {
//   int x;
//   struct node *next;
// };

// void printListRecursive(struct node *ptr) {
//   if (ptr == NULL) {
//     printf("NULL\n");
//     return;
//   }
//   printf("%d -> ", ptr->x);
//   printListRecursive(ptr->next);
// }

// void printListLoop(struct node *ptr) {
//   struct node *temp = ptr;
  
//   while (temp != NULL) {
//     printf("%d -> ", temp->x);
//     temp = temp->next;
//   }
//   printf("NULL\n");
// }

// int main(void) {
//   struct node *head;
//   struct node *temp;
//   struct node *temp2;
//   struct node *temp3;
//   struct node *temp4;

//   temp = (struct node *)malloc(sizeof(struct node *)); 
//   temp->x = 5;
//   temp->next = NULL;

//   head = temp;

//   printListRecursive(head);

//   temp2 = (struct node *)malloc(sizeof(struct node *)); 
//   temp2->x = 10;
//   temp2->next = NULL;

//   head->next = temp2;

//   printListLoop(head);

//   temp3 = (struct node *)malloc(sizeof(struct node *));
//   temp3->x = 15;
//   temp3->next = NULL;

//   temp2->next = temp3;

//   printListLoop(head);

//   temp4 = (struct node *)malloc(sizeof(struct node *));
//   temp4->x = 20;
//   temp4->next = NULL;

//   temp3->next = temp4;

//   printListLoop(head);

// } 