#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    while(n >= 0){
        printf("%d\n", n);
        n--;
    }

    return 0;
}