// Fábio 06/05/25 - Código Teste Algoritmos
/*
- stdio.h: entrada e saída de dadoscl
- string.h: manipulação de strings
- stdlib.h: alocação de memória, conversão de tipos, etc.
- math.h: funções matemáticas
- time.h: funções de data e hora
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>

//Declarar da struct dados como variável global
typedef struct {
    int codigo;
    char nome[50];
    int idade;
    char sexo;
    float salario;
}
