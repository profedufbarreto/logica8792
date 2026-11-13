#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    int total = 0;
    for(int i = 100; i <= 999; i++){
        int centena = i / 100;
        int unidade = i % 10;
        if(centena == unidade){
            printf("%d\n", i);
             total++;
         }
    }

    printf("Palíndromo de 3 dígitos: %d\n", total);
    return 0;
}