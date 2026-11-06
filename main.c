#include<stdio.h>
#include<string.h>
#include<locale.h>

int potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    return base * potencia(base, expoente - 1);
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    printf("Resultado: %d\n", potencia(2, 4));

    return 0;
}