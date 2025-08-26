#include <stdio.h>
int main(){
    char estado [6] = "P";
    char codigo[6] = "P01";
    char cidade [50] = "Igarassu";
    int  populacao = 122312;
    float area = 306879;
    float PIB = 3500000;
    int turisticos = 5;
    unsigned long long int DensidadePopulacional ;
    float PIBPerCapita;
    /*Os dados acima são, respectivamente, dados referente a: Estado, Código da carta,
Nome da cidade, População, Área em quilometros quadrado, PIB, Número de pontos tu
rísticos, Densidade Populacional, PIB per capita e o Super Poder da carta 1*/


DensidadePopulacional = populacao / area; 
printf("A densidade Populacional da primeira carta é: %.2f área/km^2\n", DensidadePopulacional);

PIBPerCapita =PIB / populacao;
printf("O PIBPerCapita da primeira carta é: %u reais\n", PIBPerCapita);   



/* Dados a seguir da segunda carta*/
char estado2[6] = "P";
char codigo2[6] = "P02";
char cidade2 [50] = "Paulista"; 
int populacao2 = 3500000000;
float area2 = 9352;
float PIB2 = 5600000000;
int turisticos2 = 6;
unsigned long long int DensidadePopulacional2;
float PIBPerCapita2;

DensidadePopulacional2 =populacao2 / area2;
printf("A densidade populacional da segunda carta é: %.2f área/km^2\n", DensidadePopulacional2);

PIBPerCapita2 =PIB2 / populacao2;
printf("O PIBPerCapita da segunda carta é: %u reais\n",PIBPerCapita2);


//Comparação das cartas

printf("Comparação das duas cartas. Atributo (Área):\n");

printf("Carta 1 - Igarassu(PE):306,879 km^2 \n");
printf("Carta 2 - Paulista(PE):93,52 km^2\n");
if(area > area2){
    printf("Resultado: Carta 1 - Igarassu(PE) venceu!\n");
}else{
    printf("Resultado: Carta 2 - Paulista(PE) venceu!\n");
}



return 0;

    

}
