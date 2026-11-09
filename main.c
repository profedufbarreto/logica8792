#include<stdio.h>
#include<string.h>
#include<locale.h>

float celsiusParaFahrenheit(float c){
    return c * 9 / 5 + 32;
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    
    float celsius;
    float fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusParaFahrenheit(celsius);

    printf("%.1f C = %.1f F\n", celsius, fahrenheit);

    return 0;
}