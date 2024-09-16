#include <stdio.h>
int main(){
   //soma do custo + porcentagem do distribuidor + impostos.
   //calcular o custo total do carro

   float custoFabrica, pctDistri,  impostos, custoTotal;
   printf("Digite o custo da fabrica: ");
   scanf("%f", &custoFabrica);
   printf("Digite a porcentagem do distribuidor: ");
   scanf("%f", &pctDistri);
   printf("Digite o imposto: ");
   scanf("%f", &impostos);
   custoTotal =custoFabrica + ((pctDistri/100) * custoFabrica) + ((impostos/100)*custoFabrica);
   printf("O custo total para o consumidor e de: %.2f",custoTotal);


}