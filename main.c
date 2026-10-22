#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int n;
    do{
        printf("Digite um número (não negativo): ");
        scanf("%d", &n);
    }while(n < 0);

    printf("Você digitou: %d\n", n);

    return 0;
}