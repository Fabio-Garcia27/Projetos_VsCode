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

// Declarar variáveis global
float m = 0;
float med = 0;
float n1, n2, aux = 0;

// Função float calcula a média do valor s
float media (float s){
    m = s / 2;
    return (m);
}

// Função float calcula média de 2 números
float calculo (float x1, float x2){
    med = media (x1 + x2);
    return (med);
}

// Função do cálculo geral
int func_calculo(){
    printf("Valor 1: ");
    scanf("%f", &n1);
    getchar();

    printf("Valor 2: ");
    scanf("%f", &n2);
    getchar();

    aux = calculo(n1, n2);
    printf("A media final = %.2f", aux);
    getchar();
    return 0;
}

// executar as funções
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8

    func_calculo();

    return 0;
}





