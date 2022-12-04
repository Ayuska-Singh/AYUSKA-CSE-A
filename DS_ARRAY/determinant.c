#include<stdio.h>
void getCofactor(int n,int mat[n][n], int temp[n][n], int p,int q)
{
	int i = 0, j = 0;
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (row != p && col != q)
			{
				temp[i][j++] = mat[row][col];
				if (j == n - 1)
				{
					j = 0;
					i++;
				}
			}
		}
	}
}


int determinantOfMatrix(int n,int mat[n][n])
{
	int D = 0; 
	if (n == 1)
		return mat[0][0];

	int temp[n][n]; 

	int sign = 1;
	for (int f = 0; f < n; f++)
	{
		
		getCofactor(n,mat, temp, 0, f);
		D += sign * mat[0][f]* determinantOfMatrix(temp, n-1);
		sign = -sign;
	}

	return D;
}

void display(int n,int mat[n][n])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf(" %d", mat[i][j]);
		printf("\n");
	}
}
int main()
{
    int mat[10][10],m,n,i,j;
    printf("ENTER THE ROWS AND COLUMN OF THE MATRIX\n");
    scanf("%d%d",&m,&n);
    if(m==n)
    {
        printf("ENTER THE ELEMENTS OF THE MATRIX\n");
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&mat[i][j]);
    }
    printf("Determinant of the matrix is : %d",determinantOfMatrix(n,mat));
	display(n,mat);
}