// Fábio 20/05/2025 Curso Programação em C
/*
Decimal para Binário
Binário para Decimal
Decimal para Octal
Octal para Decimal
Hexadecimal para Binário
Binário para hexadecimal

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

#include <unistd.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <time.h>

#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>
#include <conio.h>

//Variáveis global
int i;
int soma = 0;

// argc número inteiro passar parâmetro numérico
// argv passar parâmetros string nomes
int main(int argc, char* argv[]) {
    if (argc == 1){
        printf("Programa %s sem parâmetros\n", argv[0]);
    } else {
        //printf("Parâmetros do propgrama %s:\n", argv[0]);
        printf("Somando os parâmetros de %s:\n", argv[0]);
        for (i = 1; i < argc; i++)
             soma += atoi(argv[i]); // função atoi(); converte string para inteiro
             //printf("Parâmetro %d: %s\n", i, argv[i]);
             printf("Soma = %d: %s\n", soma);
    }
    //system("pause");
    getchar();
    return 0;
}