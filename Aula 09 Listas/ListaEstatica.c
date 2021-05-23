#include "ListaEstatica.h"
#include <stdio.h>


void criarLista(TLista *lista){
  lista->primeiro = 0;
  lista->ultimo = 0;
}

int inserirFinal(TLista *lista, int elemento){
  lista->itens[lista->ultimo] = elemento;
  lista->ultimo = lista->ultimo +1;
  return 1;
}

void imprimirLista(TLista *lista){
  for (int i = lista->primeiro; i < lista->ultimo; i++ ){
    printf("Posição %d: %d\n", i, lista->itens[i]);
  }
}

