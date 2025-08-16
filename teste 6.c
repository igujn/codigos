#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    int idade;
    float nota1, nota2, media;

    // Entrada de dados
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin); // Usa fgets para evitar overflow

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    // C�lculo da m�dia
    media = (nota1 + nota2) / 2;

    // Exibi��o dos resultados
    printf("\nOl�, %s!\n", nome);
    printf("M�dia: %.2f\n", media);

    if (media >= 7)
        printf("M�dia >= 7: %d\n", media >= 7);

    if (idade < 18)
        printf("Idade < 18: %d\n", idade < 18);

    return 0;
}

