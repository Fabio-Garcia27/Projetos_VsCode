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
int maior=0, menor=0, aux=0, i=0;
    
int func_maior_menor(void){
    do{
        system("cls"); //limpa a tela do programa
        //aux=0;
        //maior=0;
        //menor=0;

        printf("\n Digite um numero: ");
        scanf("%i", &aux);
        getchar();

        // primeira execução i=0
        if(i==0){
           maior=aux;
           menor=aux;  
           i++;
        // Se valor auxiliar for = -1 sair do programa   
        } else if (aux == -1){
            break;
        } else if(aux > maior){
            maior = aux;
        } else if (aux < menor){
            menor = aux;
        }
    }while(1);
    printf("\n\n Maior numero: %d \n Menor numero: %d", maior, menor);
}  


// É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_maior_menor();
    getchar();
    return 0;
 
}