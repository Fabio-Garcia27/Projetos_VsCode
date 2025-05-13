//Fábio 13/05/2025 Tabuada - sucessor - três em três
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

// Função para calcular o antecessor e sucessor de um número
void calcularAntecessorSucessor(int numero) {
    int antecessor = numero - 1;
    int sucessor = numero + 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
}

// Função para mostrar a tabuada de multiplicação de um número
void mostrarTabuada(int numero) {
    printf("Tabuada de multiplicação de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    printf("Terminou a Tabuada de multiplicação\n");
    printf("Pressione Enter para continuar...\n");
    getch(); // Pausa para ver o resultado
    return;
}


// Função para mostrar os próximos três números com contagem de dois em dois
void mostrarProximosNumeros(int numero) {
    printf("Próximos três números com contagem de dois em dois:\n");
    for (int i = 1; i <= 3; i++) {
        printf("%d\n", numero + (i * 2));
    }
    printf("Terminou a contagem de dois em dois\n");
    printf("Pressione Enter para continuar...\n");
    getch(); // Pausa para ver o resultado
    return;
}

int main() {
    int numero;
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8      

    // Pedir ao usuário um número
    printf("Digite um número: ");
        if (scanf("%d", &numero) != 1) {
        printf("Valor inválido!\n");
        return 1;
    }

    // Calcular o antecessor e sucessor do número
    printf("Antecessor e sucessor de %d:\n", numero);
    calcularAntecessorSucessor(numero);

    // Mostrar a tabuada de multiplicação do número
    mostrarTabuada(numero);

    // Mostrar os próximos três números com contagem de dois em dois
    mostrarProximosNumeros(numero);

    return 0;
}
