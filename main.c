#include<stdio.h>
#include<string.h>
#include<locale.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    int i;
    for(i = 0; i < 10; i++){
        printf("%d ", fibonacci(i));
    }
    

    return 0;
}