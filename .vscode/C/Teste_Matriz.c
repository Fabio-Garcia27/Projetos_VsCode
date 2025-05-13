// Fábio 06/05/25 - Resultado Vetor 
/*
- stdio.h: entrada e saída de dados
- string.h: manipulação de strings
- stdlib.h: alocção de memria, conversão de tipos, etc.
- math.h: funções matemáticas
- time.h: funções de data e hora
- conio.h: comandos de entrada e saáda diversas
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

// Declaração das variáveis usadas em todo o código
int mat1[2][5], mat2[7][5];
int soma = 0, m, d, l, c, somar;


                
// Fábio 12/05/25 - Resultado Matriz, posição do matriz começa na posição zero e soma total de todas as matrizes
int func_matriz() {
    for (m = 0; m <= 6; m++) {
         for (d = 0; d <= 4; d++){
              printf("Digite o valor na Matríz 2 da linha %d e coluna %d: ", m, d);
              scanf("%d", &mat2[m][d]); 
              soma = soma + mat2[m][d];
         }
    printf("%d", soma);
    printf("\n");
    printf("Pressione Enter para encerrar...\n");
    getchar(); // Leia o caractere de nova linha
    getchar(); // Pause para ver o resultado
    return 0;
    }
}   

int func_matriz_1() {
    for (c = 0; c <= 4; c++) {
         for (l = 0; l <= 1; l++){
              printf("Digite o valor na Matriz 1 da coluna %d e linha %d: ", c, l);
              scanf("%d", &mat1[c][l]); 
              somar = somar + mat1[c][l];
         }
    printf("%d", somar);
    printf("\n");
    printf("Pressione Enter para encerrar...\n");
    getchar(); // Leia o caractere de nova linha
    getchar(); // Pause para ver o resultado
    return 0;
    }
}

// Fábio 06/05/25 - É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_matriz();
    func_matriz_1();

    return 0;
}





