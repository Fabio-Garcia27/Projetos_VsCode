//Fábio 13/05/2025 - Teste em C Enquete escolher melhor sistema operacional para Servidor
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

// Declaração de Variáveis
int i, n, qtd, numero, contador, resultado;
float valor, soma;

#define MAX_OPCOES 6 

int func_opcoes(){
    int votos[MAX_OPCOES] = {0}; // Inicializa o array de votos com zeros
    int total_votos = 0; // Total de votos
    int opcao; // Opção escolhida pelo usuário
    char *opcoes[] = {"Windows Server", "Unix", "Linux", "Netware", "Mac OS", "Outro"};

    printf("Enquete: Qual o melhor sistema operacional para uso em servidores?\n ");
    printf("1- Windows Server \n ");
    printf("2- Unix \n ");
    printf("3- Linux \n ");
    printf("4- Netware \n ");
    printf("5- Mac OS \n ");
    printf("6- Outro \n ");

    while (1) {
        printf("Digite a opção escolhida (0 para sair): ");
        scanf("%d", &opcao);
   
        if (opcao == 0) {
            //printf("Nao existe opcao 0..." );
            break; // Sai do loop se o usuário digitar 0
        }

        if (opcao >= 1 && opcao <= MAX_OPCOES) {
            votos[opcao - 1]++; // Incrementa o voto para a opção escolhida
            total_votos++; // Incrementa o total de votos
        } else {
            printf("Opção inválida. Por favor, digite uma opção entre 1 e 6.\n");
        }
    }

    printf("Resultados: \n");
    printf("\n");
    getch();

    for (int i = 0; i < MAX_OPCOES; i++) {
        float percentual = (float)votos[i] / total_votos * 100;
        printf("%s: %d votos (%.2f%%) \n", opcoes[i], votos[i], percentual);
        getchar();
    }

    return 0;
}  

int num_tabuada(){
    printf("Qual a tabuada de multiplicar você quer saber: ");
    scanf("%d", &numero);
    getch();
    contador = 1;
    while (contador <= 10) {
        resultado = numero * contador;
        printf("%d x %d: %d\n", numero, contador, resultado);
        contador++;
        getch();

    }
        return 0; 
}

int func_compras(){
    soma = 0;
    printf("Lista de Compras \n");
    for (i = 0; i < 6; i++) {
         printf("Digite a qtd do item %d: ", i + 1);
         scanf("%d",&qtd);
         getch();
         printf("Digite o valor por unidade do item %d: ", i + 1);
         scanf("%f",&valor);
         getch();
         getch();

         soma = (soma + (qtd * valor));
    }
        printf("Valor total da compra: R$ %.2f \n",soma);
        getch();
        return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    
    func_opcoes();
    num_tabuada();
    func_compras();
   
    return 0;
}
