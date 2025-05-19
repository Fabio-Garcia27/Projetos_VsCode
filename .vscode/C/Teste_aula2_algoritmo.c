//Fábio 15/05/2025 - Teste em C Exercícios aula ao vivo 2
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
int x, y, n1 = 2, n2 = 3, n3, opc, i, num, calc=0, cod, qtde, matricula;
char nome [80];
float preco;

// Cria variáveis com base em um extrutura
typedef struct {
    int codigo;
    char nome[50];
    char cargo[50];
    float salario;
} Pessoa;

// Fábio 19/05/2025 - Função de Pessoas - Cargo e Salário
int func_pessoa() {
    Pessoa dados[5];
    //int i;

    // Leitura dos dados
    for (i = 0; i < 5; i++) {
        printf("Digite o código do funcionário %d: ", i + 1);
        scanf("%d", &dados[i].codigo);
        getchar(); // Consumir o caractere de nova linha

        printf("Digite o nome do funcionário %d: ", i + 1);
        fgets(dados[i].nome, sizeof(dados[i].nome), stdin);
        dados[i].nome[strcspn(dados[i].nome, "\n")] = 0; // Remover o caractere de nova linha

        printf("Digite o cargo do funcionário %d: ", i + 1);
        fgets(dados[i].cargo, sizeof(dados[i].cargo), stdin);
        dados[i].cargo[strcspn(dados[i].cargo, "\n")] = 0; // Remover o caractere de nova linha

        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf("%f", &dados[i].salario);
        getchar(); // Consumir o caractere de nova linha
    }

    // Alteração dos dados do funcionário 3
    dados[2].codigo = 8;
    strcpy(dados[2].nome, "Jose Paulo");
    strcpy(dados[2].cargo, "Programador");
    dados[2].salario = 1500.0;

    // Impressão dos dados
    for (i = 0; i < 5; i++) {
        printf("Código: %d\n", dados[i].codigo);
        printf("Nome: %s\n", dados[i].nome);
        printf("Cargo: %s\n", dados[i].cargo);
        printf("Salário: %.2f\n\n", dados[i].salario);
    }

    return 0;
}

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
        printf("O valor positivo calculado é: %d\n", calc);
        getchar();
    }   
    if (num < 0) {
        calc = num * 3;
        printf("O valor negativo calculado é: %d\n", calc);
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
    } 
    else {
           if (num > 0) {
               calc = num * 2;
               printf("O valor positivo calculado é: %d\n", calc);
               getchar();
           }   
           else { 
               calc = num * 3;
               printf("O valor negativo calculado é: %d\n", calc);
               getchar();
           }    
    }    

    printf("O valor original = %i e o valor calculado = %i\n", num, calc);
    getchar();

    return 0;
}

// Repitição
int func_repeticao() {
    printf("Quantos cadastro voce quer for: ");
    scanf("%i", &qtde);
    getchar();

    for (x = 1; x <= qtde; x++) {
         getchar();
         printf("\nEntre com o código do produto: ");
         scanf("%i", &cod);
         getchar();
 
         printf("Entre com o nome do produto: ");
         fgets(nome, sizeof(nome), stdin);
         nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha
         getchar();

         printf("Entre com o preço do produto: ");
         scanf("%f", &preco);
         getchar();
       
         printf("\n\nO código = %i, o nome = %s, e o preço = %0.2f", cod, nome, preco);
         getchar();
    }
    return 0;
}

// While
int func_while() {
    x = 1;
    float preco;
    printf("Quantos cadastro voce quer while: ");
    scanf("%i", &qtde);
    getchar();

    while (x <= qtde) {
         getchar();
         printf("\nEntre com o código do produto: ");
         scanf("%i", &cod);
         getchar();
 
         printf("Entre com o nome do produto: ");
         fgets(nome, sizeof(nome), stdin);
         nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha
         getchar();

         printf("Entre com o preço do produto: ");
         scanf("%f", &preco);
         getchar();
       
         printf("\n\nO codigo = %i, o nome = %s e o preco = %0.2f", cod, nome, preco);
         getchar();
         x++;
    }
    getchar;
    return 0;
}

// do-While
int func_do_while() {
    x = 1;
    int c;
    int qtde;

    printf("Quantos cadastro voce quer do-while: ");
    scanf("%i", &qtde);
    while ((c = getchar()) != '\n' && c != EOF); // Consumir todos os caracteres de nova linha
 
    do {
        printf("\nCadastro %d", x);

        printf("nEntre com o codigo: ");
        scanf("%i", &cod);
        while ((c = getchar()) != '\n' && c != EOF); // Consumir todos os caracteres de nova linha

        printf("Entre com o nome do produto: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha

        printf("Entre com o preco: ");
        scanf("%f", &preco);
        while ((c = getchar()) != '\n' && c != EOF); // Consumir todos os caracteres de nova linha

        printf("\n\nO codigo = %i, o nome = %s e o preco = %0.2f\n", cod, nome, preco);

        x++;
    } while (x <= qtde); 
  
    return 0;
}

// executar as funções
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_pessoa();
    func_case(2, 3);
    
    //Escolher qual tipo de exercício executar o Simples ou o Composto
    printf("\n1 - Exercício 1 Simples\n");
    printf("\n2 - Exercício 2 Composto\n");
    printf("\n3 - Sair\n");
    printf("Entre com um valor: ");
    scanf("%d", &num);
    getchar();

    printf("Você escolheu: %d\n", num);

    switch (num) {
        case 1:
            printf("\nEstrutura Simples\n");
            func_execicio_simples();
            break; // para execução da extrutura
        case 2:
            printf("\nEstrutura Composta\n");
            func_execicio_composta();
            break;
        case 3:
            printf("\nPrecione Enter para Encerrar...\n");
            break;
        default:
            printf("\nOpção inválida\n");
            break;
    }
    //
    //func_execicio_simples();
    //func_execicio_composta();
    func_repeticao();
    func_while();
    func_do_while();

    printf("\nPrecione Enter para Encerrar...\n");
    getche();
    return 0;
}