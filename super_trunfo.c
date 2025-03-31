#include <stdio.h>

//Introdução e apresentação do programa
int main(){
printf("Desafio Super Trunfo!\n");
printf("Insira os dados da Carta N°1 \n");

//Variáveis
int Populacao1;
int Populacao2;
float Area1;
float Area2;
float PIB1;
float PIB2;
int Numero1;
int Numero2;
char Estado1[50];
char Estado2[50];
char Codigo1[50];
char Codigo2[50];
char Nome1[50];
char Nome2[50];
float DensidadePopulacional1;
float PerCapita1;
float DensidadePopulacional2;
float PerCapita2;


//Inicio do desafio

//Escolha uma letra de 'A' a 'H' representando um dos oito estados
printf("Estado: \n");
scanf("%s" , &Estado1);

//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
printf("Código da Carta: \n");
scanf("%s" , &Codigo1);

//Escolha o nome da cidade
printf("Nome da Cidade: \n");
scanf("%s" , &Nome1);

//O número de habitantes da cidade
printf("População: \n");
scanf("%i" , &Populacao1);

//A área da cidade em quilômetros quadrados
printf("Área(em km²): \n");
scanf("%f" , &Area1);

//O Produto Interno Bruto da cidade
printf("PIB: \n");
scanf("%f" , &PIB1);

//A quantidade de pontos turísticos na cidade
printf("Número de Pontos Turísticos: \n");
scanf("%i" , &Numero1);

//Informações da primeira carta:
printf("Dados das Cartas \n");
printf("Carta 01: \n");
printf("Estado: %s\n" , Estado1);
printf("Código da Carta: %s\n" , Codigo1);
printf("Nome da Cidade: %s\n", Nome1);
printf("População:  %i\n" , Populacao1);
printf("Área(em km²): %f\n", Area1);
printf("PIB: %f\n", PIB1);
printf("Número de Pontos Turísticos: %i\n", Numero1);

//Agora insira os dados da segunda carta
printf("Insira os dados da Carta N°2 \n");

//Escolha uma letra de 'A' a 'H' representando um dos oito estados
printf("Estado: \n");
scanf("%s" , &Estado2);

//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
printf("Código da Carta: \n");
scanf("%s" , &Codigo2);

//Escolha o nome da cidade
printf("Nome da Cidade: \n");
scanf("%s" , &Nome2);

//O número de habitantes da cidade
printf("População: \n");
scanf("%i" , &Populacao2);

//A área da cidade em quilômetros quadrados
printf("Área(em km²): \n");
scanf("%f" , &Area2);

//O Produto Interno Bruto da cidade
printf("PIB: \n");
scanf("%f" , &PIB2);

//A quantidade de pontos turísticos na cidade
printf("Número de Pontos Turísticos: \n");
scanf("%i" , &Numero2);

//Informações da segunda carta:
printf("Carta 02: \n");
printf("Estado: %s\n" , Estado2);
printf("Código da Carta: %s\n" , Codigo2);
printf("Nome da Cidade: %s\n" , Nome2);
printf("População: %i\n", Populacao2);
printf("Área(em km²): %f\n" , Area2);
printf("PIB: %f\n" , PIB2);
printf("Número de Pontos Turísticos: %i\n" , Numero2);
return 0;
}