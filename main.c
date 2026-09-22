#include<stdio.h>
#include<locale.h>
#include<string.h>

void saudar(){
    printf("Olá mundo!\n");
}

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    saudar();

    return 0;
}