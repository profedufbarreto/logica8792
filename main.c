#include<stdio.h>
#include<string.h>
#include<locale.h>

float media(float notas[], int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += notas[i];
    }
    return soma / n;
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    float notas[5];
    for(int i = 0; i < 5; i++){
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    printf("Média: %.1f\n", media(notas, 5));
    return 0;
}