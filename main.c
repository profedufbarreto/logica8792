#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int n;
    printf("Digite N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }

    return 0;
}