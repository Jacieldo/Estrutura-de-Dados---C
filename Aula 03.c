#include <stdio.h>

int main(void){
  int vet[4]; //O inteiro tem o tamanho de 4Bytes (incrementa a  cada 4)
  printf("O endereço da primeira posição é %p\n", &vet[0]);

  printf("O endereço da primeira posição é %p\n", &vet[1]);

  printf("O endereço da primeira posição é %p\n", &vet[2]);

  printf("O endereço da primeira posição é %p\n", &vet[3]);
  //O arrey é armazenado de forma sequencial

  // %p => é usado para imprimir o endereço de memória
  // & => é usado antes de uma variável pra o endereço de memória

  double vet1[4]; // double tem mamanho de 8Bytes (incrementa a cada 8)
  printf("\n\n");
  printf("O endereço da primeira posição é %p\n", &vet1[0]);

  printf("O endereço da primeira posição é %p\n", &vet1[1]);

  printf("O endereço da primeira posição é %p\n", &vet1[2]);

  printf("O endereço da primeira posição é %p\n", &vet1[3]);

  printf("\n\n");

  vet[2] = 5;
  vet1[3] = 9.6;

  printf("Vet[2] = %d\n", vet[2]);
  printf("Endereço de vet[2] ná memória é: %p\n\n", &vet[2]);

  printf("Vet1[3] = %1f\n", vet1[3]);
  printf("Endereço de vet[2] ná memória é: %p\n\n", &vet1[3]);


  int vet3[] = {1, 3, 5, 7, 9};
  //printf("Vet3[3] = %d\n", vet3[3]);
  //printf("Endereço de vet3[3] ná memória é: %p\n\n", &vet3[3]);

  //**LAÇO DE REPETIÇÃO PARA ESCREVER

  for(int i = 0; i <= 4; i++){
    printf("A posição %d do vet3 tem valor %d\n", i, vet3[i]);
    printf("\t endereço na memória: %p\n", &vet3[i]);
  }

  return 0;
}