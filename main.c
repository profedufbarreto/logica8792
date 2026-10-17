#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int n, soma = 0;
    printf("Digite N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i;
        soma -= 1;
        printf("\nO resultado %d + %d = %d", soma, i, soma + i);
    }


    return 0;
}