#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    for(int i = 1; i <= 10; i++){
        int resultado = i * num;
        printf("O resultado de %d x %d = %d\n", i, num, resultado);
    }


    return 0;
}