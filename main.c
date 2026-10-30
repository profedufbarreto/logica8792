#include<stdio.h>
#include<string.h>
#include<locale.h>

int maior(int a, int b){
    if(a > b) return a;
    return b;
}

int maior1(int a, int b, int c){
    return maior(maior(a, b), c);
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int x, y, z;
    printf("Três números: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Maior: %d\n", maior(x, y, z));

    return 0;
}