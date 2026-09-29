#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    printf("Digite o tamanho do triângulo: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}