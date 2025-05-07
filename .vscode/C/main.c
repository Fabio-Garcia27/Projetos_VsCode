// Fábio 07/05/25 - Código Teste Algoritmos C
/*
- stdio.h: entrada e saída de dadoscl
- string.h: manipulação de strings
- stdlib.h: alocação de memória, conversão de tipos, etc.
- math.h: funções matemáticas
- time.h: funções de data e hora
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>

// Declaração das variáveis usadas em todo o código
int num1, num2, num3, media;


// Fábio 07-05-25 - Soma e multiplicar
void calcular_media_C() {
    printf("Entre com o primeiro número: ");
    scanf("%i", &num1);
    printf("Entre com o segundo número: ");
    scanf("%i", &num2);
    printf("Entre com o terceiro número: ");
    scanf("%i", &num3);
    media = ((num1 + num2 + num3) / 3);
    printf("A média é: %d\n", media);
    getch(); // Pausa para ver o resultado
}

// É o ponto de entrada do programa, onde a execução começa quando o programa éiniciado
int main() {
    calcular_media_C();

    return 0;
}
