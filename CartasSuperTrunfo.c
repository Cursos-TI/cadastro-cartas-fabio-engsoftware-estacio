#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Tema 2 - Calculo de atributos derivados
// Objetivo: No nível intermediário, além de cadastrar as cartas, você deve calcular os atributos derivados, como densidade populacional (população/área) e PIB per capita (PIB/população) e exibir esses valores junto com os outros atributos da carta.

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
  float densidade1, densidade2;
  float pib_per_capita1, pib_per_capita2;
  int pontos_turisticos1, pontos_turisticos2;

  // Área para entrada de dados
  // Cadastro da primeira carta
  printf("Cadastro da Carta 1\n");
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  getchar();  // Limpa o buffer
  printf("Digite a população: ");
  scanf("%d", &populacao1);
  getchar();  // Limpa o buffer
  printf("Digite a área: ");
  scanf("%f", &area1);
  getchar();  // Limpa o buffer
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  getchar();  // Limpa o buffer
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);
  getchar();  // Limpa o buffer
  densidade1 = (float) populacao1 / area1;
  pib_per_capita1 = (float) (pib1 * 1000000000.0) / populacao1; // Convertendo o PIB de bilhões para reais e depois dividindo pela população para obter o PIB per capita
  printf("Carta 1 - Cadastro completo:\n");

  // Cadastro da segunda carta
  printf("\nCadastro da Carta 2\n");
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("Digite a área: ");
  scanf("%f", &area2);
  getchar();  // Limpa o buffer
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  getchar();  // Limpa o buffer
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);
  densidade2 = (float) populacao2 / area2;
  pib_per_capita2 = (float) (pib2 * 1000000000.0) / populacao2;
  printf("Carta 2 - Cadastro completo:\n\n");

  // Área para exibição dos dados da cidade
  printf("Carta 1\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capita: %.2f reais\n", pib_per_capita1);
  printf("\n");

  printf("Carta 2\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capita: %.2f reais\n", pib_per_capita2);

return 0;
} 
