#include<stdio.h>
#include<string.h>
#include<locale.h>

#define PI 3.14159
float area_circulo(float raio){
    return PI * raio * raio;
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    float r;
    printf("Raio: ");
    scanf("%f", &r);
    printf("Área: %.2f\n", area_circulo(r));

    return 0;
}