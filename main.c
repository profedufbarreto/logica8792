#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    int total = 0;
    for(int i = 1; i <= 500; i++){
        if(i % 10 == 7 && i % 3 == 0){
            printf("%d\n", i);
            total++;
        }
    }
    printf("\nTotal: %d\n", total);

    return 0;
}