#include <stdio.h>
int main()
{
    int j, i, k, n, m, o;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);
    int a1[n];
    printf("ADDRESS CALCULATION FOR 1-D ARRAY\n");
    printf("ENTER THE ELEMENTS FOR THE 1-D ARRAY\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d = %d\n", a1[i], &a1[i]);
    }
    for (i = 0; i < n; i++)
    {
        int *add = (int)&a1[0] + sizeof(int) * (a1[i] - 1);
        printf("ADDRESS OF VALUE %d AT INDEX %d IS %d\n", a1[i], i, add);
    }
   
}
