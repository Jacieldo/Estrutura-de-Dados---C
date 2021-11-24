#include <stdio.h>

int main(void) {
  
  printf("Digite 10 núúmeros inteiros:\n");
  int num[10]; //matriz de armazenamento
  int i = 0;

  //LENDO 10 NÚÚMEROS INTEIROS
  while (i < 10) {
    printf("%d - ", i + 1);
    scanf("%d",&num[i]); //Gravando na matriz
    i = i + 1;
  }

  //TESTANDO E SOMANDO OS PARES (SE HOUVER)
  int somaPar = 0;
  for (i = 0; i < 10; i++){
    if (num[i] % 2 == 0) {
      somaPar += num[i];
    }
  }
  printf("A soma dos núúmeros pares é: %d\n", somaPar);

  //TESTANDO E SOMANDO OS NÚMEROS PRIMOS
  int somaPrimos = 0;
  for (i = 0; i < 10; i++){ //laço para testar cada elemento da lista
    int primo = 0;
    for (int j = 1; j <= num[i]; j++){    
      if (num[i] % j == 0){ //Teste
        primo += 1; 
      }       
    }     
    if (primo == 2){
        somaPrimos += num[i]; //Soma dos núúmeoros primos
      }  
  }
  printf("A soma dos números primos é: %d\n", somaPrimos);
  
  return 0;
}