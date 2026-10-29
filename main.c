#include<stdio.h>
#include<string.h>
#include<locale.h>

int quadrado(int numero){
    return numero * numero;
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int resultado;
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    resultado = quadrado(num);

    printf("O resultado é: %d", resultado);

    return 0;
}