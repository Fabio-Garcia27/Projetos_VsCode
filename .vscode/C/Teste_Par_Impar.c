//Fábio 13/05/2025 - Número Par ou Impar em C:
/*
Essa linha de código verifica se um número é par ou ímpar.

Aqui está como funciona:

- numero % 2: Calcula o resto da divisão do número por 2.
- == 0: Verifica se o resto é igual a 0.

Se o resto for 0, isso significa que o número é par. Caso contrário, o número é ímpar.

Por exemplo:

- Se numero for 4, numero % 2 será 0, então a condição será verdadeira e o número é par.
- Se numero for 3, numero % 2 será 1, então a condição será falsa e o número é ímpar.

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

int numero;

int func_par_impar(){
    printf("Digite um número: ");
    scanf("%d", &numero);
    getchar(); // Para consumir o caractere newline deixado pelo scanf

    if (numero % 2 == 0) {
        printf("%d é par\n", numero);
    } else {
        printf("%d é ímpar\n", numero);
    }
    printf("Pressione uma tecla para encerrar...");
    getchar(); // Adicione essa linha também, pois o scanf deixa um caractere no buffer
    return 0;
}    

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil)
    func_par_impar();
    return 0;
}
