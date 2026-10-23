#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    int opcao;
    do{
        printf("\n--- MENU ---");
        printf("1 - Dizer olá\n");
        printf("2 - Dizer tchau\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        if(opcao == 1){
            printf("Olá\n");
        }else if(opcao == 2){
            printf("Tchau!\n");
        }else if(opcao != 0){
            printf("Opção inválida!\n");
        }
    }while(opcao != 0);
    printf("Até mais!\n");

    return 0;
}