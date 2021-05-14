//1 - Cria-se as estruturas de dados que irão armazenar as informações


//Definição do tipo
typedef struct {
  int numConta;
  float saldo;
}TContaBancaria;


//Cabeçalho das Funções
void iniciarConta(TContaBancaria *conta, int numero, float saldoInicial);

void imprimirSaldo(TContaBancaria *conta);

void sacar(TContaBancaria *conta, float valorSaque);

void depositar(TContaBancaria *conta, float ValorDeposito);

