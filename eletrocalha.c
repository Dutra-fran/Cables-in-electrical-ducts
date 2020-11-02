/*
Criado dia: 28/05/2019
Última modificação: 04/06/2019
Créditos: Robson Dutra
Contato pra melhorarias: (85)985407927
*/

#include <stdio.h>

int main(){
    float AreaEletrocalha, Largura, Altura;
    float AreaCabo, pi, Raio;

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
    float DiametroNominal;
    printf("\nDigite o Diametro nominal: ");
    scanf("%f", &DiametroNominal);
    Raio = DiametroNominal / 2;
    int QuantCabos=0;
    
    AreaCabo = pi * (Raio * Raio);

    printf("\n---------------");
    printf("\n\tTaxa de ocupação dos cabos na eletrocalha :V\n");
    float TaxaX;
    int cont=10000;
    printf("\n\nopções abaixo:");
    
    int opcoes=0;
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