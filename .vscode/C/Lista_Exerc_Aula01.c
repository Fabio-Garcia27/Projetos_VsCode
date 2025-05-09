// F�bio 06/05/25 - C�digo Teste Algoritmos
/*
- stdio.h: entrada e sa�da de dados
- string.h: manipula��o de strings
- stdlib.h: aloca��o de mem�ria, convers�o de tipos, etc.
- math.h: fun��es matem�ticas
- time.h: fun��es de data e hora
- conio.h: comandos de entrada e sa�da diversas
- unistd.h: 
- sleep(): Faz com que o programa aguarde um determinado per�odo de tempo (em segundos).
- usleep(): Faz com que o programa aguarde um determinado per�odo de tempo (em microssegundos).
- fork(): Cria um novo processo.
- pipe(): Cria um pipe para comunica��o entre processos.
- locale.h: Localidade do programa, definindo como os dados de texto e num�ricos devem ser tratados.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <locale.h>


// Declara��o das vari�veis usadas em todo o c�digo
int num1, num2, num3, mediacalc, opcao;
float qlt, prelit, pretot, z, l, a, c;
                

// F�bio 09-05-25 - Resultado m�ia de 3 valores
int calcular_media() {
    printf("Entre com o primeiro n�mero: ");
    scanf("%i", &num1);
    printf("Entre com o segundo n�mero: ");
    scanf("%i", &num2);
    printf("Entre com o terceiro n�mero: ");
    scanf("%i", &num3);
    mediacalc = ((num1 + num2 + num3) / 3);
    printf("A m�dia: %d\n00E1", mediacalc);
    getch(); // Pausa para ver o resultado
    printf("\n");
    return 0;    
}  

// F�bio 09-05-25 - Identificar tipo do combust�vel, pre�o do litro e valor pago
int preco_comb() {
        printf("Tipos de Combust�vel:\n");
        printf("1. Gasolina\n");
        printf("2. Etanol\n");
        printf("3. Diesel\n");
        printf("4. G�s Natural\n");
        printf("5. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        if (opcao < 1 || opcao > 5) {
            printf("Op��o inv�lida:\n");
            return 1;
        }
        printf("\n");

        printf("Entre com o valor do litro do combust�vel escolhido: ");
        scanf("%f", &prelit);
        printf("\n");
    
        printf("Entre com o valor total, que ser� abastecido em reais: ");
        scanf("%f", &pretot);
        printf("\n");

        qlt = pretot / prelit;
        printf("Total de litros de combust�vel foi no abastecimento: %.2f\n", qlt);
        getch(); // Pausa para ver o resultado
        printf("\n");
        return 0;        
}  

// F�bio 09-05-25 - Encontrar valor de Z na formula
int calcular_formula() {
    printf("Entre com o primeiro n�mero L: ");
    scanf("%f", &l);
    printf("Entre com o segundo n�mero A: ");
    scanf("%f", &a);
    printf("Entre com o terceiro n�mero C: ");
    scanf("%f", &c);
    if (c != 0){
        z = ((l + a) * 2) / c;
         printf("O valor de Z: %f\n", z);
    } else {
       printf("Erro: N�o pode ser zero!\n");
    }
    
    getch(); // Pausa para ver o resultado
    printf("\n");
    return 0;    
}  

// F�bio 09-05-25 - � o ponto de entrada do programa, onde a execu��o come�a quando o programa � iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Portugu�s (Brasil) UTF-8
    calcular_media();
    preco_comb();
    calcular_formula();

    return 0;
}





