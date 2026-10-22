#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int resposta;
    do{
        printf("Executando o programa..\n");
        printf("Deseja continuar? (1 - Sim / 0 - Não):");
        scanf("%d", &resposta);
    }while(resposta == 1);
    printf("Programa encerrado!\n");

    return 0;
}