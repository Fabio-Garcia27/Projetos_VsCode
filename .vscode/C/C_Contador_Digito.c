// Fábio 21/05/25 - Contador digito - unidade - dezena - centena
// Com funções Cadastrar-remover-reprovados-pesquisar-listar-aprovados-0 Sair
// Função Menu onde está o menu de operações aluno e chama as funções acima
// Função main set linguagem e chama a função menu
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

//Variáveis
int i, u, d, c;

// função contador centena - dezena - unidade
void contador_dezena() {
    for (c = 0; c <= 9; ++c) { 
        for (d = 0; d <= 9; ++d) {
            if (d > 0 && d%2 == 0) {
                printf("Tecle enter para continuar\n");
                getchar();
            }
            for (u = 0; u <= 9; ++u) { 
                printf("%d (%d * %d * %d)\n", (c * d * u), c, d, u);
            }
        }  
    getchar();  
    }
}    

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8

    contador_dezena();

    return 0;
}
