#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int dia;
    printf("Digite o número de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("Domingo!");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terça-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sábado");
            break;
        default:
            printf("Número inválido!!");
            break;
    }

    return 0;
}