#define MAX 10

typedef struct{
  int itens[MAX];
  int primeiro;
  int ultimo;
}TLista;


void criarLista();
int inserirFinal(TLista *lista, int elemento);
void imprimirLista(TLista *lista);
