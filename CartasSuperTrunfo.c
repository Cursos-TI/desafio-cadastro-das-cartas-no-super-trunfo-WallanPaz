#include <stdio.h>

int main(){
//primeira carta

char estado;
char codigo[8];
char NomeCidade[8];
int populacao;
float Area;
float PIB;
int NumerosdePontosTuristicos;


//segunda carta

char estado2;
char codigo2[8];
char NomeCidade2[8];
int populacao2;
float Area2;
float PIB2;
int NumerosdePontosTuristicos2;


//primeira carta

printf("vamos montar os dados da primeira carta   \n\n");

    printf("insira a letra do estado da carta:  ");
    scanf(" %c",&estado);
    
    printf("insira o codigo da carta:  ");
    scanf("%s",codigo);

    printf("insira o nome da cidade:  ");
    scanf("%s",NomeCidade);

    printf("insira a população da carta:  ");
    scanf(" %d",&populacao);

    printf("insira a Área da carta em metros:  ");
    scanf(" %f",&Area);

    printf("insira o PIB da carta:  ");
    scanf(" %f",&PIB);

    printf("insira o Numeros de Pontos Turisticos da carta:  ");
    scanf(" %d",&NumerosdePontosTuristicos);

    


    //segunda carta

    printf("\n\nvamos montar os dados da segunda carta   \n\n");

    printf("insira a letra do estado da carta:  ");
    scanf(" %c",&estado2);
    

    printf("insira o codigo da carta:  ");
    scanf(" %s",codigo2);

    printf("insira o nome da cidade:  ");
    scanf(" %s",NomeCidade2);

    printf("insira a população da carta:  ");
    scanf(" %d",&populacao2);

    printf("insira a Área da carta:  ");
    scanf(" %f",&Area2);

    printf("insira o PIB da carta:  ");
    scanf(" %f",&PIB2);

    printf("insira o Numeros de Pontos Turisticos da carta:  ");
    scanf(" %d",&NumerosdePontosTuristicos2);

    printf(" primeira carta \n\nestado: %c\ncodigo: %s\nNomeCidade: %s\npopulacao: %d\nArea: %.2f metros\n PIB: %.2f\nNumerosdePontosTuristicos: %d\n", estado , codigo, NomeCidade, populacao, Area, PIB, NumerosdePontosTuristicos);
    printf("\n\nsegunda carta \n\nestado: %c\ncodigo: %s\nNomeCidade: %s\npopulacao: %d\nArea: %.2f metros\nPIB: %.2f\nNumerosdePontosTuristicos: %d\n", estado2 , codigo2, NomeCidade2, populacao2, Area2, PIB2, NumerosdePontosTuristicos2 );

return 0;
}
