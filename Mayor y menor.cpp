
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quicksort(int lista[], int primero, int ultimo);
float calcularMedia(int lista [], int n);
float calcularMediana(int lista[], int n);
int calcularModa(int lista[],int n);
void imprimirHistograma(int lista[],int n);

int main()
{
int n, i;
srand(time(NULL));

printf("Numero de elementos a ordenar: ");
scanf("%d" , &n);

int lista[n];

for(i=0; i < n; i++)
lista[i]= rand()%30 + 1;

printf("Lista sin ordenar:\n");
for(i=0; i<n; i++)
printf("%d",lista[i]);	
printf("\n");
	
quicksort(lista, 0, n - 1);

printf("Lista ordenada:\n");
for(i = 0; i < n; i++)
printf("%d", lista[i]);
printf("\n");

int menor = lista[0];
int mayor = lista[n - 1];

printf("Elemento mas pequeno: %d\n",mayor);
printf("Elemento mas grande:%d\n",menor);

float media= calcularMedia(lista, n);
printf("Media: %.2f\n", media);

float mediana= calcularMediana(lista, n);
printf("Mediana:%.2f\n", mediana);

int moda = calcularModa(lista, n);
printf("Moda: %d\n", moda);

printf("Histograma:\n");
imprimirHistograma(lista, n);

return 0; 	
}

void quicksort(int lista[], int primero, int ultimo)
{
	
}
float calcularMedia(int lista[],int n)
{
	float suma=0;
	for(int i = 0; i < n; i++)
	suma += lista[i];
	return suma/n;
}
float calcularMediana(int lista[],int n)
{
	if (n % 2 == 0)
	return(lista[n / 2 - 1] +lista[n / 2] ) /2.0;
	else
	return lista[n/2];
}

int calcularModa(int lista[],int n)
{
	int maxFrecuencia =0;
	int moda =lista[0];
	
	for(int i = 0;i < n; i++){
		int valorActual = lista[i];
		int frecuenciaActual = 0;
		
		
		for(int j = 0; j < n; j++){
			if(lista[j]== valorActual){
				frecuenciaActual++;
			}
			
		}
	}
	if(frecuenciaActual > maxFrecuencia){
		maxFrecuencia = frecuenciaActual;
		moda =valorActual;
	}
	return moda;
}

void imprimirHistograma(int lista[], int n)
{
	int max = lista[n-1];
	int min = lista[0];
	int rango = max - min + 1;
	int Frecuencia[rango];
	
	for(int i=0; i < rango; i++);
    frecuencia[i]=0;
	
	for(int i=0; i<n; i++);
	frecuencia[lista[i] - min]++;
	
	for(int i=0; i<rango; i++){
		printf("%2d - %2d | ", i + min, i + min);
		for (int j=0; j<frecuencia[i]; j++)
		printf("*");
		printf("\n");
	} 
	
}







