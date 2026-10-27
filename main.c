#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int cartela[5] = {3, 8, 12, 15, 10};
    int sorteado[21] = {0};
    int acertos = 0, rodadas = 0, bola;
    srand(time(NULL));
    while(acertos < 5){
        do{
            bola = rand() % 20 + 1;
        }while(sorteado[bola]);
        sorteado[bola] = 1;
        rodadas++;
        printf("Bola %d: %d\n", rodadas, bola);
        for(int i = 0; i < 5; i++){
            if(cartela[i] == bola){
                acertos++;
                printf("Acertou o %d! (%d de 5)\n", bola, acertos);
            }
        }
    }
    printf("\nBINGO em %d bolas!\n", rodadas);

    return 0;
}