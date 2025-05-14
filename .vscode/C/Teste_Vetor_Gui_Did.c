//Fábio 13/05/2025 - Teste em C Vetor Guia Didático Alunos numa turma
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

// Declaração de Variáveis
int i;

//Fábio 13/05/2025 - Teste em C Vetor Guia Didático Alunos numa turma

int func_vetor(){
    #define MAX_ALUNOS 50 
    int tamanhoTurma;
    float notas[MAX_ALUNOS] = {0}; // Inicializa o array de votos com zeros
    float somaNotas = 0; // Total de votos
    float mediaTurma; // Opção escolhida pelo usuário
    
    printf("Digite o tamanho da turma (maximo %d alunos): ", MAX_ALUNOS);
    scanf("%d", &tamanhoTurma);
    getchar();

    // Verifica se o tamanho da turma é válido
    while (tamanhoTurma < 1 || tamanhoTurma > MAX_ALUNOS) {
        printf("Tamanho da turma inválido. Digite um valor entre 1 e %d: ", MAX_ALUNOS);
        scanf("%d", &tamanhoTurma);
        getchar();
        getchar();
    }

    // Lê as notas dos alunos
    for (i = 0; i < tamanhoTurma; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        getchar();
        somaNotas += notas[i];
    }

    // Calcula a média da turma
    mediaTurma = somaNotas / tamanhoTurma;

    printf("Média da turma: %.2f\n", mediaTurma);
    printf("Pressione uma tecla para continuar...");
    getchar(); 
    return 0;
} 

//Fábio 13/05/2025 - Teste em C Vetor Correio Cartas
int func_vet_correio(){
    #define MAX_GAVETAS 10
    char gavetas[MAX_GAVETAS][4]; // "sim" ou "não"
    int gavetaNumero;

    printf("Digite o número da gaveta que deseja verificar (1 a %d): ", MAX_GAVETAS);
    scanf("%d", &gavetaNumero);
    getchar();

    // Verifica se a gaveta é válida
    while (gavetaNumero < 1 || gavetaNumero > MAX_GAVETAS) {
           printf("Gaveta inválida. Digite um número entre 1 e %d: ", MAX_GAVETAS);
           scanf("%d", &gavetaNumero);
           getchar();
    }

    // Inicializa as gavetas como vazias
    for (i = 0; i < MAX_GAVETAS; i++) {
        strcpy(gavetas[i], "não");
    }

    // Simula a inserção de cartas em algumas gavetas
    strcpy(gavetas[gavetaNumero - 1], "sim"); // Gaveta 8 tem carta

    // Verifica se a gaveta 8 tem carta
    if (strcmp(gavetas[gavetaNumero - 1], "sim") == 0) {
        printf("Existe uma carta na gaveta %d\n", gavetaNumero);
    } else {
        printf("Não existe carta na gaveta %d\n", gavetaNumero);
    }

    printf("Pressione uma tecla para continuar...");
    getchar(); 
    return 0;
}

//Fábio 13/05/2025 - Teste em C Vetor Quantidade de voos
int func_voos(){
    #define MAX_VOOS 5
    int numeroVoo[MAX_VOOS];
    int duracaoVoo[MAX_VOOS];
    int quantidadeVoos;

    printf("Digite a quantidade de voos (entre 1 e %d): ", MAX_VOOS);
    scanf("%d", &quantidadeVoos);
    getchar();

    // Verifica se a quantidade de voos é válida
    while (quantidadeVoos < 1 || quantidadeVoos > MAX_VOOS) {
           printf("Quantidade de voos inválida. Digite um número entre 1 e %d: ", MAX_VOOS);
           scanf("%d", &quantidadeVoos);
           getchar();
    } 

    // Lê as informações dos voos
    for (i = 0; i < MAX_VOOS; i++) {
        printf("Digite o número do voo %d: ", i + 1);
        scanf("%d", &numeroVoo[i]);
        getchar();
        printf("Digite a duração do voo %d (em minutos): ", i + 1);
        scanf("%d", &duracaoVoo[i]);
        getchar();
    }

    // Imprime as informações dos voos
    printf("\nLista de Voos\n");
    for (i = 0; i < MAX_VOOS; i++) {
        printf("Voo %d: Número %d - Duração: %d minutos\n", i + 1, numeroVoo[i], duracaoVoo[i]);
    }
    printf("Pressione uma tecla para encerrar...");
    getchar(); 
    return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_vetor();
    func_vet_correio();
    func_voos();
    return 0;
}
