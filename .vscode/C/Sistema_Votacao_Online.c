// Fábio Sistema Votação Online
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
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <locale.h>
#include <ctype.h>

#include <stdio.h>
#include <string.h>

// incluíndo arquivos de cabeçalho necessários

#define MAX_C 11
// definindo o número máximo de candidatos

// Estrutura de candidatos
typedef struct Candidato {
    char nome[50];
    int votos;
    char simbolos;
} Candidato;

// matriz global de detalhes do candidato
Candidato allCandidatos[MAX_C];
// variável global para manter a contagem de candidatos
int candidatoCount = 0;
// array global para armazenar todos os símbolos
char simbolos[10]
    = { '!', '@', '#', '$', '%', '^', '&', '*', '~', '+' };
// array para manter o controle do símbolo obtido
int simbolosTaken[11];

// declaração de função
void func_fillCandidato(int);
void func_displayAllCandidatos();
void func_getVotos(int);
void func_getResultados();

// função para preencher o array allCandidatos usando o
// detalhes fornecidos pelo usuário
void func_fillCandidato(int cNum)
{
    printf("Símbolos Disponíveis: \n");
    for (int j = 0; j < 10; j++) {
        if (simbolosTaken[j] == 1)
            continue;
        printf("%d  %c\n", j + 1, simbolos[j]);
    }

    int num = 0;

    printf("\nDigite o número do símbolo do candidato %d: ",
           cNum + 1);
    scanf("%d", &num);
    getchar();

    if (num <= 0 || num > 10 || simbolosTaken[num - 1] == 1) {
        printf("Este símbolo não está disponível. Por favor "
               "escolha entre os simbolos disponíveis\n");
        num = 0;
        func_fillCandidato(cNum);
    }
    else {
        simbolosTaken[num - 1] = 1;
        allCandidatos[cNum].simbolos = simbolos[num - 1];
        printf("Digite o nome do candidato %d: ",
               cNum + 1);
        scanf("%s", allCandidatos[cNum].nome);
        getchar();

        allCandidatos[cNum].votos = 0;
    }
}

// função para exibir todos os nomes dos candidatos com símbolo
void func_displayAllCandidatos()
{
    if (!allCandidatos || !candidatoCount) {
        printf("Matriz de Candidatos Enválida\n" );
        return;
    }

    for (int j = 0; j < candidatoCount; j++) {
        printf("%s\t\t", allCandidatos[j].nome);
    }
    printf("\n");
    for (int j = 0; j < candidatoCount; j++) {
        printf("%3c\t\t\t", allCandidatos[j].simbolos);
    }
    printf("\n");
    getchar();
}

// função para obter votos
void func_getVotos(int votosCount)
{
    func_displayAllCandidatos();
    printf("Eleitor %d, por favor insira sua escolha (1-%d): ",
           votosCount + 1, candidatoCount);
    int escolha;
    scanf("%d", &escolha);
    getchar();

    // verificando se a escolha é válida
    if (escolha >= 1 && escolha <= candidatoCount) {
        allCandidatos[escolha - 1].votos++;
    }
    else {
        printf("Escolha inválida! Por favor, vote novamente.\n");
        func_getVotos(votosCount);
    }
}

// função para obter resultados
void func_getResultados()
{
    int maxVotos = 0;
    int indiceVencedor = -1;
    int frequenciaVencedora = 0;
    for (int i = 0; i < candidatoCount; i++) {
        if (allCandidatos[i].votos > maxVotos) {
            maxVotos = allCandidatos[i].votos;
            indiceVencedor = i;
        }
    }

    for (int i = 0; i < candidatoCount; i++) {
        if (allCandidatos[i].votos == maxVotos) {
            frequenciaVencedora++;
        }
    }

    printf("\n-----RESULTADO-----\n");

    if (frequenciaVencedora > 1) {
        printf("Nenhum cadidato tem maioria de votos\n" );
    }
    else if (indiceVencedor != -1) {
        printf("O vencedor é: %s\nSímbolo do Candidato: "
               "%c\ncom %d votos!\n",
               allCandidatos[indiceVencedor].nome,
               allCandidatos[indiceVencedor].simbolos, maxVotos);
    }
    else {
        printf("Nnehum Vencedor\n");
    }
}

// código driver
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    // inicializando estruturas necessárias
    for (int i = 0; i < 11; i++) {
        simbolosTaken[i] = 0;
    }

    // obtendo o número de candidatos
    printf("Digite o número de candidatos: ");
    scanf("%d", &candidatoCount);
    if (candidatoCount >= MAX_C) {
        printf("O número de candidatos não pode ser maior"
               "que 10.\n Encerrando o programa\n\n");
        return 0;
    }

    // preenchimento dos dados do candidato
    for (int i = 0; i < candidatoCount; i++) {
        func_fillCandidato(i);
    }

    // obtendo número de eleitores
    int numEleitores;
    printf("Digite o número de eleitores: ");
    scanf("%d", &numEleitores);
    getchar();

    // coletando votos
    for (int i = 0; i < numEleitores; i++) {
        func_getVotos(i);
    }

    // Imprimindo resultados
    func_getResultados();

    getchar();
    return 0;
}