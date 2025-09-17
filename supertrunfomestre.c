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
        int escolheAtribA1;
        int escolheAtribA2;
        int escolheAtribB1;
        int escolheAtribB2;

        //Armazena valor e nome e soma de atributos para briga
        float brigaCardA1;
        float brigaCardA2;
        float brigaCardB1;
        float brigaCardB2;
        char brigaNomeCardA1 [35];
        char brigaNomeCardA2 [35];
        char brigaNomeCardB1 [35];
        char brigaNomeCardB2 [35];
        float somaBrigaCardA;
        float somaBrigaCardB;
        

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


        //escolhe atributo para briga CARTA1
        printf ("----HORA DE JOGAR----\n");
        printf ("Escolha dois atributos diferentes que deseja usar para briga da CARTA 1\n");
        printf ("1- População\n2- Área\n3- PIB\n4- Pontos Turisticos\n5- Densidade Populacional\n");
        printf ("Escolha primeiro atributo: ");
        scanf ("%d", &escolheAtribA1);
        printf ("Escolha segundo atributo: ");
        scanf ("%d", &escolheAtribA2);


        //Testa se atributos CARTA 1 são diferentes
        if (escolheAtribA1 != escolheAtribA2){

        //switch para gravar informações do primeiro atributo da primeira carta
        
            switch (escolheAtribA1)
        {
        case 1:
            brigaCardA1 = populacao1;
            strcpy (brigaNomeCardA1, "População");
            break;
        case 2:
            brigaCardA1 = area1;
            strcpy (brigaNomeCardA1, "Área");
            break;
        case 3:
            brigaCardA1 = pib1;
            strcpy (brigaNomeCardA1, "PIB");
            break;
        case 4:
            brigaCardA1 = numturismo1;
            strcpy (brigaNomeCardA1, "Numero de Pontos Turisticos");
            break;
        case 5:
            brigaCardA1 = densPopulacional1;
            strcpy (brigaNomeCardA1, "Densidade populacional");
            break;    
        default:
            break;
        }

        //switch para gravar informações do segundo atributo da primeira carta
         switch (escolheAtribA2)
        {
        case 1:
            brigaCardA2 = populacao1;
            strcpy (brigaNomeCardA2, "População");
            break;
        case 2:
            brigaCardA2 = area1;
            strcpy (brigaNomeCardA2, "Área");
            break;
        case 3:
            brigaCardA2 = pib1;
            strcpy (brigaNomeCardA2, "PIB");
            break;
        case 4:
            brigaCardA2 = numturismo1;
            strcpy (brigaNomeCardA2, "Numero de Pontos Turisticos");
            break;
        case 5:
            brigaCardA2= densPopulacional1;
            strcpy (brigaNomeCardA2, "Densidade populacional");
            break;    
        default:
            break;
        }


        //escolhe atributo para briga CARTA 2
        printf ("Escolha dois atributos diferentes que deseja usar para briga da CARTA 2\n");
        printf ("1- População\n2- Área\n3- PIB\n4- Pontos Turisticos\n5- Densidade Populacional\n");
        printf ("Escolha primeiro atributo: ");
        scanf ("%d", &escolheAtribB1);
        printf ("Escolha segundo atributo: ");
        scanf ("%d", &escolheAtribB2);


        //Testa se atributos são diferentes
        if (escolheAtribB1 != escolheAtribB2){

        //switch para gravar informações do primeiro atributo da segunda carta
            switch (escolheAtribB1)
        {
        case 1:
            brigaCardB1 = populacao2;
            strcpy (brigaNomeCardB1, "População");
            break;
        case 2:
            brigaCardB1 = area2;
            strcpy (brigaNomeCardB1, "Área");
            break;
        case 3:
            brigaCardB1 = pib2;
            strcpy (brigaNomeCardB1, "PIB");
            break;
        case 4:
            brigaCardB1 = numturismo2;
            strcpy (brigaNomeCardB1, "Numero de Pontos Turisticos");
            break;
        case 5:
            brigaCardB1 = densPopulacional2;
            strcpy (brigaNomeCardB1, "Densidade populacional");
            break;    
        default:
            break;
        }

        //switch para gravar informações do segundo atributo da segunda carta
         switch (escolheAtribB2)
        {
        case 1:
            brigaCardB2 = populacao2;
            strcpy (brigaNomeCardB2, "População");
            break;
        case 2:
            brigaCardB2 = area2;
            strcpy (brigaNomeCardB2, "Área");
            break;
        case 3:
            brigaCardB2 = pib2;
            strcpy (brigaNomeCardB2, "PIB");
            break;
        case 4:
            brigaCardB2 = numturismo2;
            strcpy (brigaNomeCardB2, "Numero de Pontos Turisticos");
            break;
        case 5:
            brigaCardB2= densPopulacional2;
            strcpy (brigaNomeCardB2, "Densidade populacional");
            break;    
        default:
            break;
        }


        //soma dos atributos de cada carta
        somaBrigaCardA = brigaCardA1 + brigaCardA2;
        somaBrigaCardB = brigaCardB1 + brigaCardB2;

         //Exibe informações coletadas das cartas
            printf ("------RESULTADO-----\n");
            printf ("\n");
            printf ("++CARTA 1++ \nPais: %s\nPrimeiro atributo escolhido: %s\nSegundo atributo escolhido: %s\nValor do 1º atributo: %.2f\nValor do 2º atributo: %.2f\nSoma dos dois atributos: %.2f\n", pais1, brigaNomeCardA1, brigaNomeCardA2, brigaCardA1,brigaCardA2,somaBrigaCardA);
            printf ("\n");
            printf ("++CARTA 2++ \nPais: %s\nPrimeiro atributo escolhido: %s\nSegundo atributo escolhido: %s\nValor do 1º atributo: %.2f\nValor do 2º atributo: %.2f\nSoma dos dois atributos: %.2f\n", pais2, brigaNomeCardB1, brigaNomeCardB2, brigaCardB1,brigaCardB2,somaBrigaCardB);
            printf ("\n");
            printf ("\n");
    
        //testa se a soma dos atributos é igual para exibir empate
        if (somaBrigaCardA != somaBrigaCardB)
        {
            //testa se soma crta um é maior que soma carta 2
            somaBrigaCardA > somaBrigaCardB ?  printf ("CARTA 1 GANHOUU!!"):printf ("CARTA 2 GANHOUU!!");
        } else{
            printf ("EMPATOUUU!!\n");
        }

        }else{
            printf ("Você escolheu atributos iguais na carta 2 e isso não é permitido, escolha novamente !\n");
        }

        }else{
            printf ("Você escolheu atributos iguais na carta 1 e isso não é permitido, escolha novamente !\n");
        }

        return 0;

    }

