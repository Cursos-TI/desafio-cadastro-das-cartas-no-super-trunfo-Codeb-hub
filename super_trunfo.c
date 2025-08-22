#include <stdio.h>
int main(){
    char estado [3];
    char codigo[4];
    char cidade [50];
    int  populacao;
    float area;
    float PIB;
    int turisticos;
    float DensidadePopulacional;
    float PIBPerCapita;
/*Os dados acima são, respectivamente, dados referente a: Estado, Código da carta,
Nome da cidade, População, Área em quilometros quadrado, PIB, Número de pontos tu
rísticos, Densidade Populacional e PIB per capita*/
   
// Dados da primeira carta
printf("Digite a seguir os dados de uma carta: \n");
printf("Insira o nome do estado: \n");
scanf("%1s", estado);

printf("Insira o código da carta: \n");
scanf("%3s", codigo);

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


/* Dados a seguir da segunda carta*/

char estado2[3];
char codigo2[4];
char cidade2 [50]; 
int populacao2;
float area2;
float PIB2;
int turisticos2;
float DensidadePopulacional2;
float PIBPerCapita2;

// Dados da segunda carta
printf("Agora, digite os dados de outra carta: \n");
printf("Insira o nome do estado: \n");
scanf("%1s", estado2);

printf("Insira o código da carta: \n");
scanf("%3s", codigo2);

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



//Apresentação para o usuário dos dados das duas cartas decritas anteriormente
printf("Os dados da primeira carta. \n" "Estado: %s - Código da carta: %s - Nome da cidade: %s - Quantidade populacional: %d - "
    "Área da cidade (km^2): %.2f km^2 - PIB da cidade: %f - Quantidade de pontos turísticos: %d \n" "Densidade Populacional (área/km^2): %.2f área/km^2 - PIB per Capita: %.2f reais \n",estado,codigo, cidade, populacao, area, PIB, turisticos, DensidadePopulacional, PIBPerCapita);

printf("Os dados da segunda carga. \n" "Estado: %s - Código da carta: %s - Nome da cidade: %s - Quantidade populacional: %d - "
    "Área da cidade (km^2): %.2f km^2 - PIB da cidade: %f - Quantidade de pontos turísticos: %d \n" "Densidade Populacional (área/km^2): %.2f área/km^2 - PIB per Capita: %.2f reais \n", estado2, codigo2, cidade2, populacao2, area2, PIB2,turisticos2, DensidadePopulacional2, PIBPerCapita2);



    return 0;

    

}
