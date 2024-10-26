#include <stdio.h>
#include <stdlib.h> //https://github.com/ifmt-cba/lingprog20242
/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.

void q1() {
   
    printf("ronei mota!\n");
    
}
    //2. Faça um programa que imprima o produto dos valores 30 e 27.
    void q2(){
        printf("30*27 = %d\n", 30*27);
    }
        //3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.

        void q3(){
        float media = (5+8+12)/3.0;
        printf("media de 5,8,12 e igual a %.1F\n", media);
        }
           //4. Faça um programa que leia e imprima um número inteiro. 
            void q4(){
            int num = 0;
                printf("digite um valor numerico inteiro: ");
                scanf("%d",&num);
                printf("o valor digitado foi %d\n", num);
            }
                //5. Faça um programa que leia dois números reais e os imprima.
                void q5(){
                    float n,n1;
                    printf("digite um valor 1:"); 
                    scanf("%f",& n );
                    printf("digite o numero 2:");
                    scanf ("%f\n",& n1 );
                    printf("Os valores digitado foi: %f %f\n", n,n1);
                    }
                       //6. Faça um programa que leia um número inteiro e imprima o seu
                       //   antecessor e o seu sucessor.
                        void q6(){
                            float n;
                            printf("digite o numero :");
                            scanf("%f",&n);
                            printf("antecessor: %f e sucessor: %f\n",n-1, n+1);                      
                    }

                            //7. Faça um programa que leia o nome o endereço e o telefone de
                            //   um cliente e ao final, imprima esses dados.
                            void q7(){
                                char nome[50], endereco[50], telefone[14];

                                printf("digite seu nome:");
                                scanf("%s\n",nome);

                                printf("digite seu endereco:");
                                scanf("%s\n",endereco);

                                printf("digite seu telefone:");
                                scanf(" %s\n",telefone);

                                printf("%s\n%s\n%s\n",nome, endereco, telefone);
                            }

                                //8. Faça um programa que leia dois números inteiros e imprima
                                //   subtração deles.   
                                void q8(){
                                int n1,n2;
                                char subtracao;

                                printf("digite numero 1:");
                                scanf("%d\n",&n1);

                                printf("digite seu numero 2:");
                                scanf("%d\n",&n2);
                                subtracao = n1-n2;

                                printf("digite o resultado: %d", subtracao);
                                }


                                    //9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
                                    void q9(){
                                    int n1;
                                    float resultado;

                                    printf("digite numero 1:");
                                    scanf("%f",&n1);

                                    resultado = n1 / 4;

                                    printf("digite o resultado: %f\n", resultado);
                                    }

                                        //10. Faça um programa que leia três números reais e calcule a
                                        //    média aritmética destes números. Ao final, o programa deve
                                        //    imprimir o resultado do cálculo.
                                        void q10(){
                                        float n1,n2,n3,media;

                                        printf("digite numero 1:");
                                        scanf("%f",&n1);

                                        printf("digite numero 2:");
                                        scanf("%f",&n2);

                                        printf("digite numero 3:");
                                        scanf("%f",&n3);

                                        media = n1+n2+n3 / 3;

                                        printf("digite o resultado: %f\n", media);
                                        }

                                            //11. Faça um programa que leia dois números reais e calcule as
                                            //    quatro operações básicas entre estes dois números, adição,
                                            //    subtração,multiplicação e divisão. Ao final, o programa
                                            //    deve imprimir os resultados dos cálculos.
                                            void q11(){
                                            float n1,n2,resultado;

                                            printf("digite numero 1:");
                                            scanf("%f",&n1);

                                            printf("digite numero 2:");
                                            scanf("%f",&n2);

                                            resultado = n1+n2;

                                            printf("resultado da soma e:%f\n", resultado);
                                            resultado = n1-n2;

                                            printf("resultado da subtracao e:%f\n", resultado);                                        
                                            resultado = n1*n2;

                                            printf("resultado da multiplicacao e:%f\n", resultado);
                                            resultado = n1/n2;

                                            printf("resultado da divisao e:%f\n", resultado);
                                        
                                            }

                                            //12. Faça um programa que leia um número real e calcule o
                                            //    quadrado deste número. Ao final, o programa deve
                                            //    imprimir o resultado do cálculo.
                                            void q12(){
                                            float saldo,novo saldo;

                                            printf("digite numero 1:");
                                            scanf("%f",&n1);

                                            resultado = n1*n1;

                                            printf("resultado do quadrado e:%f\n", resultado);
                                            
                                            }

                                                //13. Faça um programa que leia o saldo de uma conta poupança e
                                                //    imprima o novo saldo, considerando um reajuste de 2%.



//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.



int main() {
//    q1();
//    q2();
//    q3();
//    q4();
//    q5();
//    q6();
//    q7();
//    q8();
//    q9();
//    q10();
//    q11();
q12();
    return EXIT_SUCCESS;
}




//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

