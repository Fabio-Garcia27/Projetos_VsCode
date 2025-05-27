// Fábio 26/05/2025 - Imprimir posição ímpar
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

//Variáveis
char nome[50];
int i, tamanho;

// Imprimir posição ímpar
void func_imprimir_impar(){
    printf("Digite um nome: \n");
    fgets(nome, sizeof(nome), stdin); 
    nome[strcspn(nome, "\n")] = 0; 
    int tamanho = strlen(nome);
    for (i = 0; i < tamanho; ++i){
        if (i % 2 != 0){
            printf("%c", nome[i]);
        }
    }
    printf("\n");
    getchar();
}

// argc será 4 (o nome do programa mais os 3 argumentos)
// argv será um array contendo: 
//int main(int argc, char const *argv[]){
int main(int argc, char const *argv[]){
    func_imprimir_impar();

    return 0;
}