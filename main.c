#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeros[] = {1, 2, 3};

    numeros[0] = 10;

    printf("%d", numeros[0]);



    return 0;
}