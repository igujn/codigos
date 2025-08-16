#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");


char nome [50];
int idade;

printf ("digite seu nome:");
scanf("%s", nome);

printf("digite sua idade: ");
scanf("%d", &idade);

printf("Olá, %s! Você tem %d anos. \n", nome, idade);

return 0;
}
