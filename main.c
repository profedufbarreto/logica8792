#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    int total = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 4 == 0 && i % 10 == 4){
            printf("%d\n", i);
        }
    }

    return 0;
}