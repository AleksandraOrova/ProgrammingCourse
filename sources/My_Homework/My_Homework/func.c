#include"func.h"

int Bank(int a, int b)
{
	int Rez;
	Rez = a*(1 + (b / 100)) ^ 5;
	if (Rez > 0)
		printf("After 5 years You will have %d rubbles.\n\n", &Rez);
	else
		printf("Error.");
}

int House(int a, int b, int p, int q, int r, int s)
{
	if ((a * b) < (p * q + r * s))
		printf("\n Put 2 houses in this area is POSSIBLE\n\n");
	else
		printf("\n It's IMPOSIBLE! Change linear dimensions of Your houses!\n\n");
}

int C_and_I(int L)
{
	int i;
	for (i = 1; i <= L; i++)
		printf("%d \t %f \n", i, 2.54f * i);
	return 0;
}

//#define nn 10 
//#define mm 10

int fr(int a, int b);
void draw();
//const int nn = 10;
//const int mm = 10;
int mas[10][10];
int n, m;
int i, j, k;

void draw() /*рисует матрицу*/
{
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= m; ++j)
		{
			printf("%d",mas[i][j]);
			if (mas[i][j] < 10) 
			{ 
				printf("   ");
			}
			else 
			{
				printf("   ");
			}
		}
		printf("\n");
	}
}

int fr(int a, int b) /*провер€ет, €вл€етс€ ли €чейка с
					 указанными координатами свободной*/
{
	if ((a>0) && (a <= n) && (b>0) && (b <= m) && (mas[a][b] == 0)) 
	{ 
		return 1; 
	}
	else 
	{ 
		return 0; 
	}
}

void Matrix() 
{
	while ((n>nn) || (m>mm) || (n<0) || (m<0))
	{
		printf("¬ведите размерность прамоугольной матрицы:\n\n\t");
		scanf("%d %d", &m, &n);
	}
	printf("/n");

	draw();

	i = 1; j = 1; mas[i][j] = 1;

	for (k = 1; k <= n*m; ++k)
	{
		if ((fr(i - 1, j) == 1) && (!fr(i, j - 1))) 
		{ 
			--i; mas[i][j] = k + 1; 
		}
		else
			if (fr(i, j + 1) == 1) 
			{ 
				++j; mas[i][j] = k + 1; 
			}
			else
				if (fr(i + 1, j) == 1) 
				{ 
					++i; mas[i][j] = k + 1; 
				}
				else
					if (fr(i, j - 1) == 1) 
					{ 
						--j; mas[i][j] = k + 1; 
					}
	}

	printf("\n\n");

	draw();
}