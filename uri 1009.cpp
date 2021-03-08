#include<stdio.h>

int main() {
  char nome[50];
  double salario, vendas;

  scanf("%s", &nome);
  scanf("%lf %lf", &salario, &vendas);

  printf("TOTAL = R$ %.2lf\n", salario + (0.15*vendas));
}
