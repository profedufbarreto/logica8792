#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++){
        printf("%d\n", num[i]);
    }

    return 0;
}