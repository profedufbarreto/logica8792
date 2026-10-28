#include<stdio.h>
#include<string.h>
#include<locale.h>

void mostrarNumero(int numero){
    printf("Número: %d\n", numero);
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    mostrarNumero(40);

    return 0;
}