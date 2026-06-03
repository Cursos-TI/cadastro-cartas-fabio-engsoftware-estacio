#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Tema 2 - Calculo de atributos derivados
// Objetivo: No nível intermediário, além de cadastrar as cartas, você deve calcular os atributos derivados, como densidade populacional (população/área) e PIB per capita (PIB/população) e exibir esses valores junto com os outros atributos da carta.
// Tema 3 - Comparação de cartas
// Objetivo: No nível avançado, após cadastrar as cartas e calcular os atributos derivados, você deve implementar uma comparação que avalie qual carta é "superior" com base em um critério específico (por exemplo, maior PIB per capita ou maior número de pontos turísticos) e exibir o resultado da comparação.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20] = "A";
  char estado2[20] = "B";
  char codigo1[20] = "A01";
  char codigo2[20] = "B01";
  char cidade1[20], cidade2[20];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  float densidade1, densidade2;
  float pib_per_capita1, pib_per_capita2;
  int pontos_turisticos1, pontos_turisticos2;
  float super_poder1, super_poder2;
  int resultado_comparacao_populacao, resultado_comparacao_area, resultado_comparacao_pib, resultado_comparacao_pontos_turisticos, resultado_comparacao_densidade, resultado_comparacao_pib_per_capita, resultado_comparacao_super_poder;

  // Área para entrada de dados
  // Cadastro da primeira carta
  printf("Cadastro da Carta 1\n");
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a população: ");
  scanf("%lu", &populacao1);
  printf("Digite a área: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);
  // Cálculo dos atributos derivados para a primeira carta
  densidade1 = (float) populacao1 / area1;
  pib_per_capita1 = (float) (pib1 * 1000000000.0) / populacao1; // Convertendo o PIB de bilhões para reais e depois dividindo pela população para obter o PIB per capita
  super_poder1 = (float) ((float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1)); // Exemplo de cálculo do super poder, somando os atributos e usando o inverso da densidade
  printf("Carta 1 - Cadastro completo:\n");

  // Cadastro da segunda carta
  printf("\nCadastro da Carta 2\n");
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população: ");
  scanf("%lu", &populacao2);
  printf("Digite a área: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);
  // Cálculo dos atributos derivados para a segunda carta
  densidade2 = (float) populacao2 / area2;
  pib_per_capita2 = (float) (pib2 * 1000000000.0) / populacao2;
  super_poder2 = (float) ((float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2)); // Exemplo de cálculo do super poder, somando os atributos e usando o inverso da densidade
  printf("Carta 2 - Cadastro completo:\n\n");

  // Área para comparação das cartas
  resultado_comparacao_populacao = populacao1 > populacao2;
  resultado_comparacao_area = area1 > area2;
  resultado_comparacao_pib = pib1 > pib2;
  resultado_comparacao_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
  resultado_comparacao_densidade = densidade1 < densidade2;
  resultado_comparacao_pib_per_capita = pib_per_capita1 > pib_per_capita2;
  resultado_comparacao_super_poder = super_poder1 > super_poder2;

  // Área para exibição dos dados da cidade
  printf("\n======================\n\n");
  printf("Carta 1\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capita: %.2f reais\n", pib_per_capita1);
  printf("Super Poder: %.2f\n", super_poder1);
  printf("\n");

  printf("Carta 2\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capita: %.2f reais\n", pib_per_capita2);
  printf("Super Poder: %.2f\n", super_poder2);

  // Área para exibição do resultado da comparação
  printf("\n======================\n\n");
  printf("Comparação de Cartas:\n");
  printf("População: Carta %d venceu (%d)\n", resultado_comparacao_populacao ? 1 : 2, resultado_comparacao_populacao);
  printf("Área: Carta %d venceu (%d)\n", resultado_comparacao_area ? 1 : 2, resultado_comparacao_area);
  printf("PIB: Carta %d venceu (%d)\n", resultado_comparacao_pib ? 1 : 2, resultado_comparacao_pib);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado_comparacao_pontos_turisticos ? 1 : 2, resultado_comparacao_pontos_turisticos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado_comparacao_densidade ? 1 : 2, resultado_comparacao_densidade);
  printf("PIB per capita: Carta %d venceu (%d)\n", resultado_comparacao_pib_per_capita ? 1 : 2, resultado_comparacao_pib_per_capita);
  printf("Super Poder: Carta %d venceu (%d)\n", resultado_comparacao_super_poder ? 1 : 2, resultado_comparacao_super_poder); 

  return 0;
} 
