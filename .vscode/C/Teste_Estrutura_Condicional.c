// Fábio 07/05/25 - Código Teste Algoritmos Estrutura Condicional Simples - Composta - Multriplas
/*
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
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>
#include <unistd.h>

// Declaração das variáveis usadas em todo o código
int x, dia, opc, n1 = 2, n2 = 3, n3;
float b;
char c;
/*                
//Declarar da struct dados das variáveis 
typedef struct {
    int id, idade;
    char nome[50], sexo;
    float salario;
} 
*/    
// Fábio 07/05/25 - Estrutura Condicional Simples e Composta
int comparacao() {
    x = 3;
        if (x == 2) {
            printf("X é igual a 2");
            // Usar getchar() quando precisar parar a informação na tela
            getchar();
        } else if (x > 2) {
            printf("X é maior que 2");
            getchar();
        } else {
            printf("X é menor que 2");
            getchar();
        }
}
// Fábio 07/05/25 - Estrutura Condicional Mulipla Escolha 
int comparacao_m() {

    printf("Digite o número do dia da semana (1-7): ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Terça-feira\n");
            break;
        case 3:
            printf("Quarta-feira\n");
            break;
        case 4:
            printf("Quinta-feira\n");
            break;
        case 5:
            printf("Sexta-feira\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Dia inválido\n");
            break;            
    }
      printf("A tela fechará em 5 segundos...\n");
      sleep(5); // Aguarde 5 segundos
    //printf("Pressione uma tecla para continuar...");
    //getchar(); // Adicione essa linha
    //getchar(); // Adicione essa linha também, pois o scanf deixa um caractere no buffer
}

int opc_c(){
    printf("Entre com o valor 1 ou 2");
    scanf("%i", &opc);

    switch (opc) {
        case 1: 
            {n3 = n1 + n2;
             break;}
        case 2:
            {n3 = n1 - n2;
             break;}        
        default:
            printf("Opção inválida\n");
            return 1;
    }
    printf("O resultado é: %i", n3);
    getchar();
    getchar(); // Para pausar a tela
}

// É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    comparacao();
    comparacao_m();
    opc_c();
    return 0;
    //imprimir_funcionario();
    //imprimir_data_hora();
    //ler_valores();
    //biblioteca_C();
    //soma_multi_C();
    //calcular_media_C();
}




/*
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
// Fábio 07-05-25 - Uso da biblioteca, gerar número inteiro e defino pela "%f" ou %8.2f
void biblioteca_C() {
    item = 10.12304;
    valor = 44.87321;
    printf("Valor sem formatação: %f", item);
    // Fábio 06-05-25 - Resolver na execução 2 cliente em diante não concatenar
    printf("\n");
    printf("Valor formatado: %8.2f", item);
    printf("\n");
    printf("Outro valor formatado: %8.2f", valor);
    getch(); // Pausa para ver o resultado
    printf("\n");
}    
// Fábio 07-05-25 - Soma e multiplicar
void soma_multi_C() {
    printf("\n");
    printf("Entre com o primeiro número: ");
    scanf("%i", &num1);
    printf("Entre com o segundo número: ");
    scanf("%i", &num2);
    soma = num1 + num2;
    printf("A soma é: %d\n", soma);
    getch(); // Pausa para ver o resultado
    printf("\n");
} 
// Fábio 07-05-25 - Soma e multiplicar
void calcular_media_C() {
    printf("Entre com o primeiro número: ");
    scanf("%i", &num1);
    printf("Entre com o segundo número: ");
    scanf("%i", &num2);
    printf("Entre com o terceiro número: ");
    scanf("%i", &num3);
    mediacalc = ((num1 + num2 + num3) / 3);
    printf("A média é: %d\n", mediacalc);
    getch(); // Pausa para ver o resultado
    printf("\n");
}
*/






