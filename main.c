#include<stdio.h>
#include<string.h>
#include<locale.h>

int buscar(float vetor[], int tamanho, float chave){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == chave){
            return i;
        }
    }
    return -1;
}

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    float numeros[] = {10.5, 20.5, 30.5, 40.5, 50.5};
    int tamanho = 5;
    float procurado;
    printf("Digite o número que deseja procurar: ");
    scanf("%f", &procurado);
    int resultado = buscar(numeros, tamanho, procurado);
    if(resultado != -1){
        printf("Número encontrado!\n");
        printf("Valor: %.2f\n", numeros[resultado]);
        printf("Posição no vetor: %d\n", resultado);
    }else{
        printf("Número não encontrado!\n");
    }
   
    return 0;
}