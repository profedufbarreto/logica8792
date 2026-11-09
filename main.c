#include<stdio.h>
#include<string.h>
#include<locale.h>

float areaRetangulo(float base, float altura){
    return base * altura;
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    
    printf("Área: %.2f\n", areaRetangulo(5, 3.5));

    return 0;
}