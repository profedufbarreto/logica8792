#include<stdio.h>
#include<string.h>
// #include<windows.h>
#include<locale.h>


    struct Pessoa{
        char nome[50];
        int idade;
        float altura;
        float peso;
    };

int main(){
    
    // SetConsoleCP(65001);
    // SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int n;
    printf("Quantas pessoas deseja cadastrar: ");
    scanf("%d", &n);
    getchar(); //consome o '\n' deixado pelo scanf
    struct Pessoa p1[n];
    for(int i = 0; i < n; i++){
        printf("\nPessoa %d\n", i + 1);
        printf("Nome completo: ");
        fgets(p1[i].nome, sizeof(p1[i].nome), stdin);
        p1[i].nome[strcspn(p1[i].nome, "\n")] = '\0';
        
        printf("Idade: ");
        scanf("%d", &p1[i].idade);
        getchar();
        printf("Altura: ");
        scanf("%f", &p1[i].altura);
        getchar();
        printf("Peso: ");
        scanf("%f", &p1[i].peso);
        getchar();
    }
    printf("\n--- Lista de Pessoas ---\n");
    for(int i = 0; i < n; i++){
        printf("Nome %d: %s | Idade: %d | Altura: %.2f | Peso: %.2f\n",
        i + 1, p1[i].nome, p1[i].idade, p1[i].altura, p1[i].peso);
    }
    return 0;
}