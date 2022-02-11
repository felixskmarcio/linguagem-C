#include "AB2.h"
#define MAX 10
#define INFINITO 9999


    void Dijkstra(int graficos[MAX][MAX], int n, int iniciar) {
    int valor[MAX][MAX], distancia[MAX], pred[MAX];
    int visitado[MAX], contagem, mindistancia, proximo_no, i, j;

    for (i = 0; i < n; i++) // Criando valor da matriz
    for (j = 0; j < n; j++)
    if (graficos[i][j] == 0)
        valor[i][j] = INFINITO;
    else
    valor[i][j] = graficos[i][j];

    for (i = 0; i < n; i++){
    distancia[i] = valor[iniciar][i];
    pred[i] = iniciar;
    visitado[i] = 0;
    }

  distancia[iniciar] = 0;
  visitado[iniciar] = 1;
  contagem = 1;

  while (contagem < n - 1){
    mindistancia = INFINITO;

    for (i = 0; i < n; i++)
      if (distancia[i] < mindistancia && !visitado[i])
      {
        mindistancia = distancia[i];
        proximo_no = i;
      }

    visitado[proximo_no] = 1;
    for (i = 0; i < n; i++)
      if (!visitado[i])
        if (mindistancia + valor[proximo_no][i] < distancia[i])
        {
          distancia[i] = mindistancia + valor[proximo_no][i];
          pred[i] = proximo_no;
        }
    contagem++;
  }

  for (i = 0; i < n; i++)
    if (i != iniciar)
        {
        printf("\nDistancia da fonte ate %d: %d", i, distancia[i]); // Imprimindo a distancia
        }
}

