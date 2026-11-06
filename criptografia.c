#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
/* Sequencia de Fibonacci
    (0,1,1,2,3,5,8,13,21,34,55,89,149)  */

    char palavra [16]; // Variável que define quantidade de caracters
    int shift;
    int ant1, ant2, atual;

    ant1 = 1;
    ant2 = 0;


    printf(" Digite uma Palavra:");
    scanf("%15s", palavra); // Usúario Insere Valor de Entrada

    printf("Digite o Shift");
    scanf("%d", &shift);

    printf("Palavra Criptografada:");

atual = ant1 + ant2; // Calculo do 3 termo

for( int i = 0; palavra[i] != '\0'; ++i){

atual = ant1 + ant2;  

 palavra[i] = 'a' + (palavra[i] - 'a' + shift + atual) % 26;

        printf("%c", palavra[i]);

ant2 = ant1;
ant1 = atual;

}


    printf("\n");


    return 0;
}


