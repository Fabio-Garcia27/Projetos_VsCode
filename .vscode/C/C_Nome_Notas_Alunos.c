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
int op=0;
int i=0;
char nome[50];
float notas[4];

typedef struct {
    char nome[50];
    float notas[4];
    int ativo;
} Aluno;

Aluno alunos[Max_Alunos];

// função cadastrar alunos
void cadastrar(){
    system("cls");
    do{
        // Usa nome tem que usar fgets 
        printf("\nNome: ");
        fgets(nome, sizeof(nome), stdin);

        printf("\n1 Bimestre: ");
        scanf("%f", &notas[0]);
        getchar();

        printf("\n2 Bimestre: ");
        scanf("%f", &notas[1]);
        getchar();

        printf("\n3 Bimestre: ");
        scanf("%f", &notas[2]);
        getchar();

        printf("\n4 Bimestre: ");
        scanf("%f", &notas[3]);
        getchar();        

        for (i = 0; i < Max_Alunos; i++) {
            FILE *arquivo = fopen("Relacao_Aluno_Notas.txt", "w");
            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo!\n");
                return;
            }
            if (alunos[i].ativo==0){
                alunos [i].notas[0] = notas[0];
                alunos [i].notas[1] = notas[1];
                alunos [i].notas[2] = notas[2];
                alunos [i].notas[3] = notas[3];
                strcpy(alunos[i].nome, nome); // copia uma string para outra / destino para origem
                break; // senão colocar o break vai repetir o mesmo aluno várias vezes
            }
                fprintf(arquivo, "Nome: %s\n", alunos[i].nome);
                fprintf(arquivo, "Notas: %.2f\n", alunos[i].notas);

                fclose(arquivo);
                printf("Relação de alunos e notas salva em Relacao_Aluno_Notas.txt\n");
                getchar();
        }    
        printf("\n1 - Continuar \n0 - Sair\n");
        scanf("%d", &op);
        getchar();
    } while (op != 0);
}

// função remover alunos
void remover(){

}

// função reprovar alunos
void reprovados(){

}

// função pesquisar alunos
void pesquisar(){

}

// função menu
void menu(){
    //system("clear"); Linux
    system("cls"); // limpa a tela do terminal
    do{
        printf("\n1 - Cadastrar Aluno\n2 - Remover Aluno");
        printf("\n3 - Alunos Reprovados\n4 - Pesquisar Aluno");
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
            default:
                break;
        }
    } while (op != 0);
}

// argc será 4 (o nome do programa mais os 3 argumentos)
// argv será um array contendo: 
//(int argc, char const *argv[])
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    menu();
    getchar();
    return 0;
}