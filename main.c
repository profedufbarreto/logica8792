#include<stdio.h>
#include<string.h>
#include<locale.h>

int soma(int n){
    int total = 0;
    for(int i = 1; i <= n; i++){
        total += i;
    }
    return total;
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int num;
    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("Soma de 1 até.. %d\n", soma());

    return 0;
}