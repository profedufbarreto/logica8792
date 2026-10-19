#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int idade;
    int temIngresso;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Possui ingresso? (1 - Sim / 0 - Não)");
    scanf("%d", &temIngresso);

    if(idade >= 18 && temIngresso){
        printf("Entrada permitida!\n");
    }else{
        printf("Entrada não permitida!\n");
    }

    return 0;
}