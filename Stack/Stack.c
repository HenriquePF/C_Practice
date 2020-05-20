// #include <stdio.h>

// int maxSize = 10;
// int stack[10];
// int top = - 1;

// //checks if the stack is empty
// int isEmpty(){ 
//   if(top == -1) {
//     return 1;
//   } else {
//     return 0;
//   }
// }

// //checks if the stack is full
// int isFull(){
//   if(top == maxSize) {
//     return 1;
//   } else {
//     return 0;
//   }
// }

// //return the topmost value of the stack
// int peek(){
//   return stack[top];
// }

// //remove the topmost element
// int pop(){
//   int value;
  
//   if(!isEmpty()) {
//     value = stack[top];
//     top = top - 1;
//     return value;
//   } else {
//     printf("No values to remove. Stack is empty.");
//   }
//   return 0;
// }

// //add an element to the rear of  the stack
// int push(int value) {
//   if(!isFull()) {
//     top = top + 1;
//     stack[top] = value;
//   } 
//   else {
//     printf("\nStack is full.\n");
//   }
//   return 0;
// }

// int main(void) {

//   int option;
//   while(1){
//     printf("\n1.Enqueue \n2.Dequeue \n3.Display\n");
//     printf("\nSelect option:\n");
//     scanf("%d", &option);
//     switch(option){
//     case 1: 
//     push(1);
//     break;
//     case 2:
//     pop();
//     break;
//     case 3:
//     peek();
//     break;
//     default:
//     printf("\nFrom 1 to 4.\n");
//     }
//     push(1);
//     push(1);
//     push(1);
//     push(1);
//     push(1);
//     push(1);
//     push(1);
//     push(1);
//     push(1);
//     push(100);
//     printf("\nThe topmost value is: %d\n", peek());

//     printf("\n====================================================\n");
//     printf("Stack is full: %s\n", isFull()?"true":"false");
//     printf("Stack is empty: %s\n", isEmpty()?"true":"false");
//     printf("====================================================\n");
//   }
// }