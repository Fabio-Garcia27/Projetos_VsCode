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
    int id, idade;
    char nome[50], sexo;
    float salario;
} Funcionario;

int main() {
    Funcionario f1;
    f1.id = 1;
    strcpy(f1.nome, "Maria");
    f1.salario = 6000.0;

    printf("ID: %d\n", f1.id);
    printf("Nome: %s\n", f1.nome);
    printf("Salário: %.2f\n", f1.salario);

    return 0;
}

