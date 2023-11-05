#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

//Nikollas Verlys
int verificaParImpar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numeroInicial, numeroFinal, contadorPares = 0;

    printf("Digite o número inicial: ");
    scanf("%d", &numeroInicial);

    printf("Digite o número final: ");
    scanf("%d", &numeroFinal);


    for (int i = numeroInicial; i <= numeroFinal; i++) {
        if (verificaParImpar(i)) {
            printf("%d é um número par.\n", i);
            contadorPares++;
        } else {
            printf("%d é um número ímpar.\n", i);
        }
    }

    printf("Total de números pares encontrados: %d\n", contadorPares);

    return 0;
}