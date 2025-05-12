// Fábio 06/05/25 - Resultado Vetor 
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
int x, i, y, z;
char s[50],nome[50]; 

                
// Fábio 12/05/25 - Resultado Vetor
int func_vetor(){
    x = 1;
    y = 6;
    while (x < y){
           printf("%d\n", x);
           x = x + 1;
    }
    printf("Terminou o Enquanto\n");
    printf("Pressione Enter para continuar...\n");
    getch(); // Pausa para ver o resultado
    return 0;
}
/*
int func_1_while(){
    x = 1;
    y = 5;
    while (x <= y){
           printf("%d\n", x);
           x++;
    }
    printf("Terminou o Enquanto\n");
    printf("Pressione Enter para continuar...\n");
    getch(); // Pausa para ver o resultado
    return 0;
}

int func_2_while(){
    x = 's';
    while ((x == 'S') || (x == 's')) {
           printf("Entre com um nome ");
           fflush(stdin); // Limpa o buffer de entrada
           gets(nome); // Lê a entrada do usuário
           printf("O nome é %s", nome);
           printf("\n");
           printf("Deseja novo cadastro ? ");
           fflush(stdin);
           x = getch();
           printf("\n");
           printf("Pressione Enter para encerrar...\n");   
           return 0;        
    }
}

// Fábio 12/05/25 - Resultado do e while Faca Enquanto
int func_do_while(){
    do {
        printf("Entre com um valor: ");
        scanf("%d", &z);
        getchar(); // Consumir o caractere de nova linha
        printf("%d\n", z * 3);
    } while (z != 0);
}

int func_1_do_while(){
    do {
        printf("Entre com um nome: ");
        fflush(stdin); // Limpa o buffer de entrada
        gets(nome); // Lê a entrada do usuário        
        printf("O nome é %s", nome);
        printf("Deseja novo cadastro?" );
        printf("\n");
        fflush(stdin); // Limpa o buffer de entrada
        gets(nome); // Lê a entrada do usuário   
        x = getch();
    } while ((x != 'n') && (x != 'N'));
}
*/
// Fábio 06/05/25 - É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_vetor();

    return 0;
}





