#include<stdio.h>
#include<string.h>
#include<locale.h>

int palindromo(char palavra[], int inicio, int fim){
    if(inicio >= fim){
        return 1;
    }
    if(palavra[inicio] != palavra[fim]){
        return 0;
    }
    return palindromo(palavra, inicio + 1, fim - 1);
}
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    char palavra[50] = "radar";
    if(palindro(palavra, 0, strlen(palavra) - 1)){
        printf("É palíndromo!\n");
    }else{
        printf("Não é palíndromo!\n");
    }
    

    return 0;
}