#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0.0, media;

    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d:\n ", i + 1);
        scanf("%f", &notas[i]);


        soma += notas[i];
    }


    media = soma / 10.0;


    printf("\nMédia das notas: %.2f\n", media);

    return 0;
}
