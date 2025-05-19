// Fábio Modularização mostrar menor para maior
/*
- stdio.h: entrada e saÉda de dados
- string.h: manipulaÉÉo de strings
- stdlib.h: alocÉÉo de memria, conversÉo de tipos, etc.
- math.h: funÉÉes matemÉticas
- time.h: funÉÉes de data e hora
- conio.h: comandos de entrada e saÉda diversas
- unistd.h: 
- sleep(): Faz com que o programa aguarde um determinado perÉodo de tempo (em segundos).
- usleep(): Faz com que o programa aguarde um determinado perÉodo de tempo (em microssegundos).
- fork(): Cria um novo processo.
- pipe(): Cria um pipe para comunicaÉÉo entre processos.
- locale.h: Localidade do programa, definindo como os dados de texto e numÉricos devem ser tratados.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <locale.h>
#include <ctype.h>

// Declarar variáveis global
int i, j;
float aux;

#define TAMANHO_VETOR 4

void func_lerValores(float valores[]) {
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &valores[i]);
        getchar();
    }
}

void func_classificarValores(float valores[]) {
    for (i = 0; i < TAMANHO_VETOR; i++) {
        for (j = i + 1; j < TAMANHO_VETOR; j++) {
            if (valores[i] < valores[j]) {
                aux = valores[j];
                valores[j] = valores[i];
                valores[i] = aux;
            }
        }
        getchar();
    }
}

void func_mostrarValores(float valores[]) {
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%.2f\n", valores[i]);
        getchar();
    }
}

// executar as funções
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    float valores[TAMANHO_VETOR];

    func_lerValores(valores); // Lê os valores do usuário e armazena-os no vetor. 
    func_classificarValores(valores); // Classifica os valores em ordem decrescente usando o algoritmo de bolha.
    func_mostrarValores(valores); // Mostra os valores classificados.

    getche();
    return 0;
}




