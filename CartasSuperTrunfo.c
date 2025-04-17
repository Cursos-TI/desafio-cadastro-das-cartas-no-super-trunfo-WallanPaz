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
float DensidadePopulacional;
float PIBperCapita;
float SuperPoder;

//segunda carta

char estado2;
char codigo2[8];
char NomeCidade2[8];
int populacao2;
float Area2;
float PIB2;
int NumerosdePontosTuristicos2;
float DensidadePopulacional2;
float PIBperCapita2;
float SuperPoder2;

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

  
    //Calculando Densidade Populacional; 

    DensidadePopulacional = (float) populacao / Area;
    DensidadePopulacional2 = (float) populacao2 / Area2;

    // //Calculando PIB per Capita; 

    PIBperCapita = (float) PIB / populacao;
    PIBperCapita2 = (float) PIB2 / populacao2;

    //super poder;

    SuperPoder = populacao + Area + PIB + NumerosdePontosTuristicos + PIBperCapita - DensidadePopulacional;
    SuperPoder2 = populacao2 + Area2 + PIB2 + NumerosdePontosTuristicos2 + PIBperCapita2 - DensidadePopulacional2;




     //comparando;
   

     printf(" \n\n Comparação de Cartas: \n");


     printf("\n populacao:                               carta %d venceu (%d) ", ((populacao < populacao2) < 1 ) +1  ,   populacao < populacao2);
 
     printf("\n Area:                                    carta %d venceu (%d) ", ((Area < Area2)  < 1 ) +1 ,   Area < Area2);
 
     printf("\n PIB:                                     carta %d venceu (%d) ", ((PIB < PIB2)  < 1 ) +1 ,   PIB < PIB2);
 
     printf("\n NumerosdePontosTuristicos:               carta %d venceu (%d) ", ((NumerosdePontosTuristicos < NumerosdePontosTuristicos2)  < 1 ) +1 ,   NumerosdePontosTuristicos < NumerosdePontosTuristicos2);
 
     printf("\n DensidadePopulacional:                   carta %d venceu (%d) ", ((DensidadePopulacional > DensidadePopulacional2) < 1 ) +1 ,   DensidadePopulacional > DensidadePopulacional2);
 
     printf("\n PIBperCapita:                            carta %d venceu (%d) ", ((PIBperCapita < PIBperCapita2)  < 1 ) +1 ,   PIBperCapita < PIBperCapita2);
 
     printf("\n SuperPoder:                              carta %d venceu (%d)\n ", ((SuperPoder < SuperPoder2)  < 1 ) +1 ,   SuperPoder < SuperPoder2);
 

return 0;
}
