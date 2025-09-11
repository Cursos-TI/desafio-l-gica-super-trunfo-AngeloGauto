#include <stdio.h>


    int main (){
        
        //declaração de variaveis das cartas
        char estado1, estado2;
        char codigocarta1 [4], codigocarta2 [4];
        char cidade1 [10], cidade2 [10];
        int populacao1, populacao2;
        float area1, area2; 
        float pib1, pib2;
        int numturismo1, numturismo2;

        //declaração variaveis calculos
        float denspopulacional1, denspopulacional2;
        float pibpercap1, pibpercap2;
        

        //recolhe dados da primeira carta
        printf ("Olá, vamos jogar super trunfo ? digite os dados de sua primeira carta. \n");
        printf ("Digite uma letra de A a H representando seu estado: ");
        scanf (" %c", &estado1);
        printf ("Digite código da carta. (letra do estado e numero de 01 a 04): ");
        scanf ("%s", codigocarta1);
        printf ("Digite sua cidade: ");
        scanf ("%s", cidade1);
        printf ("Digite a populacao de sua cidade: ");
        scanf ("%d", &populacao1);
        printf ("Digite a area de sua cidade em km²: ");
        scanf ("%f", &area1);
        printf ("Digite o PIB da cidade: ");
        scanf ("%f", &pib1);
        printf ("Digite numero de pontos turisticos da cidade: ");
        scanf ("%d", &numturismo1);
        

        //recolhe dados da segunda carta
        printf("\n");
        printf ("Digite os dados de sua segunda carta. \n");
        printf ("Digite uma letra de A a H representando seu estado: ");
        scanf (" %c", &estado2);
        printf ("Digite código da carta. (letra do estado e numero de 01 a 04): ");
        scanf ("%s", codigocarta2);
        printf ("Digite sua cidade: ");
        scanf ("%s", cidade2);
        printf ("Digite a populacao de sua cidade: ");
        scanf ("%d", &populacao2);
        printf ("Digite a area de sua cidade em km²: ");
        scanf ("%f", &area2);
        printf ("Digite o PIB da cidade: ");
        scanf ("%f", &pib2);
        printf ("Digite numero de pontos turisticos da cidade: ");
        scanf ("%d", &numturismo2);

        //calcula densidade populacional carta 1 e 2
        denspopulacional1 = (float) populacao1 / area1;
        denspopulacional2 = (float) populacao2 / area2;

        //calcula pib per capita carta 1 e 2
        pibpercap1 = (float) pib1 / populacao1;
        pibpercap2 = (float) pib2 / populacao2;

        //Exibe atributos cooletados (população)
        printf ("\n");
        printf ("Exibe vencedor (Atributo: População\n");
        printf ("\n");
        printf ("CARTA 1 \nCidade: %s\nPopulação: %d\n", cidade1, populacao1);
        printf ("CARTA 2 \nCidade: %sa\nPopulação: %d\n", cidade2, populacao2);


        //testa carta vencedora
        if (populacao1 > populacao2)
        {
           printf ("A carta 1 Ganhou\n");
        }else{
           printf ("A carta 2 Ganhou\n");
        }
        
        return 0;

    }


