#include <stdio.h>
#include <stdlib.h>

void q1() {
   
    printf("ronei mota!\n");
    
}

    void q2(){
        printf("30*27 = %d\n", 30*27);
    }
        void q3(){
        float media = (5+8+12)/3.0;
        printf("media de 5,8,12 e igual a %.1F\n", media);
        }
            void q4(){
            int num = 0;
                printf("digite um valor numerico inteiro: ");
                scanf("%d",&num);
                printf("o valor digitado foi %d\n", num);


            }


int main() {
    q1();
    q2();
    q3();
    q4();
    return EXIT_SUCCESS;
}