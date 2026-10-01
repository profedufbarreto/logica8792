#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6,},
        {7, 8, 9}
    };

    printf("Elementos da matriz:\n");
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            printf("%d\n", matriz[i][j]);
        }
    }

    return 0;
}