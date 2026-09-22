#include<stdio.h>
#include<locale.h>
#include<string.h>

void dobrar(int *x){
    *x = *x * 2;
}

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero = 10;
    dobrar(&numero);
    printf("Número depois da função %d\n", numero);

    return 0;
}