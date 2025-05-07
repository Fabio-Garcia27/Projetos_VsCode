// Fábio 06/05/25 - Código Teste Algoritmos
/*
- stdio.h: entrada e saída de dadoscl
- string.h: manipulação de strings
- stdlib.h: alocação de memória, conversão de tipos, etc.
- math.h: funções matemáticas
- time.h: funções de data e hora
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>

int A, X;
float B, item, valor;
char C;
char D[100];

//Declarar da struct dados das variáveis 
typedef struct {
    int id, idade;
    char nome[50], sexo;
    float salario;
} 

Funcionario; // Variável nome único, pode ser usado em vários definições, o novo tipo de dado criado com typedef e que representa a estrutura definida.
// void Função sem retorno
void imprimir_funcionario() {
    Funcionario f1; 
    f1.id = 1;
    strcpy(f1.nome, "Maria"); // strcpy(): Copia uma string para outra.
    f1.salario = 6000.0;

    printf("ID: %d\n", f1.id);
    printf("Nome: %s\n", f1.nome);
    printf("Salário: %.2f\n", f1.salario);  
}

void imprimir_data_hora() {
    time_t agora = time(NULL);
    struct tm *data_hora = localtime(&agora);

    printf("Data e Hora: %02d-%02d-%04d %02d:%02d:%02d\n",
           //data_hora->tm_year + 1900, data_hora->tm_mon + 1, data_hora->tm_mday,
           data_hora->tm_mday, data_hora->tm_mon + 1, data_hora->tm_year + 1900,  
           data_hora->tm_hour, data_hora->tm_min, data_hora->tm_sec);

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%A, %d de %B de %Y %H:%M:%S", data_hora);
    printf("Data e Hora Formatadas: %s\n", buffer);
}

void ler_valores() {
    printf("Entre com o 1 valor (int): ");
    scanf("%d",&A);
     // Fábio 06-05-25 - Resolver na execução 2 cliente em diante não concatenar
    printf("\n");

    X = 2;
    printf("Entre com O %i valor (float):" , X);
    scanf("%f", &B);
    getchar(); // Consumir o newline deixado pelo scanf
     // Fábio 06-05-25 - Resolver na execução 2 cliente em diante não concatenar
    printf("\n");

    printf("Entre com o 3 valor (char): ");
    scanf("%c", &C);
     // Fábio 06-05-25 - Resolver na execução 2 cliente em diante não concatenar
    printf("\n");

    X = 4;
    printf("Entre com o %d valor (string): ", X);
    getchar(); // Consumir o newline deixado pelo scanf
    fgets(D, sizeof(D), stdin);
    D[strcspn(D, "\n")] = 0; // Remover o newline do final
     // Fábio 06-05-25 - Resolver na execução 2 cliente em diante não concatenar
    printf("\n");

    printf("Os valores informados foram: %d, %2.f, %c, %s\n", A, B, C, D);
    getchar(); 
     // Fábio 06-05-25 - Resolver na execução 2 cliente em diante não concatenar
    printf("\n");
}
void biblioteca_C() {
    item = 10.12304;
    valor = 44.87321;
    printf("%f", item);
    printf("%8.2f", item);
    printf("%8.2f", valor);
    getch(); // para execução na tela
}    
// É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    imprimir_funcionario();
    imprimir_data_hora();
    ler_valores();
    biblioteca_C();

    return 0;
}





