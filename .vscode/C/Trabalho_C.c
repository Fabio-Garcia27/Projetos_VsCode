// Fábio 30/05/25 - Código Dados dos Clientes 
/*
- stdio.h: comandos de entrada e saída principais
- string.h: manipulação de strings textos/frases/palavras
- stdlib.h: comandos de entrada e saída conversão
- math.h: funções matemáticas
- time.h: funções de data e hora
- conio.h: comandos de entrada e saída diversas
*/
#include <stdio.h>
#include <string.h>

// Fábio 30/05/25 - Declaração da struct dados como variável global
typedef struct {
    int codigo;
    char nome[50];
    int idade;
    char sexo;
    float salario;
} dados;

dados cliente[5];
// Função para imprimir os dados dos clientes
// Fábio 30/05/25 - Imprimir os dados dos cliente em log
void imprimeDados(dados *cliente) {
    // Fábio 30/05/25 - Imprimir os dados dos cliente em log    
    FILE *log = fopen("log/log.txt", "w");  
    if (log != NULL) {   
    for (int i = 0; i < 5; i++) {
        fprintf(log, "Código: %d\n", cliente[i].codigo);
        fprintf(log, "Nome: %s\n", cliente[i].nome);
        fprintf(log, "Idade: %d\n", cliente[i].idade);
        fprintf(log, "Sexo: %c\n", cliente[i].sexo);
        fprintf(log, "Salário: %.2f\n\n", cliente[i].salario);
        }
         fclose(log);
    }    
}
/*
// Fábio 30/05/25 - Função para imprimir os dados dos clientes
void imprimeDados(dados *cliente) {
    for (int i = 0; i < 5; i++) {
        printf("Código: %d\n", cliente[i].codigo);
        printf("Nome: %s\n", cliente[i].nome);
        printf("Idade: %d\n", cliente[i].idade);
        printf("Sexo: %c\n", cliente[i].sexo);
        printf("Salário: %.2f\n\n", cliente[i].salario);
    }
}
*/

// Fábio 30/05/25 - Função para calcular a somatória de idade dos clientes
int calculaSomatoriaIdade(dados *cliente) {
    int somatoriaIdade = 0;
    for (int i = 0; i < 5; i++) {
        somatoriaIdade += cliente[i].idade;
    }
    return somatoriaIdade;
}

// Fábio 30/05/25 - Função para calcular a somatória do salário dos clientes
int calculaSomatoriaSalario(dados *cliente) {
    int somatoriaSalario = 0;
    for (int i = 0; i < 5; i++) {
        somatoriaSalario += cliente[i].salario;
    }
    return somatoriaSalario;
}

int main() {
    // Fábio 30/05/25 - Entrada de dados para os 5 clientes
    for (int i = 0; i < 5; i++) {
        printf("Digite o código do cliente %d: ", i + 1);
        scanf("%d", &cliente[i].codigo);
        printf("Digite o nome do cliente %d: ", i + 1);
        scanf("%s", cliente[i].nome);
        printf("Digite a idade do cliente %d: ", i + 1);
        scanf("%d", &cliente[i].idade);
        printf("Digite o sexo do cliente %d (M/F): ", i + 1);
        scanf(" %c", &cliente[i].sexo);
        printf("Digite o salário do cliente e usar o ponto %d: ", i + 1);
        scanf("%f", &cliente[i].salario);
        // Fábio 24-04-25 - Resolver na execução 2 cliente em diante não concatenar
        getchar(); // Fábio 24-04-25 - consumir o caractere de nova linha
        printf("\n");
    }

    // Fábio 30/05/25 - Chamada da função para imprimir os dados dos clientes
    printf("Dados dos clientes:\n");
    imprimeDados(cliente);

    // Fábio 30/05/25 - Chamada da função para calcular a somatória de idade dos clientes
    // Fábio 30/05/25 - Imprimir os dados dos cliente idade em log    
    FILE *log_idade = fopen("log/log_med_idade.txt", "w");  
        if (log_idade != NULL) {  
            int somatoriaIdade = calculaSomatoriaIdade(cliente);
            float mediaIdade = (float)somatoriaIdade / 5;
            fprintf(log_idade, "Média de idade dos clientes: %.2f\n", mediaIdade);
            fclose(log_idade);
        }

    // Fábio 30/05/25 - Chamada da função para calcular a somatória do salários dos clientes
    // Fábio 30/05/25 - Imprimir os dados dos cliente salário em log    
    FILE *log_salario = fopen("log/log_med_salario.txt", "w");  
        if (log_salario != NULL) {  
            int somatoriaSalario = calculaSomatoriaSalario(cliente);
            float mediaSalario = (float)somatoriaSalario / 5;
            fprintf(log_salario, "Média de salários dos clientes: %.2f\n", mediaSalario);
            fclose(log_salario);
        }        
    /*
    int somatoriaIdade = calculaSomatoriaIdade(cliente);
    float mediaIdade = (float)somatoriaIdade / 5;
    printf("Média de idade dos clientes: %.2f\n", mediaIdade);
    */

    return 0;
}
