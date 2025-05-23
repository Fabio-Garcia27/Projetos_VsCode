// Fábio 21/05/25 - Nome e notas de alunos
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

// Definir número máximo de alunos
#define Max_Alunos 50

//Variáveis
int i;
char nome[50];
float notas[4];
int totalAlunos;

typedef struct {
    char nome[50];
    float notas[4];
    int ativo;
} Aluno;

Aluno alunos[Max_Alunos];

// Fábio 23/05/2025 Criado
// Inicializar o vetor
void inicializar_Tot_Alu() {
    totalAlunos = 0;
}

// função cadastrar alunos
void cadastrar(){
    int op;
    do{
        system("cls"); 
        // Usa nome tem que usar fgets 
        printf("\nNome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha

        // Verificar se o nome está vazio
        while (strlen(nome) == 0){
            printf("Nome nao pode ser vazio. Por favor, digite novamente: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha
        }        

        printf("\n1 Bimestre: ");
        scanf("%f", &notas[0]);

        printf("\n2 Bimestre: ");
        scanf("%f", &notas[1]);
        getchar(); // Consumir o caractere de nova linha

        printf("\n3 Bimestre: ");
        scanf("%f", &notas[2]);
        getchar(); // Consumir o caractere de nova linha

        printf("\n4 Bimestre: ");
        scanf("%f", &notas[3]);
        getchar(); // Consumir o caractere de nova linha 

        for (i = 0; i < Max_Alunos; i++) {
            if (alunos[i].ativo==0){
                alunos [i].notas[0] = notas[0];
                alunos [i].notas[1] = notas[1];
                alunos [i].notas[2] = notas[2];
                alunos [i].notas[3] = notas[3];
                strcpy(alunos[i].nome, nome); // copia uma string para outra / destino para origem
                alunos[i].ativo = 1;
                totalAlunos++; // Incrementar totalAlunos aqui 
                break; // senão colocar o break vai repetir o mesmo aluno várias vezes                
             }  
        } 
        printf("\n1 - Continuar \n0 - Sair\n");
        scanf("%d", &op);
        getchar();   
     } while (op != 0);
}

// Fábio 23/05/2025 Criada
// função remover alunos
void remover(){
    system("cls");
    printf("Digite o nome do aluno a ser removido: ");
    fgets(nome, sizeof(nome), stdin);   // E também dessa sintaxe fgets busca o nome corretamente
    nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha

    int encontrado = 0;
    printf("%d", totalAlunos);
    getchar();

    for (i = 0; i < Max_Alunos; i++) {
        if (alunos[i].ativo == 1 && strcmp(alunos[i].nome, nome) == 0){
            totalAlunos--;
            printf("Aluno removido com sucesso!\n");
            encontrado = 1;
        }  
    }
    if (encontrado == 0){
        printf("Aluno não encontrado!\n"); 
    }    
    printf("Pressione uma tecla para continuar...");    
    getchar();
}

// função reprovar alunos
void reprovados(){
    system("cls"); 
    float media;
    printf("\nLista de Alunos Reprovados\n"); 
    for (i = 0; i < Max_Alunos; i++){
        if (alunos[i].ativo==1){
           media = 0;
           media = alunos[i].notas[0]+alunos[i].notas[1]+alunos[i].notas[2]+alunos[i].notas[3];
           media = media / 4;
           if (media < 6.0){
               printf("Nome: %s\n", alunos[i].nome);
               printf("1 BI: %0.2f\n", alunos[i].notas[0]);
               printf("2 BI: %0.2f\n", alunos[i].notas[1]);
               printf("3 BI: %0.2f\n", alunos[i].notas[2]);
               printf("4 BI: %0.2f\n", alunos[i].notas[3]);
               printf("\n-------------\n");                
            }
        }
    }
    printf("Pressione uma tecla para continuar...");    
    getchar();
}

// Fábio 23/05/25 Criada
// função pesquisar alunos
void pesquisar(){
    system("cls");
    printf("Digite o nome do aluno a ser pesquisado: ");
    fgets(nome, sizeof(nome), stdin);   // E também dessa sintaxe fgets busca o nome corretamente
    nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha

    int encontrado = 0;
    for (i = 0; i < Max_Alunos; i++) {
        if (alunos[i].ativo == 1 && strcmp(alunos[i].nome, nome) == 0){
            printf("Nome: %s\n", alunos[i].nome);
            printf("1 BI: %0.2f\n", alunos[i].notas[0]);
            printf("2 BI: %0.2f\n", alunos[i].notas[1]);
            printf("3 BI: %0.2f\n", alunos[i].notas[2]);
            printf("4 BI: %0.2f\n", alunos[i].notas[3]);
            printf("\n-------------\n");
            encontrado = 1;
        }  
    }
    if (encontrado == 0){
        printf("Aluno não encontrado!\n"); 
    }    
    printf("Pressione uma tecla para continuar...");    
    getchar();
}

// função listar alunos
void listar(){
    system("cls"); 
    printf("\nLista de Alunos\n"); 
    for (i = 0; i < Max_Alunos; i++){
        if (alunos[i].ativo==1){
           printf("Nome: %s\n", alunos[i].nome);
           printf("1 BI: %0.2f\n", alunos[i].notas[0]);
           printf("2 BI: %0.2f\n", alunos[i].notas[1]);
           printf("3 BI: %0.2f\n", alunos[i].notas[2]);
           printf("4 BI: %0.2f\n", alunos[i].notas[3]);
           printf("\n-------------\n");
        }
    }
    printf("Pressione uma tecla para continuar...");    
    getchar();
}

// função alunos aprovados
void aprovados(){
    system("cls"); 
    float media;
    printf("\nLista de Alunos Aprovados\n"); 
    for (i = 0; i < Max_Alunos; i++){
        if (alunos[i].ativo==1){
           media = 0;
           media = alunos[i].notas[0]+alunos[i].notas[1]+alunos[i].notas[2]+alunos[i].notas[3];
           media = media / 4;
           if (media >= 6.0){
               printf("Nome: %s\n", alunos[i].nome);
               printf("1 BI: %0.2f\n", alunos[i].notas[0]);
               printf("2 BI: %0.2f\n", alunos[i].notas[1]);
               printf("3 BI: %0.2f\n", alunos[i].notas[2]);
               printf("4 BI: %0.2f\n", alunos[i].notas[3]);
               printf("\n-------------\n");                
            }
        }
    }
    printf("Pressione uma tecla para continuar...");    
    getchar();    
}

// função menu
void menu(){
    int op;
    do{
        system("cls"); // limpa a tela do terminal 
        printf("\n1 - Cadastrar Aluno\n2 - Remover Aluno");
        printf("\n3 - Alunos Reprovados\n4 - Pesquisar Aluno");
        printf("\n5 - Listar Aluno\n6 - Alunos Aprovados");
        printf("\n0 - Sair\n");
        scanf("%d", &op);
        getchar();
        switch (op) {
            case 1:
                cadastrar();
                break;
            case 2:
                remover();
                break;
            case 3:
                reprovados();
                break;
            case 4:
                pesquisar();
                break;
            case 5:
                listar();
                break;  
            case 6:
                aprovados();
                break;                  
            case 0:
                printf("Saindo...\n"); 
                break;                
            default:
                printf("Opcao Invalida...\n");
                getchar(); // Adicione getchar() aqui para pausar em opções inválidas
        }
    } while (op != 0);
}

// argc será 4 (o nome do programa mais os 3 argumentos)
// argv será um array contendo: 
int main(int argc, char const *argv[]){
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    // Inicializar a estrutura alunos
    for (i = 0; i < Max_Alunos; i++) {
        alunos[i].ativo = 0;
    }
    //Fábio 23/05/2025 - Função zerar total_Alunos
    inicializar_Tot_Alu();
    menu();
    return 0;
}
