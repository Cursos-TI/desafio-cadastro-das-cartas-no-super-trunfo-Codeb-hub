#include <stdio.h>
int main(){
    char estado [6] = "P";
    char codigo[6] = "P01";
    char cidade [50] = "Igarassu";
    unsigned long int  populacao = 122312;
    float area = 305;
    float PIB = 3500000;
    int turisticos = 5;
    float DensidadePopulacional;
    float PIBPerCapita;
    float SuperPoder;
/*Os dados acima são, respectivamente, dados referente a: Estado, Código da carta,
Nome da cidade, População, Área em quilometros quadrado, PIB, Número de pontos tu
rísticos, Densidade Populacional, PIB per capita e o Super Poder da carta 1*/
   
// Dados da primeira carta
printf("Digite a seguir os dados de uma carta: \n");
printf("Insira o nome do estado: \n");
scanf("%5s", estado);

printf("Insira o código da carta: \n");
scanf("%5s", codigo);

printf("Insira o nome da cidade: \n");
scanf("%49s", cidade);

printf("Insira a quantidade populacional: \n");
scanf("%d",&populacao);

printf("Insira a área da cidade (km^2):  \n");
scanf("%f", &area);

printf("Insira o PIB da cidade:  \n");
scanf("%f", &PIB);

printf("Insira o número dos pontos turísticos da cidade:  \n");
scanf("%d", &turisticos);

DensidadePopulacional = (float) populacao / area; 
PIBPerCapita = (float) PIB / populacao;
SuperPoder = (float) (populacao + area + PIB + turisticos + PIBPerCapita) + (1.0/DensidadePopulacional);



/* Dados a seguir da segunda carta*/

char estado2[6] = "P";
char codigo2[6] = "P02";
char cidade2 [50] = "Paulista"; 
unsigned long int populacao2 = 3500000000;
float area2 = 93;
float PIB2 = 5600000000;
int turisticos2 = 6;
float DensidadePopulacional2;
float PIBPerCapita2;
unsigned long int SuperPoder2;

// Dados da segunda carta
printf("Agora, digite os dados de outra carta: \n");
printf("Insira o nome do estado: \n");
scanf("%5s", estado2);

printf("Insira o código da carta: \n");
scanf("%5s", codigo2);

printf("Insira o nome da cidade: \n");
scanf("%49s", cidade2);

printf("Insira a quantidade populacional: \n");
scanf("%d", &populacao2);

printf("Insira a área da cidade (km^2): \n");
scanf ("%f", &area2);

printf("Insira o PIB da cidade: \n");
scanf("%f", &PIB2);

printf("Insira o número de pontos turísticos da cidade: \n");
scanf("%d", &turisticos2);

DensidadePopulacional2 = (float) populacao2 / area2;
PIBPerCapita2 = (float) PIB2 / populacao2;
SuperPoder2 = (float) (populacao2 + area2 + PIB2 + turisticos2 + PIBPerCapita2) + (1.0/DensidadePopulacional2);


//Apresentação para o usuário dos dados das duas cartas decritas anteriormente
printf("Os dados da primeira carta. \n" "Estado: %s - Código da carta: %s - Nome da cidade: %s - Quantidade populacional: %d - "
    "Área da cidade (km^2): %.2f km^2 - PIB da cidade: %f - Quantidade de pontos turísticos: %d \n" "Densidade Populacional (área/km^2): %.2f área/km^2 - PIB per Capita: %.2f reais \n",estado,codigo, cidade, populacao, area, PIB, turisticos, DensidadePopulacional, PIBPerCapita);

printf("Os dados da segunda carga. \n" "Estado: %s - Código da carta: %s - Nome da cidade: %s - Quantidade populacional: %d - "
    "Área da cidade (km^2): %.2f km^2 - PIB da cidade: %f - Quantidade de pontos turísticos: %d \n" "Densidade Populacional (área/km^2): %.2f área/km^2 - PIB per Capita: %.2f reais \n", estado2, codigo2, cidade2, populacao2, area2, PIB2,turisticos2, DensidadePopulacional2, PIBPerCapita2);


//Comparação das cartas

float comparacao1 = populacao > populacao2;
float comparacao2 = area > area2;
float comparacao3 = PIB > PIB2;
float comparacao4 = turisticos > turisticos2;
unsigned long int comparacao5 = DensidadePopulacional > DensidadePopulacional2;
float comparacao6 = PIBPerCapita > PIBPerCapita2;
float comparacao7 = SuperPoder > SuperPoder2;

printf("Coparação das cartas\n");
printf("População: Carta 2 venceu (%d)\n", comparacao1);
printf("Área: Carta 2 venceu (%d)\n", comparacao2);
printf("PIB: Carta 2 venceu (%d)\n", comparacao3);
printf("Pontos Turísticos: Carta 2 venceu (%d)\n", comparacao4);
printf("Densidade Populacional: Carta 2 venceu (%d)\n", comparacao5);
printf("PIB per capita: Carta 2 venceu (%d)\n", comparacao6);
printf("Super Poder: Carta 2 venceu (%d)\n", comparacao7);




return 0;

    

}
