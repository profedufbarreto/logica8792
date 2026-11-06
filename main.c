#include<stdio.h>
#include<string.h>
#include<locale.h>

void contar(int numero){
    if(numero == 0){
        return;
    }
    printf("%d\n", numero);
    contar(numero - 1);
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    contar(5);    

    return 0;
}