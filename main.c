#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    for(int i = 0; i < 10; i++){
        printf("%s\n %d", "\nOs números estão aumentando: --->>" ,i);
    }

    printf("\nMeu For funcionou!!");

    return 0;
}