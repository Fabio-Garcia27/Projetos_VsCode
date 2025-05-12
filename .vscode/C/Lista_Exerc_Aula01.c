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
int num1, num2, num3, mediacalc, opcao;
float qlt, prelit, pretot, z, l, a, c;
                

// Fábio 06/05/25 - Resultado méia de 3 valores
int calcular_media() {
    printf("Entre com o primeiro número: ");
    scanf("%i", &num1);
    printf("Entre com o segundo número: ");
    scanf("%i", &num2);
    printf("Entre com o terceiro número: ");
    scanf("%i", &num3);
    mediacalc = ((num1 + num2 + num3) / 3);
    printf("A média: %d\n00E1", mediacalc);
    getch(); // Pausa para ver o resultado
    printf("\n");
    return 0;    
}  

// Fábio 06/05/25 - Identificar tipo do combustível, preço do litro e valor pago
int preco_comb() {
        printf("Tipos de Combustível:\n");
        printf("1. Gasolina\n");
        printf("2. Etanol\n");
        printf("3. Diesel\n");
        printf("4. Gás Natural\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        if (opcao < 1 || opcao > 5) {
            printf("Opção inválida:\n");
            return 1;
        }
        printf("\n");

        printf("Entre com o valor do litro do combustível escolhido: ");
        scanf("%f", &prelit);
        printf("\n");
    
        printf("Entre com o valor total, que será abastecido em reais: ");
        scanf("%f", &pretot);
        printf("\n");

        qlt = pretot / prelit;
        printf("Total de litros de combustível foi no abastecimento: %.2f\n", qlt);
        getch(); // Pausa para ver o resultado
        printf("\n");
        return 0;        
}  

// Fábio 06/05/25 - Encontrar valor de Z na formula
int calcular_formula() {
    printf("Entre com o primeiro número L: ");
    scanf("%f", &l);
    printf("Entre com o segundo número A: ");
    scanf("%f", &a);
    printf("Entre com o terceiro número C: ");
    scanf("%f", &c);
    if (c != 0){
        z = ((l + a) * 2) / c;
         printf("O valor de Z: %f\n", z);
    } else {
       printf("Erro: Não pode ser zero!\n");
    }
    
    getch(); // Pausa para ver o resultado
    printf("\n");
    return 0;    
}  

// Fábio 06/05/25 - É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    calcular_media();
    preco_comb();
    calcular_formula();

    return 0;
}





