// Fábio 06/05/25 - Código Teste Algoritmos
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


// Declaração das variáveis usadas em todo o código
int x, i;
float qlt, prelit, pretot, z, l, a, c;
                

// Fábio 06/05/25 - Resultado méia de 3 valores
int func_for(){
    for (x = 1; x <= 5; x++){
         printf("x = %d \n", x);            
    }
    printf("Terminou o loop\n");
    printf("Pressione Enter para continuar...\n");
    getch(); // Pausa para ver o resultado
    return 0;
}

int func_1_for(){
    for (i = 1; i <= 100; i++){
         printf("%d \n", i);
         if (i==3){
             break;
         }
    }
    printf("Final..."); 
    printf("Pressione Enter para continuar...\n");
    getch(); // Pausa para ver o resultado
    return 0;    
}

// Fábio 06/05/25 - É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_for();
    func_1_for();


    return 0;
}





