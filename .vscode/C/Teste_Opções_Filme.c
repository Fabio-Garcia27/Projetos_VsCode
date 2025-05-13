//Fábio 13/05/2025 Opções de filmes
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

// Definir o valor do ingresso como uma constante
#define VALOR_INGRESSO 12.50

// Função para exibir o menu de opções de filmes
void exibirMenu() {
    printf("Opções de filmes:\n");
    printf("1. Vingadores 4 – da Marvel\n");
    printf("2. Como Treinar o Seu Dragão 3\n");
    printf("3. Dumbo\n");
    printf("4. Shazam!\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8        
    int opcaoFilme;
    int quantidadeIngressos;

    // Exibir o menu de opções de filmes
    exibirMenu();

    // Solicitar a opção de filme ao usuário
    printf("Escolha a opção de filme (1-4): ");
    scanf("%d", &opcaoFilme);

    // Solicitar a quantidade de ingressos ao usuário
    printf("Quantidade de ingressos: ");
    scanf("%d", &quantidadeIngressos);

    // Calcular o valor total dos ingressos
    double valorTotal = VALOR_INGRESSO * quantidadeIngressos;

    // Exibir as opções escolhidas e o valor total
    printf("\nOpção de filme escolhida: ");
    switch (opcaoFilme) {
        case 1:
            printf("Vingadores 4 – da Marvel\n");
            break;
        case 2:
            printf("Como Treinar o Seu Dragão 3\n");
            break;
        case 3:
            printf("Dumbo\n");
            break;
        case 4:
            printf("Shazam!\n");
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }
    printf("Quantidade de ingressos: %d\n", quantidadeIngressos);
    printf("Valor total: R$ %.2f\n", valorTotal);
    getch(); // Pausa para ver o resultado
    printf("\n");

    return 0;
}

