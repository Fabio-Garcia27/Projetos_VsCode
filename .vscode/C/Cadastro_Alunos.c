// Fábio Inclusão de Alunos, Exclusão, Consulta e Impressão
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
int i, matricula, opcao;
char nome[50];

#define MAX_ALUNOS 500

// Cria variáveis com base em um extrutura
typedef struct {
    int matricula;
    char nome[50];
    char celular[15];
    char endereco[50];
    char curso[50];
    float peso;
    float altura;
} Aluno;

// Terá duas variáveis para o sistema de cadastro de alunos.
Aluno alunos[MAX_ALUNOS];
int totalAlunos = 0;

// Inicializar o vetor
void inicializarVetor() {
    totalAlunos = 0;
}

// Incluir aluno
void incluirAluno() {
    if (totalAlunos < MAX_ALUNOS) {
        printf("Digite a matricula: ");
        scanf("%d", &alunos[totalAlunos].matricula);
        getchar(); // Consumir o caractere de nova linha

        printf("Digite o nome: ");
        fgets(alunos[totalAlunos].nome, sizeof(alunos[totalAlunos].nome), stdin);
        alunos[totalAlunos].nome[strcspn(alunos[totalAlunos].nome, "\n")] = 0; // Remover o caractere de nova linha

        printf("Digite o número de celular: ");
        fgets(alunos[totalAlunos].celular, sizeof(alunos[totalAlunos].celular), stdin);
        alunos[totalAlunos].celular[strcspn(alunos[totalAlunos].celular, "\n")] = 0; // Remover o caractere de nova linha

        printf("Digite o endereço residencial: ");
        fgets(alunos[totalAlunos].endereco, sizeof(alunos[totalAlunos].endereco), stdin);
        alunos[totalAlunos].endereco[strcspn(alunos[totalAlunos].endereco, "\n")] = 0; // Remover o caractere de nova linha

        printf("Digite o endereço residencial: ");
        fgets(alunos[totalAlunos].curso, sizeof(alunos[totalAlunos].curso), stdin);
        alunos[totalAlunos].curso[strcspn(alunos[totalAlunos].curso, "\n")] = 0; // Remover o caractere de nova linha

        printf("Digite o peso: ");
        scanf("%f", &alunos[totalAlunos].peso);
        getchar();

        printf("Digite a altura: ");
        scanf("%f", &alunos[totalAlunos].altura);
        getchar(); // Consumir o caractere de nova linha

        totalAlunos++;
        printf("Aluno incluído com sucesso!\n");
    } else {
        printf("Cadastro cheio!\n");
    }
}

// Excluir aluno
void excluirAluno() {
    printf("Digite a matrícula do aluno a ser excluído: ");
    scanf("%d", &matricula);
    getchar(); // Consumir o caractere de nova linha

    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            for (int j = i; j < totalAlunos - 1; j++) {
                alunos[j] = alunos[j + 1];
            }
            totalAlunos--;
            printf("Aluno excluído com sucesso!\n");
            return;
        }
    }
    printf("Aluno não encontrado!\n");
}

// Imprimir relação de alunos na tela printf
// Criar arquivo
// Imprimir na impressora fprintf
void imprimirRelacaoAlunos() {
    FILE *arquivo = fopen("Relacao_Alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    for (int i = 0; i < totalAlunos; i++) {
        fprintf(arquivo, "Matrícula: %d\n", alunos[i].matricula);
        fprintf(arquivo, "Nome: %s\n", alunos[i].nome);
        fprintf(arquivo, "Celular: %s\n", alunos[i].celular);
        fprintf(arquivo, "Endereço: %s\n", alunos[i].endereco);
        fprintf(arquivo, "Curso: %s\n", alunos[i].curso);
        fprintf(arquivo, "Peso: %.2f\n", alunos[i].peso);
        fprintf(arquivo, "Altura: %.2f\n\n", alunos[i].altura);

        fclose(arquivo);
        printf("Relação de alunos salva em Relacao_Alunos.txt\n");
        getchar();
        // Para imprimir o arquivo, você pode usar o comando system("lpr relacao_alunos.txt"); no Linux
        // ou system("print relacao_alunos.txt"); no Windows

        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Celular: %s\n", alunos[i].celular);        
        printf("Endereço: %s\n", alunos[i].endereco);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Peso: %.2f\n", alunos[i].peso);
        printf("Altura: %.2f\n\n", alunos[i].altura);
        printf("Aluno Impresso com sucesso!\n");
        return;
    }

}

// Realizar busca de aluno por nome
void buscarAlunoPorNome() {
    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha

    for (int i = 0; i < totalAlunos; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) {
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Celular: %s\n", alunos[i].celular);            
            printf("Endereço: %s\n", alunos[i].endereco);
            printf("Curso: %s\n", alunos[i].curso);
            printf("Peso: %.2f\n", alunos[i].peso);
            printf("Altura: %.2f\n", alunos[i].altura);
            return;
        }
    }
    printf("Aluno não encontrado!\n");
}

// Imprimir os dados dos alunos
void imprimirDadosAlunos() {
    imprimirRelacaoAlunos();
}

int func_aluno() {
    inicializarVetor();
    do {
        printf("1. Incluir aluno\n");
        printf("2. Excluir aluno\n");
        printf("3. Imprimir relação de alunos\n");
        printf("4. Buscar aluno por nome\n");
        printf("5. Imprimir dados dos alunos\n");
        printf("6. Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);
        getchar(); // Consumir o caractere de nova linha
        switch (opcao) {
            case 1:
                incluirAluno();
                break;
            case 2:
                excluirAluno();
                break;
            case 3:
                imprimirRelacaoAlunos();
                break;
            case 4:
                buscarAlunoPorNome();
                break;
            case 5:
                imprimirDadosAlunos();
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 6);
           return 0;
}  

// executar as funções
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_aluno();

    //printf("\nPrecione Enter para Encerrar...\n");
    getche();
    return 0;
}