#include<stdio.h>
#include<string.h>
#include<locale.h>

void linha(){
    printf("------------------\n");
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    linha();
    printf("Meu nome é Eduardo!\n");
    linha();

    return 0;
}