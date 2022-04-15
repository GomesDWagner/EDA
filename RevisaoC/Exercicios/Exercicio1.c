#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/*Dado um vetor de números inteiros v de tamanho n e um número k, retorne verdadeiro
se a soma de qualquer par de números em v for igual a k.
○ Exemplo: dado v = [10,15,3,7] e k = 17, a saída deve ser true, pois 10 + 7 é 17*/
int main() {
    int n, k, *v, i;
    
    printf("informe o tamanho do vetor: \n");
    scanf("%d", &n);
    //definindo tamanho do vetor
    v = (int *)malloc(n * sizeof(int));

    //inserindo valores no vetor
    for (i = 0; i < n; i++){
        scanf("%d", v[i]);
        
    }

    //exibindo valores
    printf("----------\n");

    for(i = 0; i <n; i++){
        printf("%d", v[i]);
    }
    printf("----------\n");
    printf("\n");

    
    /*
    printf("informe o valor de k: \n");
    scanf("%d", &k);
    */

    free(v);
    return 0;
}