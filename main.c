#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b, c;

    printf("Digite dois números: ");
    scanf("%d %d %d", &a, &b, &c);

    if((a != b) && (b != c)){
        printf("Os três números são diferentes!\n");
    }else if(b != c){
        printf("Os dois números são diferentes!\n");
    }else{
        printf("Todos os números são iguais.");
    }

    return 0;
}