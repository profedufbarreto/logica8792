#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    printf("Digite o tamanho da pirâmide: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}