#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;

    printf("--- SISTEMA DE PEDÁGIO ---\n");
    printf("1 - Moto\n");
    printf("2 - Carro Passeio\n");
    printf("3 - Caminhão\n");
    printf("4 - Ônibus\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Categoria: Moto | Tarifa: R$ 5,00\n");
        break;
    case 2:
        printf("Categoria: Carro Passeio | Tarifa: R$ 10,00\n");
        break;
    case 3:
        printf("Categoria: Caminhão | Tarifa: R$ 25,00\n");
        break;
    case 4:
        printf("Categoria: Ônibus | Tarifa: R$ 30,00\n");
        break;
    default:
        printf("Erro: Categoria não cadastrada no sistema.\n");
        break;
    }
    

    return 0;
}