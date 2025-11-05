#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_c1, estado_c2;
  char codigo_c1[10], codigo_c2[10];
  char nomeCity_c1[20], nomeCity_c2[20];
  int populacao_c1, populacao_c2;
  float area_c1, area_c2;
  float pib_c1, pib_c2;
  int pontTuris_c1, pontTuris_c2;
  
  // Área para entrada de dados

  printf("-- Carta 1 | Entrada -- \n");
  // Estado
  printf("Letra do estado: ");
  scanf(" %c", &estado_c1);
  // Codigo Carta
  printf("Codigo da carta: ");
  scanf(" %s", codigo_c1);
  // Nome Cidade
  printf("Nome da Cidade: ");
  scanf(" %s", nomeCity_c1);
  // Populacao
  printf("Populacao: ");
  scanf(" %d", &populacao_c1);
  // Area
  printf("Area em km: ");
  scanf(" %f", &area_c1);
  // PIB
  printf("PIB: ");
  scanf(" %f", &pib_c1);
  // Pontos Turisticos
  printf("Pontos turisticos: ");
  scanf(" %d", &pontTuris_c1);

  printf("\n-- Carta 2 | Entrada -- \n");
  // Estado
  printf("Letra do estado: ");
  scanf(" %c", &estado_c2);
  // Codigo Carta
  printf("Codigo da carta: ");
  scanf(" %s", codigo_c2);
  // Nome Cidade
  printf("Nome da Cidade: ");
  scanf(" %s", nomeCity_c2);
  // Populacao
  printf("Populacao: ");
  scanf(" %d", &populacao_c2);
  // Area
  printf("Area em km: ");
  scanf(" %f", &area_c2);
  // PIB
  printf("PIB: ");
  scanf(" %f", &pib_c2);
  // Pontos Turisticos
  printf("Pontos turisticos: ");
  scanf(" %d", &pontTuris_c2);

  // Área para exibição dos dados da cidade
  printf("\n -- Carta 1 | Resultado -- \n");
  printf("Letra do Estado: %c \n", estado_c1);
  printf("Codigo da carta: %s \n", codigo_c1);
  printf("Nome da cidade: %s \n", nomeCity_c1);
  printf("Populacao: %d \n", populacao_c1);
  printf("Area em Km: %.2f \n", area_c1);
  printf("PIB: %.2f \n", pib_c1);
  printf("Pontos turisticos: %d \n", pontTuris_c1);

  printf("\n --- Carta 2 | Resultado --- \n");
  printf("Letra do Estado: %c \n", estado_c2);
  printf("Codigo da carta: %s \n", codigo_c2);
  printf("Nome da cidade: %s \n", nomeCity_c2);
  printf("Populacao: %d \n", populacao_c2);
  printf("Area em Km: %.2f \n", area_c2);
  printf("PIB: %.2f \n", pib_c2);
  printf("Pontos turisticos: %d \n", pontTuris_c2);
return 0;
} 
