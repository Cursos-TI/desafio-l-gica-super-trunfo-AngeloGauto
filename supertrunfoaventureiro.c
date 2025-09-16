#include <stdio.h>
#include <string.h>


    int main (){
        
        //declaração de variaveis das cartas
        char pais1 [25], pais2 [25];
        int populacao1, populacao2;
        float area1, area2; 
        float pib1, pib2;
        int numturismo1, numturismo2;

        //declaração variaveis calculos
        float densPopulacional1, densPopulacional2;

        //declara variaveis de escolha de atributos para briga cartão 1 e 2
        int escolheAtrib1;
        int escolheAtrib2;

        //Armazena valor e nome para briga
        float brigaCard1;
        float brigaCard2;
        char brigaNomeCard1 [35];
        char brigaNomeCard2 [35];
        

        //recolhe dados da primeira carta
        printf ("Olá, vamos jogar super trunfo ? digite os dados de sua primeira carta. \n");
        printf ("Digite seu pais: ");
        scanf ("%s", pais1);
        printf ("Digite a populacao de seu pais: ");
        scanf ("%d", &populacao1);
        printf ("Digite a area de sua cidade em km²: ");
        scanf ("%f", &area1);
        printf ("Digite o PIB da cidade: ");
        scanf ("%f", &pib1);
        printf ("Digite numero de pontos turisticos da cidade: ");
        scanf ("%d", &numturismo1);
        

        //recolhe dados da segunda carta
        printf("\n");
        printf ("Digite os dados da segunda carta. \n");
        printf ("Digite seu pais: ");
        scanf ("%s", pais2);
        printf ("Digite a populacao de seu pais: ");
        scanf ("%d", &populacao2);
        printf ("Digite a area de sua cidade em km²: ");
        scanf ("%f", &area2);
        printf ("Digite o PIB da cidade: ");
        scanf ("%f", &pib2);
        printf ("Digite numero de pontos turisticos da cidade: ");
        scanf ("%d", &numturismo2);

        //calcula densidade populacional carta 1 e 2
        densPopulacional1 = (float) populacao1 / area1;
        densPopulacional2 = (float) populacao2 / area2;

        //inverte densidade populacional para jogar
        densPopulacional1 = 1 / densPopulacional1;
        densPopulacional2 = 1 / densPopulacional2;


        //escolhe atributo para briga carta 1
        printf ("Escolha qual atributo deseja usar para briga da CARTA 1\n");
        printf ("1- População\n2- Área\n3- PIB\n4- Pontos Turisticos\n5- Densidade Populacional\nEscolha: ");
        scanf ("%d", &escolheAtrib1);

        switch (escolheAtrib1)
        {
        case 1:
            brigaCard1 = populacao1;
            strcpy (brigaNomeCard1, "População");
            break;
        case 2:
            brigaCard1 = area1;
            strcpy (brigaNomeCard1, "Área");
            break;
        case 3:
            brigaCard1 = pib1;
            strcpy (brigaNomeCard1, "PIB");
            break;
        case 4:
            brigaCard1 = numturismo1;
            strcpy (brigaNomeCard1, "Numero de Pontos Turisticos");
            break;
        case 5:
            brigaCard1 = densPopulacional1;
            strcpy (brigaNomeCard1, "Densidade populacional");
            break;    
        default:
            break;
        }

        //escolhe atributo para briga carta 2
        printf ("\n");
        printf ("Escolha qual atributo deseja usar para briga da CARTA 2\n");
        printf ("1- População\n2- Área\n3- PIB\n4- Pontos Turisticos\n5- Densidade Populacional\nEscolha: ");
        scanf ("%d", &escolheAtrib2);

        switch (escolheAtrib2)
        {
        case 1:
            brigaCard2 = populacao2;
            strcpy (brigaNomeCard2, "População");
            break;
        case 2:
            brigaCard2 = area2;
            strcpy (brigaNomeCard2, "Área");
            break;
        case 3:
            brigaCard2 = pib2;
            strcpy (brigaNomeCard2, "PIB");
            break;
        case 4:
            brigaCard2 = numturismo2;
            strcpy (brigaNomeCard2, "Numero de Pontos Turisticos");
            break;
        case 5:
            brigaCard2 = densPopulacional2;
            strcpy (brigaNomeCard2, "Densidade populacional");
            break;    
        default:
            break;
        }


        if (brigaCard1 != brigaCard2)
        {
            if (brigaCard1 > brigaCard2)
            {
                //Exibe ganhador
                printf ("\n");
                printf ("------RESULTADO-----\n");
                printf ("\n");
                printf ("CARTA 1 \nPais: %s\nEscolha de atributo: %s\nValor do atributo: %.4f\n", pais1, brigaNomeCard1, brigaCard1);
                printf ("\n");
                printf ("CARTA 2 \nPais: %s\nEscolha de atributo: %s\nValor do atributo: %.4f\n", pais2, brigaNomeCard2, brigaCard2);
                printf ("\n");
                printf ("\n");
                printf ("CARTA 1 GANHOUU!!\n");
            }else{
                //Exibe ganhador
                printf ("\n");
                printf ("------RESULTADO-----\n");
                printf ("\n");
                printf ("CARTA 1 \nPais: %s\nEscolha de atributo: %s\nValor do atributo: %.4f\n", pais1, brigaNomeCard1, brigaCard1);
                printf ("\n");
                printf ("CARTA 2 \nPais: %s\nEscolha de atributo: %s\nValor do atributo: %.4f\n", pais2, brigaNomeCard2, brigaCard2);
                printf ("\n");
                printf ("\n");
                printf ("CARTA 2 GANHOUU!!\n");
            }
            
        }else{

            //Exibe ganhador
                printf ("\n");
                printf ("------RESULTADO-----\n");
                printf ("\n");
                printf ("CARTA 1 \nPais: %s\nEscolha de atributo: %s\nValor do atributo: %.4f\n", pais1, brigaNomeCard1, brigaCard1);
                printf ("\n");
                printf ("CARTA 2 \nPais: %s\nEscolha de atributo: %s\nValor do atributo: %.4f\n", pais2, brigaNomeCard2, brigaCard2);
                printf ("\n");
                printf ("\n");
                printf ("EMPATOUUU!!\n");
        }
        
        return 0;

    }

