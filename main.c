#include<stdio.h>
#include<string.h>
#include<locale.h>

void contagem(int n){
    for(int i = n; i >= 1; i--){
        printf("%d\n", i);
    }
    printf("Fogo!\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    contagem(5);

    return 0;
}