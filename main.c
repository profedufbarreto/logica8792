#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x = 10;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor via ponteiro: %d\n", *p);

    return 0;
}