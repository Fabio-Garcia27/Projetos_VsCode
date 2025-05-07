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

//Declarar da struct dados como variável global
typedef struct {
    int id, idade, A, X;
    char nome[50], sexo, C, D[40];
    float salario, B;
} Funcionario; // Variável nome único, pode ser usado em vários definições, o novo tipo de dado criado com typedef e que representa a estrutura definida.
// Função sem retorno
void funcao_f() {
    Funcionario f1; 
    f1.id = 1;
    strcpy(f1.nome, "Maria"); // strcpy(): Copia uma string para outra.
    f1.salario = 6000.0;

    printf("ID: %d\n", f1.id);
    printf("Nome: %s\n", f1.nome);
    printf("Salário: %.2f\n", f1.salario);  
}
// Função sem retorno
void funcao_h() {
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
// Função sem retorno
void funcao_t() {
    puts("Entre com o 1 valor:");
    scanf("%i",&A);
    X = 2;
    printf("Entre com %i valor:" , X);
    scanf("%f", &B);
    puts("Entre com o 3 valor:");
    C = getche();
    X = 4;
    printf("Entre com o %d valor:", X);
    gets(D);
    printf("os valores informados foram: %i, %f, %c, %s", A, B, C, D);
    getch(); //para axecução na tela
}
// É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    funcao_f();
    funcao_h();
    funcao_t();

    return 0;
}





