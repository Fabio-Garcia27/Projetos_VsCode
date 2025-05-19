// Fábio Passagem Parâmetros por Valor
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

// Variáveis globla
int quantidadeBrigadeiros;

void func_calcularIngredientes(int quantidadeBrigadeiros) {
    // Definir as quantidades de ingredientes para 30 brigadeiros
    float leiteCondensado = 1.0;
    float manteiga = 1.0;
    float achocolatado = 4.0;

    // Calcular as quantidades de ingredientes para a quantidade de brigadeiros desejada
    float quantidadeLeiteCondensado = (leiteCondensado / 30) * quantidadeBrigadeiros;
    float quantidadeManteiga = (manteiga / 30) * quantidadeBrigadeiros;
    float quantidadeAchocolatado = (achocolatado / 30) * quantidadeBrigadeiros;

    // Mostrar as quantidades de ingredientes
    printf("Para fazer %d brigadeiros, você precisará de:\n", quantidadeBrigadeiros);
    printf("%.2f lata(s) de leite condensado\n", quantidadeLeiteCondensado);
    printf("%.2f colher(es) de sopa de manteiga\n", quantidadeManteiga);
    printf("%.2f colher(es) de sopa de achocolatado em pó\n", quantidadeAchocolatado);
    getchar();
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8

    printf("Digite a quantidade de brigadeiros que você deseja fazer: ");
    scanf("%d", &quantidadeBrigadeiros);
    getchar();

    func_calcularIngredientes(quantidadeBrigadeiros);
    getche();
    return 0;
}







