#include<stdio.h>
#include<string.h>
#include<locale.h>

char* tipoVeiculo(char placa[]){
    char primeiro = placa[0];
    if(primeiro >= 'A' && primeiro <= '2'){
        return "Veículo particular";
    }else if(primeiro >= '0' && primeiro <= '9'){
        return "Placa irregular";
    }else{
        return "Formato desconhecido";
    }
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int opcao;
    char placa[8];
    printf("\n----- SISTEMA DE TRÂNSITO BRASILEIRO -----");
    printf("\nDigite os caracteres da placa do veículo: ");
    scanf("%s", placa);
    do{
        printf("\n1 - Ver placa | 2 - Tipo de veículo | 0 - Sair: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("PLACA DO VEÍCULO: %s\n", placa);
                break;
            case 2:
                printf("Tipo: %s\n", tipoVeiculo(placa));
                break;
            case 0:
                printf("Saindo..\n");
                break;
            default:
                printf("Número inválido!\n");
                break;
        }
    }while(opcao != 0);

    printf("\n=== FIM DO PROGRAMA ===\n");

    return 0;
}