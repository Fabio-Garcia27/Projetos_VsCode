// Fábio 21/05/25 - Código Notas dos Bimestre
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

float total_media=0, aux=0, media_instituicao=0;
int op=0;
    
int func_notas(void){
    do{
        system("cls"); //limpa a tela do programa
        total_media=0;
        aux=0;
        media_instituicao=0;

        printf("\n Digite a media da instituicao: ");
        scanf("%i", &media_instituicao);
        getchar();

        printf("\n Digite a nota do primeiro bimestre: ");
        scanf("%d", &aux);
        total_media += aux; //total_media = total_media + aux;
        getchar();

        printf("\n Digite a nota do segundo bimestre: ");
        scanf("%d", &aux);
        total_media += aux; //total_media = total_media + aux;
        getchar();

        printf("\n Digite a nota do terceiro bimestre: ");
        scanf("%d", &aux);
        total_media += aux; //total_media = total_media + aux;
        getchar();

        printf("\n Digite a nota do quarto bimestre: ");
        scanf("%d", &aux);
        total_media += aux; //total_media = total_media + aux;
        getchar();   
        
        if ((total_media/4)<media_instituicao){
            printf("\n Voce ficou de substitutiva e precisa ter nota igual ou supeior a ");    
            printf("%d", 100-(total_media/4));
        }else {
            printf("\n Parabens, voce nao ficou para prova substitutiva\n");
        }
        printf("\n Digite 1 para continuar ou outro valor para sair... ");
        scanf("%d", &op);
    }while(op == 1);
}  


// É o ponto de entrada do programa, onde a execução começa quando o programa é iniciado
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_notas();
    getchar();
    return 0;
 
}