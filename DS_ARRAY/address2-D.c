 #include <stdio.h>
int main()
{
    int j, i, k, n, m, o;
 printf("ENTER THE ROWS AND COLUMN OF THE 2-D ARRAY\n");
    scanf("%d%d", &m, &n);
    int a2[m][n];
    printf("ENTER THE ELEMENTS OF 2-D ARRAY\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a2[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d = %d\n", a2[i][j], &a2[i][j]);
        }
    }
    printf("ROW MAJOR ADDRESS CALCULATION FOR 2-D ARRAY\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            int *add = (int)&a2[0][0] + sizeof(int) * ((i)*n + (j));
            printf("ADDRESS OF VALUE %d AT INDEX [%d][%d] IS %d\n", a2[i][j], i, j, add);
        }
    }
    printf("COLUMN MAJOR ADDRESS CALCULATION FOR 2D ARRAY\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            int *add = (int)&a2[0][0] + sizeof(int) * ((j)*m + (i));
            printf("ADDRESS OF VALUE %d AT INDEX [%d][%d] IS %d\n", a2[i][j], i, j, add);
        }
    }
}