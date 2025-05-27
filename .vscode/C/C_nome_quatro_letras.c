// Fábio 26/05/2025 - Receber nome e imprimir as 4 primeiras letras
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

#define LIMITE 4

//Variáveis
char nome[40];
char endereco[50];
char telefone[12];
int i;

// Listar as letras do nome até definição do tamanho LIMITE
void func_nome_letras(){
    printf("\nDigite o nome: ");
    fgets(nome, sizeof(nome), stdin);   // E também dessa sintaxe fgets busca o nome corretamente
    nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha
    for (i = 0; i < LIMITE; ++i){
        printf("%c", nome[i]);       
    }
    printf("\n");
    getchar();
}

// Listar dados
void func_dados_end(){
    printf("\nDigite o nome: ");
    fgets(nome, sizeof(nome), stdin);   // E também dessa sintaxe fgets busca o nome corretamente
    nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha

    printf("\nDigite o endereco: ");
    fgets(endereco, sizeof(endereco), stdin);   // E também dessa sintaxe fgets busca o nome corretamente
    endereco[strcspn(endereco, "\n")] = 0; // Remover o caractere de nova linha        

    printf("\nDigite o telefone: ");
    fgets(telefone, sizeof(telefone), stdin);   // E também dessa sintaxe fgets busca o nome corretamente
    telefone[strcspn(telefone, "\n")] = 0; // Remover o caractere de nova linha    

    printf("\n");
    printf("Nome: %s\nEndereco: %s\nTelefone: %s", nome, endereco, telefone);    
}

// argc será 4 (o nome do programa mais os 3 argumentos)
// argv será um array contendo: 
//int main(int argc, char const *argv[]){
int main(int argc, char const *argv[]){
    func_nome_letras();
    func_dados_end();
    getchar();
    return 0;
}