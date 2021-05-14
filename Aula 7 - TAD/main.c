//Aula de TADss (TIPOS ABSTRATOS DE DADOS)
#include <stdio.h>
#include "conta.h"

/* TAD -> encapsula a estrutura de dados.
USUÁRIO DE TAD x PROGRAMADOR DE TAD

TAD  guarda as informações, funções e estruturas

*/
int main(void) {
  TContaBancaria minhaConta;

  printf("EXTRATO\n");
  iniciarConta(&minhaConta, 90, 8.0);
  imprimirSaldo(&minhaConta);

  printf("SAQUE\n");
  sacar(&minhaConta, 3.0);
  imprimirSaldo(&minhaConta);


  printf("DEPOSITO\n");
  depositar(&minhaConta, 15);
  imprimirSaldo(&minhaConta);

  return 0;
}