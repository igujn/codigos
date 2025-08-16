#include <stdio.h>
int main(){
int idade;
float altura;
char inicial;

printf("digite sua idade: ");
scanf(" %d", &idade); //le um numero inteiro

printf("digite sua altura: ");
scanf(" %f", &altura);//le um numero de ponto flutuante

printf("digite a inical do seu nome:");
scanf(" %c", &inicial);// le um caractere(observe o espaço antesdo %c)

printf("\nIdade: %d, altura: %.2f, inicial: %c\n", idade, altura, inicial);

return 0;
}
