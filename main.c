#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    for(int i = 0; i <= 10; i = i + 2){
        printf("%d\n", i);
    }

    return 0;
}