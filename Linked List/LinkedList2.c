//  #include <stdio.h>
// #include <stdlib.h>

// //Node struct
// struct node {
//   int x;
//   struct node *next;
// };

// //Prints
// void printListRecursive(struct node *ptr) {
//   if (ptr == NULL) {
//     printf("NULL\n");
//     return;
//   }
//   printf("%d -> ", ptr->x);
//   printListRecursive(ptr->next);
// }

// void printListReverse(struct node *ptr) {
//   if(ptr == NULL) {
//     return;
//   }
//   printListReverse(ptr->next);
//   printf("%d -> ", ptr->x);
// }

// //=================================

// //Node
// struct node *createNode(int value) {
//   struct node *newNode = (struct node *)malloc(sizeof(struct node *)); 
  
//   newNode->x = value;
//   newNode->next = NULL;

//   return newNode;
// }
// //=================================

// //Insert Begin
// void insertBegin(struct node **head, int value) {
//   struct node *firstNode = createNode(value);
//   firstNode->next = *head;
//   *head = firstNode;
// }
// //=================================

// //Insert End
// void insertEnd(struct node **head, int value) {
//   struct node *lastNode = createNode(value);
//   struct node *newNode;

//   if(*head == NULL) {
//     *head = lastNode;
//   } else {
//       newNode = *head;
//     while(newNode->next != NULL) {
//       newNode = newNode->next;
//     }
//     newNode->next = lastNode;
//   }
// }
// //=================================

// //Delete Begin
// void deleteBegin(struct node **head) {
//   struct node *ptr = *head;
//   *head = ptr->next;
//   free(ptr);
// }
// //=================================

// //Delete End
// void deleteEnd(struct node **head) {  
//   struct node *current = *head;
//   struct node *previous = NULL;

//   if(*head == NULL) {
//     printf("\nEmpty list.\n");
//     return;
//   } 

//   while(current->next != NULL) {
//     previous = current;
//     current = current->next;
//   }
//   //when current->next == NULL
//   if(previous != NULL) {
//     previous->next = NULL;
//   } else {
//     *head = NULL;
//   }
//   free(current);
// }
// //=================================

// //Search Node
// struct node *searchNode(struct node **head, int value, struct node **retPrevious, struct node **retNext) {
//   struct node *current = *head;
//   struct node *previous;
//   struct node *next;
//   int noExistent;

//   previous = NULL;
//   next = NULL;

//   while(current != NULL) {

//     if(current->x == value)
//     {
//       next = current->next;

//       printf("\n%d -> |%d| -> %d\n", previous != NULL ? previous->x : noExistent, current->x , next != NULL ? next->x : noExistent);

//       if(retPrevious != NULL) {
//         *retPrevious = previous;
//       }

//       if(retNext != NULL) {
//         *retNext = next;
//       }

//       return current;
//     }

//     previous = current;
//     current = current->next;
//   }
  
//   if(retPrevious != NULL) {
//     *retPrevious = NULL;
//   }
//   if(retNext != NULL) {
//     *retNext = NULL;
//   }
//   return NULL;
// }
// //=================================

// //Delete specific node
// void deleteSpecificNode(struct node **head, int value) {
//   struct node *current = NULL;
//   struct node *previous = NULL;
//   struct node *next = NULL;

//   current = searchNode(head, value, &previous, &next);

//   if(current == NULL) {
//     printf("Current is NULL!\n");
//     return;
//   }

//   if(previous == NULL) {
//     *head = next;
//   } else {
//     previous->next = next;
//   }

//   free(current);
// }
// //=================================

// int main(void) {
//   struct node *head = NULL;
//   struct node *previous = NULL;
//   struct node *next = NULL;
//   struct node *current = NULL;

//   printListRecursive(head);
//   // TODO: Insert some random dudes
//   printf("\nInsert in the front:\n");
//   insertBegin(&head, 5);
//   // deleteBegin(&head);
//   printListRecursive(head);
//   insertBegin(&head, 10);
//   printListRecursive(head);
//   insertBegin(&head, 15);
//   printListRecursive(head);
//   insertBegin(&head, 20);
//   printListRecursive(head);
//   insertBegin(&head, 25);
//   printListRecursive(head);
//   insertBegin(&head, 30);
//   printListRecursive(head);
  
//   // printf("\nInsert in the back(eita):\n");
//   insertEnd(&head, 4);
//   printListRecursive(head);
//   insertEnd(&head, 3);
//   printListRecursive(head);
//   insertEnd(&head, 2);
//   printListRecursive(head);
//   insertEnd(&head, 1);
//   printListRecursive(head);

//   // deleteSpecificNode(&head, 1);
//   // printListRecursive(head);

//   // deleteSpecificNode(&head, 10);
//   // printListRecursive(head);

//   deleteSpecificNode(&head, 1);
//   printListRecursive(head);
//   printf("Search:\n");
//   searchNode(&head, 2, NULL, NULL);

//   printf("\n===================================\n");
//   // deleteEnd(&head);
//   // printListRecursive(head);
//   // deleteEnd(&head);
//   // printListRecursive(head);
//   // deleteEnd(&head);
//   // printListRecursive(head);
//   // deleteEnd(&head);
//   // printListRecursive(head);
//   // deleteEnd(&head);
//   // printListRecursive(head);
//   // deleteEnd(&head);
//   // printListRecursive(head);
//   // deleteEnd(&head);
//   // printListRecursive(head);
//   // deleteEnd(&head);
//   // // printListRecursive(head); // Aqui a lista já está vazia
//   // // deleteEnd(&head); // Irá imprimir "Empty list"
//   // // printListRecursive(head); // Irá imprimir NULL

//   return 0;
// }