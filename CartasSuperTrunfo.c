#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigoCarta[3];
  char cidade[50];
  int populacao;
  float areaKm2;
  float pib;
  int numeroPontosTuristicos;

  // Área para entrada de dados
  printf("Digite o estado da carta: \n");
  scanf("%c", &estado);

  printf("Digite o codigo: \n");
  scanf("%s", codigoCarta);

  printf("Digite a cidade: \n");
  scanf("%s", cidade);
  
  printf("Digite o numero de habitantes da cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a area em km2: \n");
  scanf("%f", &areaKm2);

  printf("Digite o numero do PIB da cidade: \n");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turísticos da cidade: \n");
  scanf("%d", &numeroPontosTuristicos);

  // Área para exibição dos dados da cidade
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigoCarta);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", areaKm2);
  printf("PIB: %f\n", pib);
  printf("Número de Pontos Turísticos: %d", numeroPontosTuristicos);

  return 0;
} 
