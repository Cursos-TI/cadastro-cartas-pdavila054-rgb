#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char País[40];
    char Estado[40];
    char Código_da_carta[20];
    char Nome_da_cidade[40];
    int População;
    float Area_em_km2;
    float PIB;
    int Número_de_pontos_turisticos;
    float Densidade_Populacional; 
    float PIB_per_capita;
    Densidade_Populacional = População / Area_em_km2;
    PIB_per_capita = PIB / População; 


  // Área para entrada de dados
    printf("Olá, seja bem vindo ao Super trunfo-Países!\n");

    printf("O Super Trunfo é um jogo de cartas onde cada carta possui atributos diferentes.\n");

    printf("Para o jogo começarserá necesario que você cadastre uma carta com os atributos do país.\n   ");

    printf("informe o nome do país: ");
    scanf("%s", País);

    printf("Agora, inoforme o nome de um estado desse país: ");
    scanf("%s", Estado);

    printf("Agora, informe o código da carta: ");
    scanf("%s", &Código_da_carta);

    printf("Agora, informe o nome de uma cidade: ");
    scanf("%s", &Nome_da_cidade);

    printf("Agora, informe a população desta cidade: ");
    scanf("%d", &População);

    printf("Agora, informe a área em km² desta cidade: ");
    scanf("%f", &Area_em_km2);

    printf("Agora, informe o PIB desta cidade: ");
    scanf("%f", &PIB);

    printf("Agora, informe o número de pontos turísticos que esta cidade possui: ");
    scanf("%d", &Número_de_pontos_turisticos);

    printf("Carta cadastrada com sucesso!\n");
    printf("Espere um momento, a sua carta esta sendo construida...\n");
  // Área para exibição dos dados da cidade

    printf("País: %s\n", País);
    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n", Código_da_carta);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("População: %d\n", População);
    printf("Área em km²: %.2f\n", Area_em_km2);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Número_de_pontos_turisticos);
    printf ("Densidade populacional: %.2f\n",Densidade_Populacional);
    printf("PIB per capita: %.2f\n", PIB_per_capita);


   printf("Agora vamos a carta do segundo jogador: \n");

   printf("informe o nome do país: ");
    scanf("%s", País);

    printf("Agora, inoforme o nome de um estado desse país: ");
    scanf("%s", Estado);

    printf("Agora, informe o código da carta: ");
    scanf("%s", &Código_da_carta);

    printf("Agora, informe o nome de uma cidade: ");
    scanf("%s", &Nome_da_cidade);

    printf("Agora, informe a população desta cidade: ");
    scanf("%d", &População);

    printf("Agora, informe a área em km² desta cidade: ");
    scanf("%f", &Area_em_km2);

    printf("Agora, informe o PIB desta cidade: ");
    scanf("%f", &PIB);

    printf("Agora, informe o número de pontos turísticos que esta cidade possui: ");
    scanf("%d", &Número_de_pontos_turisticos);

    printf("Estamos finalizando a sua carta, espere um momento...");

    printf("Carta cadastrada com sucesso!: ");


    printf("País: %s\n", País);
    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n", Código_da_carta);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("População: %d\n", População);
    printf("Área em km²: %.2f\n", Area_em_km2);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Número_de_pontos_turisticos);
    printf ("Densidade populacional: %.2f\n",Densidade_Populacional);
    printf("PIB per capita: %.2f\n", PIB_per_capita);

printf("SUPER TRUNFO FINALIZADO.");


return 0;

} 


