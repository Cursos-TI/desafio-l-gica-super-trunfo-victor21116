#include <stdio.h>

int main (){
    char estado01[50], estado02[50];
    char codigo01[10], codigo02[10];
    char cidade01[50], cidade02[50];
    unsigned long int populacao01, populacao02;
    int pontoturistico01, pontoturistico02;

    float area01, area02, pib01, pib02;
    float densidade1, densidade2;
    int atributo1, atributo2;
    int valorTotal1 = 0, valorTotal2 = 0;


//Ler os dados da carta 01

    printf("Carta 01\n Digite o nome do Estado: ");
    fgets(estado01, 50, stdin);

    printf("Digite agora o código da carta: ");
    scanf(" %9s", codigo01);
    //Coloquei a função getchar pra limpar o buffer 
    getchar();

    printf("Nome da cidade: ");
    fgets(cidade01, 50, stdin);

    printf("Qual o número da população: ");
    scanf("%lu", &populacao01);

    printf("Área em km²: ");
    scanf("%f", &area01);

    printf("Digite o pib: ");
    scanf("%f", &pib01);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturistico01);

    densidade1 = (float) populacao01 / area01; //calculo da densidade populacional 


//Ler os dados da carta 02
    
    getchar();
    printf("Carta 02\n Digite o nome do Estado: ");
    fgets(estado02, 50, stdin);

    printf("Digite agora o código da carta: ");
    scanf(" %9s", codigo02);
    getchar();

    printf("Nome da cidade: ");
    fgets(cidade02, 50, stdin);

    printf("Qual o número da população: ");
    scanf("%lu", &populacao02);

    printf("Área em km²: ");
    scanf("%f", &area02);

    printf("Digite o pib: ");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturistico02);

    densidade2 = (float)populacao02 / area02;


    printf("\n\nInformações da carta 01!!!\n");
    printf("Carta 01\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado01, codigo01, cidade01);
    printf("População: %lu\n Área: %.2fkm²\n Pib: %.2f\n Pontos Turísticos: %d\n", populacao01,area01, pib01, pontoturistico01);
    printf("A densidade populacional é de %.2f\n\n", densidade1);

    printf("\n\nInformações da carta 02!!!\n");
    printf("Carta 02\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado02, codigo02, cidade02);
    printf("População: %lu\n Área: %.2fkm²\n Pib: %.2f\n Pontos Turísticos: %d\n", populacao02, area02, pib02, pontoturistico02);
    printf("A densidade populacional é de %.2f\n\n", densidade2);
    
    printf("Iremos comparar dois atributos!\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. Populção!\n");
    printf("2. Área!\n");
    printf("3. PIB!\n");
    printf("4. Pontos Turísticos!\n");
    printf("5. Densidade Demográfica!\n");
    scanf(" %d", &atributo1);

    printf("Agora digite o segundo atributo: \n");
    if (atributo1 != 1)printf("1. Populção!\n");
    if (atributo1 != 2)printf("2. Área!\n");
    if (atributo1 != 3)printf("3. PIB!\n");
    if (atributo1 != 4)printf("4. Pontos Turísticos!\n");
    if (atributo1 != 5)printf("5. Densidade Demográfica!\n");
    scanf("%d", &atributo2);

    switch(atributo1){
        case 1:
            if (populacao01 > populacao02){
                valorTotal1++;
            }else{
                valorTotal2++;
            }
            break;
        case 2:
            if(area01 > area02){
                valorTotal1++;
            }else{
                valorTotal2++;
            }
            break;
        case 3:
            if(pib01>pib02){
                valorTotal1++;

            }else{
                valorTotal2 ++;
            }
            break;
        case 4:
            if (pontoturistico01> pontoturistico02){
                valorTotal1++;
            }else{
                valorTotal2++;
            }
            break;
        case 5:
            if(densidade1<densidade2){
                valorTotal1++;
            }else{
                valorTotal2++;
            }
            break;
    }
    switch(atributo2){
        case 1:
            (populacao01 > populacao02) ? valorTotal1++ : valorTotal2++;
            break;
        case 2:
            (area01 > area02) ? valorTotal1++ : valorTotal2++;
            break;
        case 3:
            (pib01>pib02) ? valorTotal1++ : valorTotal2 ++;
            break;
        case 4:
            (pontoturistico01> pontoturistico02)? valorTotal1++ : valorTotal2++;
            break;
        case 5:
            (densidade1<densidade2) ? valorTotal1++ : valorTotal2++;
            break;
    }
    printf("O resultado Final!\n");
    if (valorTotal1>valorTotal2){
        printf("%s Venceu contra %s!\n", estado01, estado02);

    }else if (valorTotal2 > valorTotal1){
        printf("%s Venceu contra %s!\n", estado02, estado01);
    }else{
            printf("Empate!\n");
    }
    return 0;
}