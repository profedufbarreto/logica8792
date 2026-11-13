#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int total = 0;
    for(int i = 10; i <= 99; i++){
        int dezena = i / 10;
        int unidade = i % 10;
        if(unidade > dezena){
            total++;
        }
    }
    printf("Números com unidade maior que a dezena: %d\n", total);
    return 0;
}