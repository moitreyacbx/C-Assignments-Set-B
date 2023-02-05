#include <stdio.h>
int main()
{
    int i, j, n;
    float arr[50][50], var[50][50], trans[50][50];
    printf("Enter the size of matrix\n");
    scanf("%d", &n);
    printf("Enter the values in matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            trans[i][j] = arr[j][i];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            var[50][50] = 0;
            var[i][j] += arr[j][i] * trans[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%0.1f", var[i][j]);
            printf("\t");
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            if (var[i][j] != var[j][i])
            {
                printf("\nIs Not Orthogonal");
                return 0;
            }
            else
            {
                continue;
            }
        }
    }
    printf("\nIs Orthogonal");
    return 0;
}