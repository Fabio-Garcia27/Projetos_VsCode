//Fábio 15/05/2025 - Teste em C Guia Completo Aplicações Vetores - Medias notas de alunos
//Estrutura de Dados Homogênio Tipo Matriz
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

//Declarar variáveis
int n1 = 2, n2 = 3, n3, opc, i, num, calc=0;

void func_case(int n1, int n2) {
    printf("Entre com valor 1 ou 2: ");
    scanf("%i", &opc);
    getchar(); // Consumir o caractere de nova linha

    switch(opc) {
        case 1:
            n3 = n1 + n2;
            break;
        case 2:
            n3 = n1 - n2; 
            break;
        default:
            n3 = n1 * n2;
            break;
    }

    printf("O resultado é: %i\n", n3);
    getchar();
}

int func_execicio_simples() {
    calc = 0; // ou algum outro valor que faça sentido para você
    printf("Entre com valor qualquer: ");
    scanf("%i", &num);
    getchar();

    if (num == 0) {
        printf("Valor neutro\n");
    }
    if (num > 0) {
        calc = num * 2;
        printf("O valor calculado é: %d\n", calc);
        getchar();
    }   
    if (num < 0) {
        calc = num * 3;
        printf("O valor calculado é: %d\n", calc);
        getchar();
    }

    printf("O valor original = %i e o valor calculado = %i\n", num, calc);
    getchar();

    return 0;
}

int func_execicio_composta() {
    calc = 0; // ou algum outro valor que faça sentido para você
    printf("Entre com valor qualquer: ");
    scanf("%i", &num);
    getchar();

    if (num == 0) {
        printf("Valor neutro\n");
    } else if (num > 0) {
        calc = num * 2;
        printf("O valor calculado é: %d\n", calc);
        getchar();
    } else {
        calc = num * 3;
        printf("O valor calculado é: %d\n", calc);
        getchar();
    }

    printf("O valor original = %i e o valor calculado = %i\n", num, calc);
    getchar();

    return 0;
}



// executar as funções
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_case(2, 3);
    func_execicio_simples();
    func_execicio_composta();

    printf("\nPrecione Enter para Encerrar...\n");
    getche();
    return 0;
}