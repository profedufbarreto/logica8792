#include<stdio.h>
#include<locale.h>
#include<string.h>

void saudar(const char *nome){
    printf("Olá %s\n", nome);
}

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    saudar("Eduardo");
    saudar("Filippsen");
    saudar("Barreto");

    return 0;
}