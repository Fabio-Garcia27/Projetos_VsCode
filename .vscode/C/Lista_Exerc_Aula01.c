// Fábio 06/05/25 - Código Teste Algoritmos
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
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>
#include <unistd.h>


// Declaração das variáveis usadas em todo o código
int A, X, num1, num2, num3, soma, mediacalc;
float B, item, valor, media, qlt, tipcomb, prelit, pretot;
char C;
char D[100];
                

// Fábio 09-05-25 - Resultado média de 3 valores
int calcular_media() {
    printf("Entre com o primeiro número: ");
    scanf("%i", &num1);
    printf("Entre com o segundo número: ");
    scanf("%i", &num2);
    printf("Entre com o terceiro número: ");
    scanf("%i", &num3);
    mediacalc = ((num1 + num2 + num3) / 3);
    printf("A média é: %d\n", mediacalc);
    getch(); // Pausa para ver o resultado
    printf("\n");
}  

// Fábio 09-05-25 - Identificar tipo do combustível, preço do litro e valor pago
int preco_comb() {
        printf("Tipos de Combustível:\n");
        printf("1. Gasolina\n");
        printf("2. Etanol\n");
        printf("3. Diesel\n");
        printf("4. Gás Natural\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%f", &tipcomb);
        printf("\n");

        printf("Entre com o valor do litro do combustível escolhido: ");
        scanf("%2.f", &prelit);
        printf("\n");

        printf("Entre com o valor total, que será abastecido em reais: ");
        scanf("%2.f", &pretot);
        printf("\n");

        printf("Total de litros de combustível foi no abastecimento: ");
        qlt = (pretot / prelit);
        scanf("%2f", &qlt);
        getch(); // Pausa para ver o resultado
}  

// É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    calcular_media();
    preco_comb();

    return 0;
}





