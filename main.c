#include<stdio.h>
#include<string.h>
#include<locale.h>

void linha(int n){
    for(int i = 0; i < n; i++){
        printf("-");
    printf("\n");
    }
}


int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    linha(30);
    printf("BEM-VINDO AO SISTEMA\n");
    linha(30);

    return 0;
}