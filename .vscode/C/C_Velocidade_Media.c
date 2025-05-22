// Fábio 21/05/25 - Código Velocidade Média
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
int op=0;
float vm = 0, s = 0, t = 0;
    
int func_vel_media(void){
    do{
        system("cls"); // limpar tela em cada passada do laço
        printf("\n 1 - Velocidade \n 2 - Espaco \n 0 - Sair");
        scanf("%d", &op);
        getchar();

        if(op == 1){
           printf("\n Digite a espaco:" );
           scanf("%f", &s);
           getchar();

           printf("\n Digete o tempo:" );
           scanf("%f", &t);
           getchar();

           printf("\n A velocidade media e: %f", (s / t));
           getchar();
        } else if (op == 2){
           printf("\n Digite a velocidade media: "); 
           scanf("%f", &vm);
           getchar();

           printf("\n Digite o tempo: ");
           scanf("%f", &t);
           getchar();

           printf("\n O espaco e: %0.2f", (vm*t));
           getchar();
        } else if (op != 0 && op != 1 && op != 2){
           printf("\n Valor digitado errado, so pode ser 1, 2 ou 0 para Sair.");
           getchar();
        }
    }while (op != 0);

    if (op == 0) {
        printf("\n Sair...");
        getchar();
    }
}


// É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_vel_media();
    getchar();
    return 0;
}