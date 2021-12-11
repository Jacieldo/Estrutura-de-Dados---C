#include <stdio.h>

int main(void) {
  printf("Questão 01 - IRPF\n");
  int i = 0;
  int cont = 15;
  float salario; 
  int dependentes;
  float salminimo = 0;
  float imposto = 0;
  float base = 0;
  float irpf = 0;
  printf("Salário mínimo: ");
  scanf("%f",&salminimo);

  for (i = 0; i < cont; i++){
    printf("Dados do %d funcionário:\n", i + 1);
    
    printf("Salario: ");
    scanf("%f",&salario); 
    printf("Dependentes: ");
    scanf("%d", &dependentes);
    dependentes = dependentes * 189.59; //Desconto por dependentes, pesquisado na internet
    
    //O enunciado pede que o usuário entre com o valor, porém o calculo será feito no programa
    if (salario < 1903.99) {
      imposto = 0;
    } else if (salario < 4664.69){
      imposto = salario * 0.125;
    } else if (salario > 4664.68){
      imposto = salario * 0.225;
    }

    base = salario - imposto - dependentes;
    if ((base / salminimo) <= 5) {
      printf("Salário de R$ %.2f Está isento do Imposto de Renda.\n",base);
    }  else if ((base / salminimo) < 12) {
      irpf = base * 0.08;
      printf("Salário de R$ %.2f Imposto bruto de R$ %.2f\n",base, irpf);
    } else if ((base / salminimo) > 12) {
      irpf = base * 0.2;
      printf("Salário de R$ %.2f Imposto bruto de R$ %.2f\n",base, irpf);
    }
    //OBS, a formatação faz os arredondamentos
    printf("\n");
  }

  return 0;
}