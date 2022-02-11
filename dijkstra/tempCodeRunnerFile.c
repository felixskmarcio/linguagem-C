 < n; i++) // Criando valor da matriz
    for (j = 0; j < n; j++)
      if (graficos[i][j] == 0)
        valor[i][j] = INFINITO;
      else
        valor[i][j] = graficos[i][j];

  for (i = 0; i < n; i++)
  {
    distancia[i] = valor[iniciar][i];
    pred[i] = i