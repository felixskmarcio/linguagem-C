#include <stdio.h>
#include <stdlib.h>
#include "AB2.h"
#define INFINITO 9999
#define MAX 10

int main()
{
  int graficos[MAX][MAX];

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

  Dijkstra(graficos, 7, 0);

  return 0;
}