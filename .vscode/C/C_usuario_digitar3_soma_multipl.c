// Fábio 26/05/2025 - Digitar 3 somar e multiplicar 3 valores
/*
- stdio.h: entrada e saída de dadoscl
- string.h: manipulação de strings
- stdlib.h: alocação de memória, conversão de tipos, etc.
- math.h: funções matemáticas
- time.h: funções de data e hora
- conio.h: comandos de entrada e saída diversas
- unistd.h: 
- sleep(): Faz com que o programa aguarde um determinado período de tempo (em segundos).
- usleep(): Faz com que o programa aguarde um determinado período de tempo (em microssegundos).
- fork(): Cria um novo processo.
- pipe(): Cria um pipe para comunicação entre processos.
- locale.h: Localidade do programa, definindo como os dados de texto e numéricos devem ser tratados.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <locale.h>

#define LIMITE 4

//Variáveis
int a, b, c = 0;


// Digitar numero e somar e multipicar 3 valores
void func_digitar_numero(){
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    getchar();

    printf("\nDigite o segundo numero: ");
    scanf("%d", &b);
    getchar();

    printf("\nDigite o terceiro numero: ");
    scanf("%d", &c);
    getchar();    

    printf("%d - %d - %d", a, b, c);
    getchar(); 

    printf("A soma dos tres numeros e: %d", a + b + c);
    printf("A multiplicacao dos tres numeros e: %d", a * b * c);
    getchar();
    return;
}

// argc será 4 (o nome do programa mais os 3 argumentos)
// argv será um array contendo: 
//int main(int argc, char const *argv[]){
int main(int argc, char const *argv[]){
    func_digitar_numero();

    return 0;
}