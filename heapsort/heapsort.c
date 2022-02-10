
/* 
Implementação do Algoritmo Heap Sort

tradução
sieve → Perneira
root → Raiz
back → Fundo
ready → pronto
child → filho

*/
#define max 10

void sieve(int *vet, int root, int back);
void heapsort(int *vet, int n) {  // Função peneira
	int i, tmp;

	for (i = (n / 2); i >= 0; i--)
	{ // Criar heapsort aparttid dos dados
		sieve(vet, i, n - 1);
	}

	for (i = n - 1; i >= 1; i--)
	{
		tmp = vet[0]; // Pega o maior elemento da heapsort e colocar na posição correspondente no array
		vet[0] = vet[i];
		vet[i] = tmp;
		sieve(vet, 0, i - 1); // Reconstruir a heapsort
	}
}

void sieve(int *vet, int root, int back)
{
	int ready, childMax, tmp;

	ready = 0;
	while ((root * 2 <= back) && (!ready))
	{
		if (root * 2 == back)
		{
			childMax = root * 2;
		}
		else if (vet[root * 2] > vet[root * 2 + 1])
		{
			childMax = root * 2;
		}
		else
		{
			childMax = root * 2 + 1;
		}

		if (vet[root] < vet[childMax])
		{
			tmp = vet[root];
			vet[root] = vet[childMax];
			vet[childMax] = tmp;
			root = childMax;
		}
		else
		{
			ready = 1; // Antigo pai 
		}
	}
}

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
