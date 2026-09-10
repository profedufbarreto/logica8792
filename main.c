#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a = 5;
    int b = 4;

    printf("A soma é: %d\n", (a + b));
    printf("A subtração é: %d\n", (a - b));
    printf("A multiplicação é: %d\n", (a * b));
    printf("A divisão é: %d\n", (a / b));

    

    return 0;
}