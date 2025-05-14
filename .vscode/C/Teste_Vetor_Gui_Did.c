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

#define MAX_ALUNOS 50 
#define MAX_GAVETAS 10

//Fábio 13/05/2025 - Teste em C Vetor Guia Didático Alunos numa turma
int func_vetor(){
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
    }

    // Lê as notas dos alunos
    for (int i = 0; i < tamanhoTurma; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        getchar();
        somaNotas += notas[i];

    }

    // Calcula a média da turma
    mediaTurma = somaNotas / tamanhoTurma;

    printf("Média da turma: %.2f\n", mediaTurma);
    getchar();

    return 0;
} 

//Fábio 13/05/2025 - Teste em C Vetor Correio Cartas
int func_vet_correio(){
    char gavetas[MAX_GAVETAS][4]; // "sim" ou "não"
    int gavetaNumero = 8;

    // Inicializa as gavetas como vazias
    for (int i = 0; i < MAX_GAVETAS; i++) {
        strcpy(gavetas[i], "não");
    }

    // Simula a inserção de cartas em algumas gavetas
    strcpy(gavetas[8], "sim"); // Gaveta 8 tem carta

    // Verifica se a gaveta 8 tem carta
    if (strcmp(gavetas[gavetaNumero - 1], "sim") == 0) {
        printf("Existe uma carta na gaveta %d\n", gavetaNumero);
    } else {
        printf("Não existe carta na gaveta %d\n", gavetaNumero);
    }

    return 0; 
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_vetor();
    func_vet_correio();
    return 0;
}
