// Fábio Variável COR
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

// Fazer funcionar corretamente a função sleep
#ifdef _WIN32
#include <windows.h>
#define sleep(x) Sleep(x * 5000)
#endif

// Variáveis global
int cor = 1;

void func_mostrarCor(int cor) {
    switch (cor) {
        case 1:
            printf("Vermelho\n");
            break;
        case 2:
            printf("Verde\n");
            break;
        case 3:
            printf("Amarelo\n");
            break;
    }
}

void func_mudarCor() {
    cor = (cor % 3) + 1;
}

int func_while() {
    while (1) {
        func_mostrarCor(cor);
        if (cor == 1) { // Vermelho
            sleep(2); // Aguarda 2 segundos
        } else if (cor == 2) { // Verde
            sleep(3); // Aguarda 3 segundos
        } else if (cor == 3) { // Amarelo
            sleep(1); // Aguarda 1 segundo
        }
        func_mudarCor();
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_while();

    getche();
    return 0;
}


