#include <stdio.h>


int PertenceFibonacci(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }

    int a = 0, 
    b = 1, 
    proximo = 0;

    
    while (proximo < num) {
        proximo = a + b;
        a = b;
        b = proximo;
    }

    
    return proximo == num;
}



int main() {
    int num;

    
    printf("Informe um número: ");
    scanf("%d", &num);
    
     if (PertenceFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }
    
    
    int a = 0, 
    b = 1, 
    proximo = 0;

    printf("Sequência de Fibonacci: %d, %d", a, b);

    while (proximo <= num) {
        proximo = a + b;
        if (proximo > num) {
            break;
        }
        printf(", %d", proximo);
        a = b;
        b = proximo;
    }
    printf("\n");

    return 0;
}