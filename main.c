#include <stdio.h>

int main(void) {
  int var1 = 2, *pt1;//O * define que é um ponteiro
  int var2 = 6, *pt2;//Se não tiver o * vai ser uma variável normal e qualquer
  float var3 = 8, *pt3;// O ponteiro só pode trabalhar com uma variável do mesmo tipo
  pt1 = &var1;//O ponteiro pt1 recebe o gurda o endereço da variável var1

  printf("O conteúdo da v ar1 é: %d\n", var1);
  printf("O conteúdo da var2 é: %d\n", var2);
  printf("O conteúdo da v é: %p\n", pt1);
  printf("O conteúdo da va é: %p\n", &pt1);
  printf("O conteúdo da var é: %d\n", *pt1);
  printf("O conteúdo da var3 é: %.2f\n\n", var3);

  printf("***MOSTRANDO O ENDEREÇO DA MEMÓRIA***\n");

  printf("O Endereço da var1 é: %p\n", &var1);//O & faz referência ao endereço na memória e chama o valor contido na referencia
  printf("O Endereço da var2 é: %p\n", &var2);
  printf("O Endereço da var3 é: %p\n\n", &var3);

  printf("O conteúdo de pt1 é: %p, que é o endereço da var1!\n",pt1);
  printf("O conteúdo da variável que pt1 faz referencia é: %d\n\n",*pt1);

  var1 = 18;
  printf("O conteúdo da variável que pt1 faz referencia é: %d\n",*pt1);  
  printf("O conteúdo de pt1 é: %p, que é o endereço da var1!\n\n",pt1);

  *pt1 = 8000;

  printf("O conteúdo de var1 é: %d\n", var1);
  printf("O Endereço de var1 é: %p\n\n", &var1);

  pt1 = &var2;//a variável pt1 recebeu o endereço de var2
  printf("Agora o endereço armazenado em pt1 é%d\n\n", *pt1);

  printf("pt1: %p\n\n",pt1);




  //   *****ARITIMÉTICA DE PONTEIRO*****

  printf("O resultado do incremento do pt1: %p\n\n",(pt1 +1));
  
  
  // (pt = 108)--    pt++:    pt= 112 (para inteiros)
  // (*pt) = é igual ao valor contido na variavel --- ++(*pt) vai somar o valor que tem dentro da variável. (++*pt) primeiro soma e continua com o código e (*pt++) segue o código e depois soma

//  ******VETORES******
printf("MOSTRANDO ENDEREÇOS DE VETORES\n");
  int vetor[4];
  printf("O endereço da posição [0] é: %p\n", &vetor[0]);
  printf("O endereço da posição [1] é: %p\n", &vetor[1]);
  printf("O endereço da posição [2] é: %p\n", &vetor[2]);
  printf("O endereço da posição [3] é: %p\n\n", &vetor[3]);

  printf("O endereço do vetor vai ser dado pela 1° posição do vetor, que da a referencia para os demais. Ele só aponta onde começa, já que sabe quantas posições tem o vetor. Endereço de vetor: %p",&vetor);

  return 0;
}