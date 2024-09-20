#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int cont = 0;


    printf("Digite uma string: ");
    fgets(palavra, sizeof(palavra), stdin);

   
    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A') {
            cont++;
        }
    }

    
    if (cont > 0) {
        printf("O texto informado tem  %d vez(es) a letra 'a'.\n", cont);
    } else {
        printf("A letra 'a' não foi encontrada no texto.\n");
    }

    return 0;
}