#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    int vet[10];
    for(int i = 0; i < 10; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nVetor: ");
    for(int i = 0; i < 10; i++){
        printf("%d", vet[i]);
    printf("\n");
    }
}