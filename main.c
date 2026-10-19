#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int portaAberta = 0;
    if(!portaAberta){
        printf("A porta está fechada!\n");
    }

    return 0;
}