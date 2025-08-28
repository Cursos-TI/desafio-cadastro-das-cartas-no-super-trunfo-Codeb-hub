#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){


    /*Dados da primeira carta para facilitar a visualição do jogador e saber qual atributo escolher*/
char pais [6];
int populacao = 216;
float area = 8.5;
float PIB = 2.17;
int PontosTuristicos = 25;
float DensidadeDemografica = (float) populacao / area;

printf("Dados da CARTA1\n");
printf("País: Brasil\n");
printf("População: 216mi\n");
printf("Área: 8.5mi km^2\n");
printf("PIB: 2.17tri\n");
printf("Pontos Turísticos: 25\n"); //Os dados de pontos turísticos foram só um exemplo pois não havia dizendo ao certo quantos exatamente.

/*Dados da segunda carta*/
char pais2 [6];
int populacao2 = 40;
float area2 = 10.0;
float PIB2 = 2.14;
int PontosTuristicos2 = 22;
float DensidadeDemografica2 = (float) populacao2 / area2;

printf("Dados da CARTA2\n");
printf("País: Canadá\n");
printf("População: 40mi\n");
printf("Área:10mi km^2\n");
printf("PIB: 2.14tri\n");
printf("Pontos Turísticos: 22\n"); //Os dados de pontos turísticos foram só um exemplo pois não havia dizendo ao certo quantos exatamente.


//Comparação das cartas
int atributo;
printf("###Com base nas informações adquiridas sobre as cartas, qual atributo você escolhe para comparar as cartas?###\n");
printf("1.População\n");
printf("2.Área\n");
printf("3.PIB\n");
printf("4.Pontos Turísticos\n"); 
printf("5.Densidade Demográfica\n");
printf("Insira um número:\n");
scanf("%d", &atributo);

switch (atributo)
{
case 1:
    printf("1.População\n");
    if (populacao>populacao2) 
   {
        printf("Carta 1 Brasil - venceu!\n");
    } else
    {
        printf("Carta 1 Brasil - perdeu!\n");
    }
    
    
    break;
    case 2:
    printf("2.Área km^2\n");
    if (area>area2) 
   {
        printf("Carta 2 Canadá- venceu!\n");
    } else
    {
        printf("Carta 2 Canadá - perdeu!\n");
    }
    
    break;
    case 3:
    printf("3.PIB\n");
    if (PIB>PIB2) 
   {
        printf("Carta 1 Brasil - venceu!\n");
    } else
    {
        printf("Carta 1 Brasil - perdeu\n");
    }
    
    break;
    case 4:
    printf("4.Pontos Turíticos\n");
    if (PontosTuristicos>PontosTuristicos2) 
   {
        printf("Carta 1 Brasil - venceu!\n");
    } else
    {
        printf("Carta 1 Brasil - perdeu\n");
    }
    
    break;
    case 5:
    printf("5.Densidade Demográfica\n");
    if (DensidadeDemografica>DensidadeDemografica2) 
   {
        printf("Carta 2 Canadá - venceu!\n");
    } else
    {
        printf("Carta 2 Canadá - perdeu\n");
    }
    
    break;
default:
printf("Opção Inválida!");
    break;
}



}
