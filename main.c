#include<stdio.h>
#include<string.h>
#include<locale.h>

void contar(int n){
    if(n == 0){
        return;
    }
    contar(n - 1);
    printf("%d\n", n);
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    contar(5);

    return 0;
}