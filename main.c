#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int numero, pares = 0;
    printf("Digite um número (0 para sair): ");
    scanf("%d", &numero);
    while(numero != 0){
        if(numero % 2 == 0){
            pares++;
        }
        printf("Digite um número (0 para sair): ");
        scanf("%d", &numero);
    }
    printf("Quantidade de pares: %d\n", pares);

    return 0;
}