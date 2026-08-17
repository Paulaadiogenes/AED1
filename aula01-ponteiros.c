#include <studio.h> 
#include <stdlib.h>
int mains (void) {
    int numero; 
    int* ponteiro = NULL;
    printf("digite o valor:");
    scanf("%d", &numero);
    ponteiro = &numero;
    printf("numero=%d" \n ponteiro=%p, numero, ponteiro);
    *ponteiro = 4; 
    printf("numero=%d" \n ponteiro=%p, numero, ponteiro);
    return 0;
}
