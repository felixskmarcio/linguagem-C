
/*
Implementação do Algoritmo Heap Sort

tradução
sieve → Perneira
root → Raiz
back → Fundo
ready → pronto
child → filho

*/
#include <stdio.h>
#include <stdlib.h>
#define max 10
#include "heapsort.h"
#include "heapsort.c"

int main()
{
	int vetor[max] = {5, 2, 7, 8, 10, 6, 1, 4, 9, 3};
	int i;
	heapsort(vetor, max);
	for (i = 0; i < max; i++)
	{
		printf("%d ", vetor[i]);
	}
	return (0);
}
