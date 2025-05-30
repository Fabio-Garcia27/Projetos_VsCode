// Fábio 29/05/2025 - Exercício Aula 4
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
- ctype.h:manipulação de caracteres.
- isalpha(): verifica se um caractere é uma letra.
- isdigit(): verifica se um caractere é um dígito.
- isalnum(): verifica se um caractere é alfanumérico (letra ou dígito).
- isspace(): verifica se um caractere é um espaço em branco.
- tolower(): converte um caractere para minúsculo.
- toupper(): converte um caractere para maiúsculo.
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

// Declarar variáveis 
float m = 0;
float med = 0;
float n1, n2, aux = 0;
float soma = 0, media_idade = 0;
int x;
int cont_cad = 2;
int y = 0;
int cont = 0;

// Variável global
struct cliente {
    int cod, idade;
    char nome[50];
}; 
struct cliente cli[2];

// Função cadastro
int func_cadastro(){
    for (x = 0; x < cont_cad; x++){
        printf("\n\nEntre com o codigo: ");
        scanf("%i", &cli[x].cod);
        getchar();

        printf("\nEntre com o nome: ");
        fgets(cli[x].nome, sizeof(cli[x].nome), stdin);
        cli[x].nome[strcspn(cli[x].nome, "\n")] = 0; // Remover o caractere de nova linha   

        printf("\nEntre com a idade: ");
        scanf("%i", &cli[x].idade);
        getchar();
    }
    return 0;
}

// Função relatório
int func_relatorio(){
    while (y < cont_cad){
        printf("\n\nCodigo: %i", cli[y].cod);
        printf("\nNome: %s", cli[y].nome);
        printf("\nIdade: %i", cli[y].idade);
        getchar();
        y++;
    }
}

// Função media da idade
int func_media_idade(){
    while (cont < 2){
        soma += cli[cont].idade;
        getchar();
        cont++;     
    }
    return (soma / 2);
}

// Função do cálculo geral
int func_calculo(){
    int opcao;
    float retorno_da_media;
    do {
        printf("\n\n");
        puts("Menu");
        puts("1. Cadastro");
        puts("2. Relatorio");
        puts("3. Media de idade");
        puts("4. Sair");
        printf("\nEscolha uma opcao: ");
        if (scanf("%i", &opcao) != 1) {
            puts("Entrada inválida.");
            // Limpar o buffer de entrada
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }
        switch (opcao){
         case 1: 
                func_cadastro();
                break;
         case 2: 
               func_relatorio();
                break;
         case 3: 
               retorno_da_media = func_media_idade();
               printf("Media = %f", retorno_da_media);
               break;
         case 4:
               puts ("Fim de execucao...");
               break;
         default: 
               puts ("Valor invalido...");
              break;
        }
    } while (opcao != 4);
    return 0;
}
     
// executar as funções
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8

    func_calculo(); // Função do cálculo geral

    return 0;
}





