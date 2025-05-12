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
int vet[8], i, soma = 0, x;
char s[50],nome[50]; 

                
// Fábio 12/05/25 - Resultado Vetor, posição do vetor começa na posição zero e soma total de todos vetores
int func_vetor() {
    for (i = 0; i <= 7; i++) {
        printf("Entre com um valor: ");
        scanf("%d", &vet[i]); // Leia o valor inteiro
        soma = soma + vet[i]; // Some o valor ao total
    }
    printf("A soma do vetor: %d\n", soma);
    printf("Pressione Enter para encerrar...\n");
    getchar(); // Leia o caractere de nova linha
    getchar(); // Pause para ver o resultado
    return 0;
}

// Fábio 12/05/25 - Resultado Vetor, posição do vetor começa na posição zero e a soma vai estar na posição 8
int func_1_vetor() {
    vet[8] = 0;
    for (i = 0; i <= 8; i++) {
        printf("Entre com um valor: ");
        scanf("%d", &vet[i]); // Leia o valor inteiro
    }
    printf("A soma do vetor: %d\n", vet[8]);
    printf("Pressione Enter para encerrar...\n");
    getchar(); // Leia o caractere de nova linha
    getchar(); // Pause para ver o resultado
    return 0;
}

// Fábio 06/05/25 - É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_vetor();
    func_1_vetor();

    return 0;
}





