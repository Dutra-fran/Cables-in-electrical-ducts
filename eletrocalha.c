/*
Criado dia: 28/05/2019
Créditos: Robson Dutra
*/

#include <stdio.h>
int main(){
    float AreaEletrocalha, Largura, Altura;
    float AreaCabo, pi, Raio;
    float DiametroNominal;
    float TaxaX;
    int cont=10000;
    int QuantCabos=0;
    int opcoes=0;

    pi = 3.1415;    

    printf("\nBem vindo ao programa que vai calcular o tanto de cabos que podem passar na sua eletrocalha!");

    printf("\n\n---------------");
    printf("\n\tEletrocalha :v");
    printf("\nDigite a Largura em milimetros: ");
    scanf("%f", &Largura);

    printf("Digite a Altura em milimetros: ");
    scanf("%f", &Altura);

    AreaEletrocalha = Largura * Altura;

    printf("\n---------------");
    printf("\n\tCabos :V");
    
    printf("\nDigite o Diametro nominal: ");
    scanf("%f", &DiametroNominal);

    Raio = DiametroNominal / 2;
    
    AreaCabo = pi * (Raio * Raio);

    printf("\n---------------");
    printf("\n\tTaxa de ocupação dos cabos na eletrocalha :V\n");
    
    printf("\n\nopções abaixo:");
    
    while(cont > 0){
       --cont;
       QuantCabos++;

       TaxaX = (QuantCabos * AreaCabo) / AreaEletrocalha;

       if(TaxaX >= 0.4 && TaxaX <= 0.6){
           opcoes++;
           printf("\n\t%d. Taxa de ocupação: %1.2f\n", opcoes, TaxaX);
           printf("\n\tQuantidades de Cabos que passam pela Eletrocalha: %d\n", QuantCabos);
       }
    }
    return 0;
}
