# include <stdio.h>
# include <stdlib.h>

void main(){
    int x = 0;                           // criando uma variavel inteira.
    printf("Valor de x: %d\n",x);
    x++;                                 // incrementando x em uma unidade
    printf("Valor de x: %d\n",x);
    float y = 12.345678;                 // criando uma variavel real. 
    printf("Valor de y: %f\n",y);        // imprimindo o valor y com apenas duas casas.
    printf("Valor de y: %.2f\n",y);
    char sexo = 'M';                     // variavel que aceita i caracter. 
    printf("sexo: %C\n",sexo);          // criando uma variavel string (texto).
    char nome [30] = "Ronei M";          // variavel que aceita 30 caracter no maximo.
    printf("nome: %s\n",nome);           // imprimindo a primeira letra do nome 
    printf("primeira letra: %c\n",nome[0]);
    printf("ola mundo!");
}