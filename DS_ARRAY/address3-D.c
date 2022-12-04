    #include <stdio.h>
int main()
{
    int j, i, k, n, m, o;
    printf("ENTER THE ROWS COLUMNS AND WIDHT SIZE OF 3-D ARRAY\n");
    scanf("%d%d%d", &m, &n, &o);
    int a3[m][n][o];
    printf("ENTER THE ELEMENTS OF THE 3-D ARRAY");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < o; k++)
                scanf("%d", &a3[i][j][k]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < o; k++)
                printf("%d = %d\n", a3[i][j][k], &a3[i][j][k]);
        }
    }
    printf("\nROW MAJOR ADDRESS CALCULATION FOR 3-D ARRAY\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < o; k++)
            {
                int *add = (int)&a3[0][0][0] + sizeof(int) * (m * n * i + n * j + k);
                printf("ADDRESS OF VALUE %d AT INDEX [%d][%d][%d] IS %d\n", a3[i][j], i, j, k, add);
            }
        }
    }
    printf("COLUMN MAJOR ADDRESS CALCULATION FOR 3-D ARRAY\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < o; k++)
            {
                int *add = (int)&a3[0][0][0] + sizeof(int) * (m * n * i + m * k + j);
                printf("ADDRESS OF VALUE %d AT INDEX [%d][%d][%d] IS %d\n", a3[i][j], i, j, k, add);
            }
        }
    }
}