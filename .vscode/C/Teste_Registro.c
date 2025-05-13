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

//Declarar da struct dados das variáveis 
struct Banco {
    int num;
    float saldo;
    char titular[80];
} conta[3];
//conta; // [3] várias linhas ou apena conta uma linha apenas

struct Cliente {
    int cod, idade;
    float sal;
    char nome[80], ender[100];
} cli[10];

    int i;
               
// Fábio 12/05/25 - Resultado Vetor, posição do vetor começa na posição zero e soma total de todos vetores
int func_registro() {
    conta[0].num = 4;
    conta[0].saldo = 90.00;
    strcpy(conta[0].titular, "Maria");
    conta[1].num = 7;
    conta[1].saldo = 38.00;
    strcpy(conta[1].titular, "José");
    conta[2].num = 9;
    conta[2].saldo = 55.00;
    strcpy(conta[2].titular, "Manoel");

    for (i = 0; i <= 2; i++) {
        printf("Número: %d\n", conta[i].num);
        printf("Saldo: %f\n", conta[i].saldo);
        printf("Titular: %s\n", conta[i].titular);
    }
    printf("Pressione Enter para encerrar...\n");
    getchar(); // Leia o caractere de nova linha
    getchar(); // Pause para ver o resultado
    return 0;
}

// Fábio 12/05/25 - Resultado Vetor, posição do vetor começa na posição zero e soma total de todos vetores
int func_1_registro() {
    for (i = 0; i <= 9; i++) {
        printf("Digite o código: ");
        scanf("%d", &cli[i].cod);
        getchar(); // Leia o caractere de nova linha
        printf("\n"); 
        printf("Digite a idade: ");
        scanf("%d", &cli[i].idade);
        getchar(); // Leia o caractere de nova linha
        printf("\n");
        printf("Digite o nome: ");
        fgets(cli[i].nome, sizeof(cli[i].nome), stdin);
        cli[i].nome[strcspn(cli[i].nome, "\n")] = 0; // Remova o caractere de nova linha
        printf("\n");
        printf("Digite o endereço: ");
        fgets(cli[i].ender, sizeof(cli[i].ender), stdin);
        cli[i].ender[strcspn(cli[i].ender, "\n")] = 0; // Remova o caractere de nova linha
        printf("\n");
        printf("Digite o salário: ");
        scanf("%f", &cli[i].sal);
        getchar(); // Leia o caractere de nova linha
        printf("\n"); 

        // Imprimir os dados lidos
        printf("Código: %d\n", cli[i].cod);
        printf("Idade: %d\n", cli[i].idade);
        printf("Nome: %s\n", cli[i].nome);
        printf("Endereço: %s\n", cli[i].ender);
        printf("Salário: %.2f\n", cli[i].sal);
        getchar(); // Leia o caractere de nova linha
        getchar(); // Limpar o cache e o cursor parar na segunda passada no campo Digite o código
        printf("\n");
    
    }
    printf("Pressione Enter para encerrar...\n");
    getchar(); // Pause para ver o resultado
    return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    func_registro();
    func_1_registro();
    return 0;
}





