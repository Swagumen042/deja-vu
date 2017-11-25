#include<stdio.h>
#define maxSize 50

int squareMatrix[maxSize][maxSize];
int sizeMatrix;

void rotateMatrix();
void readMatrix();

int main(void) {
	
	readMatrix();
	rotateMatrix();
}

void readMatrix()
{
	int matrixRow, matrixColumn;
	FILE *inputFile;
	inputFile = fopen("in.txt", "rt");
	if (inputFile == NULL)
	{
		printf("Eroare: Fisierul nu poate fi citit/este gol.");//verificare date intrare
	}
	else
	{
		fscanf(inputFile, "%d", &sizeMatrix);//citire ordin matrice
		for (matrixRow = 0; matrixRow < sizeMatrix; matrixRow++)
		{
			for (matrixColumn = 0; matrixColumn < sizeMatrix; matrixColumn++)
			{
				fscanf(inputFile, "%d", &squareMatrix[matrixRow][matrixColumn]);//citire elemente, pe linie
			}
		}
	}
	fclose(inputFile);
}

void rotateMatrix()
{
	int matrixRow, matrixColumn;
	FILE *outputFile;
	for (matrixRow = 0; matrixRow < sizeMatrix / 2; matrixRow++) // o matrice de ordin N are N/2, rotunjit in jos, "straturi"
	{
		for (matrixColumn = matrixRow; matrixColumn < sizeMatrix - matrixRow - 1; matrixColumn++)
		{
			
			// metoda implementata schimba elementele de pe fiecare strat cate 4, incepand cu colturile
			// (in cazul N = 3, primele elemente mutate sunt [1,1],[3,1],[3,3],[1,3]; iar acestea sunt "atinse" o singura data)
			// o alta metoda care se poate utiliza este transpunerea matricei, iar apoi inversarea coloanelor
			
			int tempInt = squareMatrix[matrixRow][matrixColumn];// salvam elementul in memorie
			squareMatrix[matrixRow][matrixColumn] = squareMatrix[sizeMatrix - 1 - matrixColumn][matrixRow];// inlocuim elementul A(i,j) cu elementul A(N-j,i)
			squareMatrix[sizeMatrix - 1 - matrixColumn][matrixRow] = squareMatrix[sizeMatrix - 1 - matrixRow][sizeMatrix - 1 - matrixColumn];//inlocuim elementul A(N-j, i) cu elementul A(N-i,N-j) 
			squareMatrix[sizeMatrix - 1 - matrixRow][sizeMatrix - 1 - matrixColumn] = squareMatrix[matrixColumn][sizeMatrix - 1 - matrixRow];//inlocuim elementul A(N-i,N-j) cu elementul A(j, N-i)
			squareMatrix[matrixColumn][sizeMatrix - 1 - matrixRow] = tempInt;//inlocuim elementul A(j, N-i) cu cel salvat in memorie; A(i,j)
			
			
		}//schimbam elementele de pe 'strat' pana cand nu mai avem elemente de deplasat pe strat, dupa care trecem la straturile interioare.
	}
	outputFile = fopen("out.txt", "wt");
	for (matrixRow = 0; matrixRow < sizeMatrix; matrixRow++)
	{
		for (matrixColumn = 0; matrixColumn < sizeMatrix; matrixColumn++)
		{
			fprintf(outputFile, "%d ", squareMatrix[matrixRow][matrixColumn]);// matricea rotita se salveaza in fisierul out.txt
		}
		fprintf(outputFile, "\n");
	}
	fclose(outputFile);
}