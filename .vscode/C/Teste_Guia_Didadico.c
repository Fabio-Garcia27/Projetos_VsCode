//Fábio 15/05/2025 - Teste em C Guia Completo Aplicações Vetores
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
int n, i, temp;

#define MAX_CLIENTES 100

void func_inverterVetoror(int vetor[], int tamanho) {
	for (i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - i - 1];
        vetor[tamanho - i - 1] = temp;
    }
}

void func_escreverVetor(int vetor[], int tamanho) {
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int func_aplic_vetor() {
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

    return 0;

}


// executar as funções
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para PortuguÉs (Brasil) UTF-8
    func_aplic_vetor();
    // ... seu código aqui ... Descobrir onde está o erro que não abre o programa
    //system("pause"); // ou getchar();
    //return 0;
	return 0;
}