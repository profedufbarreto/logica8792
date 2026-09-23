#include<stdio.h>
#include<locale.h>

int fatorial(int d){
    int resultado = 1;
    for(int i = 1; i < d; i++){
        resultado *= i; //resultado = resultado * i;
    }
    return resultado;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numero = 5;
    printf("Fatorial de %d = %d\n", 10, fatorial(10));


    return 0;
}