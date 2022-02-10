#include <stdio.h>
#define INFINITO 9999
#define MAX 10

int main(){
  int graficos[MAX][MAX], i, j, n, u;
  n = 7;

  graficos[0][0] = 0;
  graficos[0][1] = 2;
  graficos[0][2] = 0;
  graficos[0][3] = 1;
  graficos[0][4] = 0;
  graficos[0][5] = 5;
  graficos[0][6] = 0;

  graficos[1][0] = 0;
  graficos[1][1] = 0;
  graficos[1][2] = 2;
  graficos[1][3] = 0;
  graficos[1][4] = 0;
  graficos[1][5] = 3;
  graficos[1][6] = 0;

  graficos[2][0] = 1;
  graficos[2][1] = 2;
  graficos[2][2] = 0;
  graficos[2][3] = 1;
  graficos[2][4] = 3;
  graficos[2][5] = 0;
  graficos[2][6] = 0;

  graficos[3][0] = 2;
  graficos[3][1] = 0;
  graficos[3][2] = 1;
  graficos[3][3] = 0;
  graficos[3][4] = 0;
  graficos[3][5] = 0;
  graficos[3][6] = 1;

  graficos[4][0] = 0;
  graficos[4][1] = 0;
  graficos[4][2] = 3;
  graficos[4][3] = 0;
  graficos[4][4] = 0;
  graficos[4][5] = 2;
  graficos[4][6] = 0;

  graficos[5][0] = 0;
  graficos[5][1] = 3;
  graficos[5][2] = 0;
  graficos[5][3] = 0;
  graficos[5][4] = 2;
  graficos[5][5] = 0;
  graficos[5][6] = 1;

  graficos[6][0] = 0;
  graficos[6][1] = 0;
  graficos[6][2] = 0;
  graficos[6][3] = 1;
  graficos[6][4] = 0;
  graficos[6][5] = 1;
  graficos[6][6] = 0;

  u = 0;
  Dijkstra(graficos, n, u);

  return 0;
}

void Dijkstra(int graficos[MAX][MAX], int n, int iniciar) {
  int valor[MAX][MAX], distancia[MAX], pred[MAX];
  int visitado[MAX], contagem, mindistancia, proximo_no, i, j;

  for (i = 0; i < n; i++) // Criando valor da matriz
    for (j = 0; j < n; j++)
      if (graficos[i][j] == 0)
        valor[i][j] = INFINITO;
      else
        valor[i][j] = graficos[i][j];

  for (i = 0; i < n; i++)
  {
    distancia[i] = valor[iniciar][i];
    pred[i] = iniciar;
    visitado[i] = 0;
  }

  distancia[iniciar] = 0;
  visitado[iniciar] = 1;
  contagem = 1;

  while (contagem < n - 1)
  {
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