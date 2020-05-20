// #include <stdio.h>

// int queueList[5];
// int rear = -1, front = -1, i; 
// //   enqueue    dequeue

// // ENQUEUE
// void enqueue() {
//   int userInput;

//   if(rear == 5 - 1) {
//     printf("\nQUEUE LIST IS FULL!\n");
//   } else {
//       front = 0;
//       printf("\nInput a new element:\n");
//       scanf("%d", &userInput);
//       rear = rear + 1;
//       queueList[rear] = userInput;
//   }
// }

// // DEQUEUE
// void dequeue() {
  
//   if(front == -1 || front > rear) {
//     printf("\nList is empty. \n");
//   } else {
//     printf("\nElement dequeued : %d\n", queueList[front]);
//     front = front + 1;
//   }
// }

// // display    OK...?
// void display() {
//   int i;
//   if(front == -1) {
//     printf("\nQueue list is empty!\n");
//   } else {
//     printf("\nThe Queue list is:\n");
//       for(i = front; i <= rear; i++) {
//         printf("%d ", queueList[i]);
//     }
//   }
// }

// int main(void) {
// int option;
// while(1){
  
//   printf("\n1.Enqueue \n2.Dequeue \n3.Display\n");
//   printf("\nSelect option:\n");
//   scanf("%d", &option);

//     switch(option){
//     case 1: 
//     enqueue();
//     break;
//     case 2:
//     dequeue();
//     break;
//     case 3:
//     display();
//     break;
//     default:
//     printf("\nFrom 1 to 4.\n");
//     }
//   }
// }

