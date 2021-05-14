#include <stdio.h>
#include "conta.h"

void iniciarConta(TContaBancaria *conta,int numero, float saldoInicial){
  conta->numConta = numero;
  conta->saldo = saldoInicial;
}

void imprimirSaldo(TContaBancaria *conta){
  printf("O Saldo bancário da conta n°: %d é %.2f\n\n", conta->numConta, conta->saldo);
}

void sacar(TContaBancaria *conta, float valorSaque){
  conta->saldo -= valorSaque;
}

void depositar(TContaBancaria *conta, float ValorDeposito){
  conta->saldo += ValorDeposito;
}

