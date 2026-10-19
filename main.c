#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    for(int i = 1; i <= 5; i++){
        printf("%d - Programar\n", i);
    }

    return 0;
}