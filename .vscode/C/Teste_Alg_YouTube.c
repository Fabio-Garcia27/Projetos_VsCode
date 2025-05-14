//Fábio 13/05/2025 - Teste em C:
/*
- stdio.h: entrada e saída de dados
- string.h: manipulação de strings
- stdlib.h: alocção de memria, conversão de tipos, etc.
- math.h: funções matemáticas
- time.h: funções de data e hora
- conio.h: comandos de entrada e saáda diversas
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

int i, n;

int func_mod_exe(){
    system("color 47");

    for (i = 1; i <= 300; i++) {
         printf("Parabéns Meu Amor Adriana e Te Amo ");
        }
    return 0;
}    

int fatorial(int n) {
    if (n < 0) {
        printf("Erro: Fatorial não definido para números negativos\n");
        return -1; // ou outro valor de erro
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    
    func_mod_exe();
   
    printf("Escolha um númeiro inteiro: ");
    scanf("%d", &n);
   
    int resultado = fatorial(n);
    if (resultado != -1) {
        printf("O fatorial de %d é %d\n", n, resultado);
    }
    getchar();
    getchar();
    return 0;
}
