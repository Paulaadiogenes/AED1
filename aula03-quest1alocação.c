#include <stdio.h>
#include <stdlib.h> 

int main(void){
  int tamanho = 10, i;
  int * vetor = (int*) malloc (tamanho *sizeof(int));
  if (vetor == NULL){
    printf("erro ao alocar");
    exit(1);
  }
  else {

      printf("vetor alocado");

    }

  for(i=0; i<tamanho; i++){
      vetor[i]= i;
      printf("%d\t", vetor[i]);
}

return0;

}
