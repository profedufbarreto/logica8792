#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    float nota;
    do{
        printf("Digite uma nota (0 a 10): ");
        scanf("%f", &nota);
    }while(nota < 0 || nota > 10);
    printf("Nota Válida: %.1f\n", nota);

    return 0;
}