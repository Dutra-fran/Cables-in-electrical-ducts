/*
Criado dia: 28/05/2019
Créditos: Robson Dutra
*/

#include <stdio.h>
int main(){
    float AreaEletrocalha, Largura, Altura; // Variáveis relacionado a eletrocalha. Tais como: a largura e a altura, ambos em milimetros, e a área da eletrocalha que resulta do produto da largura e a altura.
    float AreaCabo, pi, Raio, DiametroNominal; // Variáveis relacionadas ao cálculo da área do cabo.
    float TaxaX; // Variável que vai receber o valor da Taxa de Ocupação dos cabos na eletrocalha. Tem que estar entre 40% e 60%.
    int cont=1000000; // Variável que vai servir de contagem para o loop while terminar o processo de contagem das possibilidades existentes de colocar tantos cabos na eletrocalha.
    int QuantCabos=0; // Variável que vai receber o valor da quantidade de cabos.
    int opcoes=0; // Variável para mostrar quantas opções existem para satisfazer a condição de ocupação de cabos na eletrocalha.

    pi = 3.1415; // Valor do pi

    printf("\nBem vindo ao programa que vai calcular o tanto de cabos que podem passar na sua eletrocalha!");

    printf("\n\n---------------");
    printf("\n\tEletrocalha :v");
    printf("\nDigite a Largura em milimetros: ");
    scanf("%f", &Largura); // Recebimento dos dados da largura informado pelo usuário.

    printf("Digite a Altura em milimetros: ");
    scanf("%f", &Altura); // Recebimento dos dados da altura informado pelo usuário.

    AreaEletrocalha = Largura * Altura; // Fórmula da área da eletrocalha.

    printf("\n---------------");
    printf("\n\tCabos :V");
    
    printf("\nDigite o Diametro nominal: ");
    scanf("%f", &DiametroNominal); // Recebimento de dados sobre o Diâmetro Nominal do cabo.

    Raio = DiametroNominal / 2; // O raio é a metade do diâmetro.
    
    AreaCabo = pi * (Raio * Raio); // Área do cabo. Como o cabo é redondo, ele acaba recebendo a fórmula da área da circunferência/circulo.

    printf("\n---------------");
    printf("\n\tTaxa de ocupação dos cabos na eletrocalha :V\n");
    
    printf("\n\nopções abaixo:");
    
    while(cont > 0){
       --cont; // Toda vez que esse loop se repetir, essa variável irá reduzir uma unidade do seu valor total.
       QuantCabos++; // Toda vez que esse loop se repetir, essa variável irá se auto-incrementar.

       TaxaX = (QuantCabos * AreaCabo) / AreaEletrocalha; // Fórmula da taxa de ocupação dos cabos na eletrocalha.

       if(TaxaX >= 0.4 && TaxaX <= 0.6){
           // Se a taxa de ocupação estiver entre 40% e 60%, esse bloco de códigos irá executar.
           opcoes++; // toda vez que esse laço condicional for executado, essa variável irá se auto-incrementar.
           printf("\n\t%d. Taxa de ocupação: %1.2f\n", opcoes, TaxaX);
           printf("\n\tQuantidades de Cabos que passam pela Eletrocalha: %d\n", QuantCabos);
       }
    }
    return 0; // Se o programa tiver chegado até o final sem nenhum erro, irá retornar 0.
}
