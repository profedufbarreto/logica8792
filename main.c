#include<stdio.h>
#include<string.h>
#include<locale.h>

int dobro(int numero){
    return numero * 2;
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int valor = 8;
    printf("Dobro = %d\n", dobro(valor));   

    return 0;
}