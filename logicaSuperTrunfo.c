#include <stdio.h>

int main (){
    char estado01[50], estado02[50];
    char codigo01[10], codigo02[10];
    char cidade01[50], cidade02[50];
    unsigned long int populacao01, populacao02;
    int pontoturistico01, pontoturistico02;

    float area01, area02, pib01, pib02;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;

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
    pibpercapita1 = pib01 / (float)populacao01; //calculo do PIB per capita
    //declarando o desafio 
    float superpoder1, superpoder2;
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
    pibpercapita2 =  pib02 / (float)populacao02;
    superpoder1 = populacao01 + area01 + pib01 + pontoturistico01 + pibpercapita1 + (1.0 / densidade1);
    superpoder2 = populacao02 + area02 + pib02 + pontoturistico02 + pibpercapita2 + (1.0 / densidade2);


    

    printf("Informações da carta 01!!!\n");
    printf("Carta 01\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado01, codigo01, cidade01);
    printf("População: %lu\n Área: %.2fkm²\n Pib: %.2f\n Pontos Turísticos: %d\n", populacao01,area01, pib01, pontoturistico01);
    printf("A densidade populacional é de %.2f\n", densidade1);

    printf("Informações da carta 02!!!\n");
    printf("Carta 02\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado02, codigo02, cidade02);
    printf("População: %lu\n Área: %.2fkm²\n Pib: %.2f\n Pontos Turísticos: %d\n", populacao02, area02, pib02, pontoturistico02);
    printf("A densidade populacional é de %.2f\n", densidade2);

    
    printf("\n\nComparações entre as cartas 01 e 02:\n");

    
    if(populacao01 > populacao02){
        printf("A população de %s venceu!", estado01);  
    }else{
        printf("A população de %s Venceu!", estado02);
    }

    if(area01 > area02){
        printf("A área da cidade %s é maior que a de %s!\n", cidade01, cidade02);
    }else{
        printf("A área da cidade %s é maior que a de %s!\n", cidade02, cidade01);
    }

    if(pib01 > pib02){
        printf("O pib de %s venceu!\n", estado01);
    }else{
        printf("O pib de %s venceu!\n", estado02);
    }

    if(pontoturistico01 > pontoturistico02){
        printf("%s possui mais pontos turísticos!",estado01);
    }else{
        printf("%s possui mais pontos turísticos!", estado02);
    }
    return 0;

}