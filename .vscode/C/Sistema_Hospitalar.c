// Fábio Sistema Hospitalar
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

// Variáveis global
int quantidadeBrigadeiros;
int opcao;

//#define MAX_PACIENTES 100
#define MAX_PACIENTES 3
#define MAX_NOME 50
#define MAX_CIDADE 30

typedef struct {
    int id;
    char nome[MAX_NOME];
    char cidade[MAX_CIDADE];
    float precoCama;
    int leito;
} Paciente;

Paciente pacientes[MAX_PACIENTES];
int totalPacientes = 0;

// Função para adicionar paciente
void func_adicionarPaciente() {
    if (totalPacientes < MAX_PACIENTES) {
        printf("Digite o nome do paciente: ");
        scanf("%s", pacientes[totalPacientes].nome);
        getchar();

        printf("Digite o nome do paciente: ");
        scanf("%49s", pacientes[totalPacientes].nome);
        getchar();

        printf("Digite a cidade do paciente: ");
        scanf("%29s", pacientes[totalPacientes].cidade);
        getchar();

        printf("Digite o preço da cama: ");
        scanf("%f", &pacientes[totalPacientes].precoCama);
        getchar();

        printf("Digite o número do leito: ");
        scanf("%d", &pacientes[totalPacientes].leito);
        getchar();

        pacientes[totalPacientes].id = totalPacientes + 1;
        totalPacientes++;

        printf("Paciente adicionado com sucesso!\n");
        getchar();

    } else {
        printf("Limite de pacientes atingido.\n");
        getchar();
    }
        printf("Pressione Enter para continuar...");
        getchar();
}

// Função para imprimir dados dos pacientes
void func_imprimirPacientes() {
    FILE *arquivo = fopen("Relacao_Pacientes.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    for (int i = 0; i < totalPacientes; i++) {
        fprintf(arquivo, "ID: %d\n", pacientes[i].id);
        fprintf(arquivo, "Nome: %s\n", pacientes[i].nome);
        fprintf(arquivo, "Cidade: %s\n", pacientes[i].cidade);
        fprintf(arquivo, "Preço da Cama: %.2f\n", pacientes[i].precoCama);
        fprintf(arquivo, "Leito: %d\n\n", pacientes[i].leito);

        fclose(arquivo);
        printf("Relação de pacientes salva em Relacao_Pacientes.txt\n");
        getchar();
        // Para imprimir o arquivo, você pode usar o comando system("lpr relacao_alunos.txt"); no Linux
        // ou system("print relacao_alunos.txt"); no Windows


        printf("ID: %d\n", pacientes[i].id);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Cidade: %s\n", pacientes[i].cidade);
        printf("Preço da Cama: %.2f\n", pacientes[i].precoCama);
        printf("Leito: %d\n\n", pacientes[i].leito);
        getchar();
    }
}

// Função para classificar pacientes por preço de cama
void func_classificarPorPreco() {
    Paciente temp;
    for (int i = 0; i < totalPacientes - 1; i++) {
        for (int j = i + 1; j < totalPacientes; j++) {
            if (pacientes[i].precoCama > pacientes[j].precoCama) {
                temp = pacientes[i];
                pacientes[i] = pacientes[j];
                pacientes[j] = temp;
            }
            return;
        }
    }
}

// Função para classificar pacientes por leitos disponíveis (supondo leito 0 como indisponível)
void func_classificarPorLeito() {
    Paciente temp;
    for (int i = 0; i < totalPacientes - 1; i++) {
        for (int j = i + 1; j < totalPacientes; j++) {
            if (pacientes[i].leito > pacientes[j].leito) {
                temp = pacientes[i];
                pacientes[i] = pacientes[j];
                pacientes[j] = temp;
            }
            return;
        }
    }
}

// Função para classificar pacientes por nome
void func_classificarPorNome() {
    Paciente temp;
    for (int i = 0; i < totalPacientes - 1; i++) {
        for (int j = i + 1; j < totalPacientes; j++) {
            if (strcmp(pacientes[i].nome, pacientes[j].nome) > 0) {
                temp = pacientes[i];
                pacientes[i] = pacientes[j];
                pacientes[j] = temp;
            }
            return;
        }
    }
}

// Função para imprimir pacientes de uma cidade específica
void func_imprimirPacientesPorCidade() {
    char cidade[MAX_CIDADE];
    printf("Digite a cidade: ");
    scanf("%s", cidade);
    getchar();

    for (int i = 0; i < totalPacientes; i++) {
        if (strcmp(pacientes[i].cidade, cidade) == 0) {
            printf("ID: %d\n", pacientes[i].id);
            printf("Nome: %s\n", pacientes[i].nome);
            printf("Preço da cama: %.2f\n", pacientes[i].precoCama);
            printf("Leito: %d\n\n", pacientes[i].leito);
            getchar();
        }
        return;
    }
}

int func_main() {
        do {
        printf("1. Adicionar paciente\n");
        printf("2. Imprimir pacientes\n");
        printf("3. Classificar por preço\n");
        printf("4. Classificar por leito\n");
        printf("5. Classificar por nome\n");
        printf("6. Imprimir pacientes por cidade\n");
        printf("7. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                func_adicionarPaciente();
                break;
            case 2:
                func_imprimirPacientes();
                break;
            case 3:
                func_classificarPorPreco();
                func_imprimirPacientes();
                break;
            case 4:
                func_classificarPorLeito();
                func_imprimirPacientes();
                break;
            case 5:
                func_classificarPorNome();
                func_imprimirPacientes();
                break;
            case 6:
                func_imprimirPacientesPorCidade();
                break;
            case 7:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida. Por favor, tente novamente.\n");
                break;
        }
    } while (opcao != 7);

}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_main();

    getche();
    return 0;
}


