#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int contarDigitos(int numero){
    if(numero < 10){
        return 1;
    }
    return 1 + contarDigitos(numero / 10);
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    srand(time(NULL));
    int numero = rand() % 10000;
    printf("Número: %d\n", numero);
    printf("Quantidade de dígitos: %d\n", contarDigitos(numero));

    return 0;
}