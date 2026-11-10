#include<stdio.h>
#include<string.h>
#include<locale.h>

int quadrado(int n){
    return n * n;
}

int cubo(int n){
    return n * n * n;
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("O resultado de %d ao quadrado é: %d\n", num, quadrado(num));
    printf("O resultado de %d ao cubo é: %d\n", num, cubo(num));
    


    return 0;
}