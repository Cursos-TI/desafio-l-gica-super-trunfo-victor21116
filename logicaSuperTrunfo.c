#include <stdio.h>

int main (){
    char estado01[50], estado02[50];
    char codigo01[10], codigo02[10];
    char cidade01[50], cidade02[50];
    unsigned long int populacao01, populacao02;
    int pontoturistico01, pontoturistico02;

    float area01, area02, pib01, pib02;
    float densidade1, densidade2;

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


    printf("Informações da carta 01!!!\n");
    printf("Carta 01\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado01, codigo01, cidade01);
    printf("População: %lu\n Área: %.2fkm²\n Pib: %.2f\n Pontos Turísticos: %d\n", populacao01,area01, pib01, pontoturistico01);
    printf("A densidade populacional é de %.2f\n", densidade1);

    printf("Informações da carta 02!!!\n");
    printf("Carta 02\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado02, codigo02, cidade02);
    printf("População: %lu\n Área: %.2fkm²\n Pib: %.2f\n Pontos Turísticos: %d\n", populacao02, area02, pib02, pontoturistico02);
    printf("A densidade populacional é de %.2f\n", densidade2);

    int opcao;
    printf("Escolha um atributo para comparar entre as cartas:\n");
    printf("1 - População\n2 - Área\n3 - Pib\n4 - Pontos turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Comparando População!\n");

            if (populacao01 > populacao02){
                printf("%s venceu em população %s!\n", estado01, estado02);
            }else if(populacao02 > populacao01){
                printf("%s venceu em população %s!\n", estado02, estado01);
            }else{
                printf("%s e %s empatam em Populção!\n", estado01, estado02);
            }
            break;

            case 2:
                printf("Comparando área!\n");
                
                if(area01 > area02){
                    printf("%s venceu em área %s!\n", estado01, estado02);
                }else if(area01< area02){
                    printf("%s venceu em área %s!\n", estado02, estado01);
                }else{
                    printf("%s e %s empatam em área!\n", estado01, estado02);
                }
                break;
            case 3:
                printf("Companrado PIB!\n");

                if(pib01 > pib02){
                    printf("%s venceu em PIB %s!\n", estado01, estado02);
                }else if(pib01 < pib02){
                    printf("%s venceu em PIB %s!\n", estado02, estado01);
                }else{
                    printf("%s e %s empatam em PIB!\n", estado01, estado02);
                }
                break;

            case 4:
                printf("Comparando Pontos Turísticos!\n");

                if(pontoturistico01 > pontoturistico02){
                    printf("%s venceu %s em Pontos Turísticos!\n", estado01, estado02);
                }else if(pontoturistico02 > pontoturistico01){
                    printf("%s venceu %s em Pontos Turísticos!\n", estado02, estado01);
                }else{
                    printf("%s e %s  empatam em Pontos Turísticos!\n", estado01, estado02);
                }
                break;
            case 5:
                printf("Comparando densidade demográfica!\n");

                if(densidade1 < densidade2){
                    printf("%s vence em densidade demográfica %s!\n", estado01, estado02);

                }else if (densidade2 < densidade1) {
                    printf("%s vence em densidade demográfica %s!\n", estado02, estado01);
                }else{
                    printf("%s e %s empatam em densidade demográfica!\n", estado01, estado02);

                }
                break;
                default:
                    printf("Opção inválida!\n");


    }
    return 0;
    

}