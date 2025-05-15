//Fábio 15/05/2025 - Teste em C Guia Completo Aplicações Vetores - Medias notas de alunos
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

//Declarar variáveis
int contador = 0;
int n, temp;

#define MAX_CLIENTES 100

//#define NUM_ALUNOS 5
//#define NUM_NOTAS 4
//loat notas[NUM_ALUNOS][NUM_NOTAS];


void func_inverterVetoror(int vetor[], int tamanho) {
    int i, temp;
	for (i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - i - 1];
        vetor[tamanho - i - 1] = temp;
    }
}

void func_escreverVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int func_aplic_vetor() {
    int i;
    int codigosClientes[MAX_CLIENTES];
    printf("Digite o número de clientes: ");
    scanf("%d", &n);
    getchar();

    printf("Digite os códigos dos clientes:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &codigosClientes[i]);
    }

    printf("Vetor original: ");
    func_escreverVetor(codigosClientes, n);
    getchar();

    func_inverterVetoror(codigosClientes, n);
    getchar();

    printf("Vetor invertido: ");
    func_escreverVetor(codigosClientes, n);
    getchar();
}

#define NUM_ALUNOS 5
#define NUM_NOTAS 4
float notas[NUM_ALUNOS][NUM_NOTAS];
void func_lerNotas(float notas[NUM_ALUNOS][NUM_NOTAS]) {
     int i, j;
     for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d\n", i + 1);
        for (j = 0; j < NUM_NOTAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
    getchar();
}

void func_mostrarNotas(float notas[NUM_ALUNOS][NUM_NOTAS]) {
    int i, j;
    printf("Notas:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: ", i + 1);
        for (j = 0; j < NUM_NOTAS; j++) {
            printf("%.2f ", notas[i][j]);
        }
        printf("\n");
    }
    getchar();
}

void func_calcularMediaAvaliacoes(float notas[NUM_ALUNOS][NUM_NOTAS]) {
    int i, j;
    float somaNotasAvaliacao, mediaNotasAvaliacao;
    for (j = 0; j < NUM_NOTAS; j++) {
        somaNotasAvaliacao = 0;
        for (i = 0; i < NUM_ALUNOS; i++) {
            somaNotasAvaliacao += notas[i][j];
        }
        mediaNotasAvaliacao = somaNotasAvaliacao / NUM_ALUNOS;
        printf("Média da avaliação %d: %.2f\n", j + 1, mediaNotasAvaliacao);
    }
    getchar();
}

void func_calcularMediaAlunos(float notas[NUM_ALUNOS][NUM_NOTAS]) {
    int i, j;
    float mediaAluno, somaNotasAluno;
    for (i = 0; i < NUM_ALUNOS; i++) {
        somaNotasAluno = 0;
        for (j = 0; j < NUM_NOTAS; j++) {
            somaNotasAluno += notas[i][j];
        }
        mediaAluno = somaNotasAluno / NUM_NOTAS;
        printf("Média do aluno %d: %.2f\n", i + 1, mediaAluno);
    }
    getchar();
}

// Matriz linhas e colunas
#define LINHAS 5
#define COLUNAS 5
int matriz[LINHAS][COLUNAS];
int minMax;

void func_lerMatriz(int matriz[LINHAS][COLUNAS]) {
    int i, j;
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void func_encontrarMinMax(int matriz[LINHAS][COLUNAS], int *minMax) {
    int i, j, menorValor, linhaMenorValor, maiorValorLinha;
    
    // Encontrar o menor valor e sua linha
    menorValor = matriz[0][0];
    linhaMenorValor = 0;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
                linhaMenorValor = i;
            }
        }
    }
   
    // Encontrar o maior valor da linha do menor valor
    maiorValorLinha = matriz[linhaMenorValor][0];
    for (j = 0; j < COLUNAS; j++) {
        if (matriz[linhaMenorValor][j] > maiorValorLinha) {
            maiorValorLinha = matriz[linhaMenorValor][j];
        }
    }
    
    *minMax = maiorValorLinha;
}  

void func_escreverMatriz(int matriz[LINHAS][COLUNAS]) {
    int i, j;
    printf("Matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// executar as funções
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_aplic_vetor();

    func_lerNotas(notas);
    func_mostrarNotas(notas);
    printf("\nMédias das avaliações:\n");
    getchar();
    func_calcularMediaAvaliacoes(notas);
    printf("\nMédias dos alunos:\n");
    getchar();
    func_calcularMediaAlunos(notas);
    //system("pause"); // ou getchar();
    func_lerMatriz(matriz);
    func_encontrarMinMax(matriz, &minMax);
    func_escreverMatriz(matriz);
    printf("MINMAX: %d\n", minMax);
    getchar();
    printf("\nPrecione Enter para Encerrar...\n");
    getchar();
    return 0;
}