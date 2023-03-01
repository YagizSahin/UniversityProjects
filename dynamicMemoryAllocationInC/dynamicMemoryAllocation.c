#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int size;
	int added = 0;
	int kontrol = 1;

	printf("Dizinin ilk boyutunu girin: ");
	scanf_s("%d", &size);
	int* array = (int*)malloc(sizeof(int) * size);

	while (kontrol)
	{
		int adet;
		printf("kac adet eleman eklemek istersiniz (cikis yapmak icin -1 girin): ");
		scanf_s("%d", &adet);
		system("cls");
		if (adet == -1)
		{
			kontrol = 0;
		}
		else
		{
			for (int i = added; i < added + adet; i++)
			{
				printf("%d. elemani gir: ", i + 1);
				scanf_s("%d", &array[i]);
				system("cls");
			}
			added += adet;

			if (added > (size * 3) / 4)
			{
				int* arrayCpy = (int*)malloc(sizeof(int) * added);
				for (int i = 0; i < added; i++)
				{
					arrayCpy[i] = array[i];
				}
				size = size * 2;
				array = (int*)malloc(sizeof(int) * size);
				for (int i = 0; i < added; i++)
				{
					array[i] = arrayCpy[i];
				}
			}

			else if (added < size / 2)
			{
				int* arrayCpy = (int*)malloc(sizeof(int) * added);
				for (int i = 0; i < added; i++)
				{
					arrayCpy[i] = array[i];
				}
				size = size / 2;
				array = (int*)malloc(sizeof(int) * size);
				for (int i = 0; i < added; i++)
				{
					array[i] = arrayCpy[i];
				}
			}
		}
		printf("dizinin boyutu: %d\n", size);
		printf("dizinin eleman sayisi: %d\n", added);
		puts("");
		for (int i = 0; i < added; i++)
		{
			printf("%d.eleman: %d\n", i + 1, array[i]);
		}
		puts("");
	}
}
