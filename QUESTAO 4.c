#include <stdio.h>
#include <stdlib.h>  
#include <time.h>     

int main(void) {
    int NumSecreto, palpite;

    srand(time(NULL));

    NumSecreto = rand() % 100 + 1;

    do {
        printf("Digite um número (palpite) de 1 a 100: ");
        scanf("%d", &palpite);

        if (palpite == NumSecreto) {
            printf("Parabéns, você acertou! \n");
        } else if (palpite > NumSecreto) {
            printf("Muito alto, tente um número menor! \n");
        } else {
            printf("Muito baixo, tente um número maior! \n");
        }

    } while (palpite != NumSecreto);

}