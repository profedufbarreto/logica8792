#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int n;
    int resultado;

    printf("Digite um número para a tabuada: ");
    resultado = scanf("%d", &n);

    if(resultado != 1){
        printf("Entrada inválida! Por favor, digite apenas números!");
        return 1;
    }

    for(int i = 1; i <= 10; i++){
        int resposta = n * i;
        printf("O resultado de %d x %d é: %d\n", n, i, resposta);
    }
    

    return 0;
}