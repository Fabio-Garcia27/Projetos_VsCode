// Fábio 21/05/25 - Código Calculadora
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

float x=0, y=0, resultado=0;
int op=0;
    
int func_do(void){
    do{
        printf("\n\t1 - Soma\n\t2 - Subtração\n\t3 - Multiplicação\n\t4 - Divisão");
        scanf("%i", &op);
        getchar();

        printf("\nDigite o primeiro numero: ");
        scanf("%f", &x);
        getchar();

        printf("\nDigite o segundo numero: ");
        scanf("%f", &y);
        getchar();

        switch (op){
        case 1:
            resultado = x + y;
            break;
        case 2:
            resultado = x - y;
            break;
        case 3:
            resultado = x * y;
            break;
        case 4:
            resultado = x / y;   
            break;        
        default:
            printf("\nDigite uma opcao valida\n");
            break;
        }
        printf("\n\t O resultado e: %0.2f", resultado);
        printf("\n Digite 1 para continuar: ");
        scanf("%i", &op);
        getchar();
    }while(op == 1);
}  


// É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_do();
    getchar();
    return 0;
 
}