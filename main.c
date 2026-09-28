#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // for(int i = 1; i <= 10; i++){
    //     for(int j = 1; j <= 10; j++){
    //         printf("%d x %d = %d\n", i, j, i * j);
    //     }
    //     printf("\n");
    // }

    for(int i = 1; i < 4; i++){
        for(int j = 1; j < 4; j++){
            printf("For externo e for interno: %d %d\n", i, j);
        }
    }

    return 0;
}