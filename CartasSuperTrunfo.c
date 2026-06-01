#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20] = "A";
  char estado2[20] = "B";
  char codigo1[20] = "A01";
  char codigo2[20] = "B01";
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos_turisticos1, pontos_turisticos2;

  // Área para entrada de dados
  // Cadastro da primeira carta
  printf("Cadastro da Carta 1\n");
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a população: ");
  scanf("%d", &populacao1);
  printf("Digite a área: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);
  printf("Carta 1 - Cadastro completo:\n");

  // Cadastro da segunda carta
  printf("\nCadastro da Carta 2\n");
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("Digite a área: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);
  printf("Carta 2 - Cadastro completo:\n\n");

  // Área para exibição dos dados da cidade
  printf("Dados carta 1\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("\n");

  printf("Dados carta 2\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos_turisticos2);

return 0;
} 
