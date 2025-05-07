#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int num1, num2, soma;


int main(void){
   printf("Enter the first number:");
   scanf("%if", &num1);
   printf("Enter the second number");
   scanf("%if", &num2);
   soma = num1 + num2;
   printf("Somat�ria = %i", soma);
   getch();
   return 0;
 }
