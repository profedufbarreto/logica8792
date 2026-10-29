#include<stdio.h>
#include<string.h>
#include<locale.h>

void mostrarNome(char nome[]){
    printf("Nome: %s\n", nome);
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    mostrarNome("Eduardo");

    return 0;
}