// #include <stdio.h>
 
// // Defining the flags;
// const unsigned char flag0 = 1 << 0; // 0000 0001 = 1
// const unsigned char flag1 = 1 << 1; // 0000 0010 = 2 
// const unsigned char flag2 = 1 << 2; // 0000 0100 = 4
// const unsigned char flag3 = 1 << 3; // 0000 1000 = 8
// const unsigned char flag4 = 1 << 4; // 0001 0000 = 16
// const unsigned char flag5 = 1 << 5; // 0010 0000 = 32
// const unsigned char flag6 = 1 << 6; // 0100 0000 = 64
// const unsigned char flag7 = 1 << 7; // 1000 0000 = 128

// // Function that will check for true bits;
// void printStatus(char mask) {
//   int i;
//   for(i = 0; i <= 7; i++) {
//     printf("%d ", !!((mask << i) & 128));
//   }
//   printf("\n");
// }

// int main(void) {
  
//   // CHANGE STATUS(1 to 255)
//   unsigned char status = 0;

//   printf("BEGIN: %d\n", !5);
//   printStatus(status);

//   printf("Liga a flag 0\n");
//   status = status | flag0;
//   printStatus(status);

//   printf("Liga a flag 2\n");
//   status |= flag2;
//   printStatus(status);

//   printf("Liga a flag 4\n");
//   status |= flag4;
//   printStatus(status);

//   printf("Liga a flag 6\n");
//   status |= flag6;
//   printStatus(status);

//   printf("Empurra para direita\n");
//   status = status >> 1;
//   printStatus(status);

//   // TODO:

//   // Inverter bits;
//   printf("Inverte os bits\n");
//   status = ~status;
//   printStatus(status);
//   // Fazer uma operação de AND e ver o que acontece;
//   printf("Operação AND\n");
//   status &= status;
//   printStatus(status);
//   // Testar o shift left e ver o que acontece;
//   printf("Operação <<3\n");
//   status <<= 4;
//   printStatus(status);

//   // Tudo 1;
//   printf("Operação ~ e ^\n");
//   status = (~status ^status);
//   printStatus(status);
//   printf("=================================\n\n");

//   // 8 e 16 ativados; 1
//   // printf("8 e 16 ativados \n");
//   status &= (flag3 | flag4);
//   printStatus(status);

//   // Inverte;
//   // printf("Inverte \n");
//   status |= (flag2 | flag5);
//   printStatus(status);

//   //Expande; 3
//   // printf("Expande \n");
//   status |= (flag1 | flag6);
//   printStatus(status); 

//   //Expande +; 
//   //printf("Expande +\n");
//   status |= (flag0 | flag7);
//   printStatus(status); 

//   //Tronco(?)
//   // printf("Tronco kkk \n");
//   status = (flag4 | flag3);
//   printStatus(status);
//   printStatus(status);
  
//   // Grama uahseiahsiueh
//   // printf("Grama \n");
//   status = ~(status) ^status;
//   printStatus(status);

//   printf("=================================\n");

//   // H
//   status = ~((status << 6) | (status >> 6));
//   printStatus(~status);
//   printStatus(~status);

//   status = status << 8;
//   printStatus(~status);
//   printStatus(~status);

//   status = (flag3 | flag4);
//   status |= (flag2 | flag5);
//   printStatus(~status);
//   printStatus(~status);

//   printf("=================================\n");

//   // // First Iteration
//   // if((status & flag0)) {
//   //   printf("First Iteration: \n");
//   //   printStatus(status);
//   //   printf("\n\n");
//   //   status = 0;
//   // }

//   // // Second Iteration
//   // if((status & flag1)) {
//   //   printf("Second Iteration: \n");
//   //   printStatus(status);
//   //   printf("\n\n");
//   //   status = 0;
//   // }
  
//   // // Third Iteration
//   // if((status & flag2)) {
//   //   printf("Third Iteration: \n");
//   //   printStatus(status);
//   //   printf("\n\n");
//   //   status = 0;
//   // }

//   // // Fourth Iteration
//   // if((status & flag3)) {
//   //   printf("Fourth Iteration: \n");
//   //   printStatus(status);
//   //   printf("\n");
//   //   status = 0;
//   // }

//   // // Fith Iteration
//   // if((status & flag4)) {
//   //   printf("Fith Iteration: \n");
//   //   printStatus(status);
//   //   printf("\n");
//   //   status = 0;
//   // }

//   // // Sixth Iteration
//   // if((status & flag5)) {
//   //   printf("Sixth Iteration: \n");
//   //   printStatus(status);
//   //   printf("\n");
//   //   status = 0;
//   // }

//   // // Seventh Iteration
//   // if((status & flag6)) {
//   //   printf("Fith Iteration: \n");
//   //   printStatus(status);
//   //   printf("\n");
//   //   status = 0;
//   // }

//   // // Eighth Iteration
//   // if((status & flag7)) {
//   //   printf("Eighth Iteration: \n");
//   //   printStatus(status);
//   //   printf("\n");
//   //   status = 0;
//   // }

//  return 0;
// }