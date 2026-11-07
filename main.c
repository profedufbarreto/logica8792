#include<stdio.h>
#include<string.h>
#include<locale.h>

int somarDigitos(int numero){
    if(numero == 0){
        return 0;
    }
    return (numero % 10) + somarDigitos(numero / 10);
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    printf("Soma: %d\n", somarDigitos(1234));
    

    return 0;
}