// Fábio 21/05/25 - Código Maior ou Menor Valor
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
int soma=0, valor=0;
    
int func_par_impar(void){
    do{
        system("cls"); // limpar tela em cada passada do laço
        printf("\n Digite um valor diferente de 0: ");
        scanf("%d", &valor);
        getchar();

        // primeira execução i=0
        // Saber se o valor é par ou ímpar:- 0 é par e se for 1 é ímpar
        if(valor%2 == 0){
            soma += valor;
        } 
    }while(valor != 0);
    printf("\n A soma dos numeros pares e: %d", soma);
}  

// É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_par_impar();
    getchar();
    return 0;
}