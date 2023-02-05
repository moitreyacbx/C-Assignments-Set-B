#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100
int main()
{
    int arr[MAX][MAX], arr1[MAX][MAX], arr2[MAX], arr3[MAX][MAX], n, m, i, j, k = 0, g = 0, h = 0, temp, l, p = 0,z=0;
    printf("Enter the dimensions of the 2-D array 1:\n");
    scanf("%d", &n);
    printf("Enter the element of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the dimensions of the 2-D array 2:\n");
    scanf("%d", &m);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            k = i * n + j;
            arr2[k] = arr[i][j];
        }
    }
    k++;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {

            g = (i * m) + j;
            g = g + k;

            arr2[g] = arr1[i][j];
        }
    }
    h = pow(n, 2) + pow(m, 2);
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < h - i - 1; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    printf("The first 2-D array is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The second 2-D array is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    l = m + n;
    if(m>n)
    {
        z=m;
    }
    else
    {
        z=n;
    }
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            arr3[i][j] = arr2[p];
            p = 1 + i * l + j;
        }
    }
    printf("The sorted resultant 2-D array is:\n");
    for (i = 0; i < z; i++)
    {
        for (j = 0; j < l; j++)
        {
            printf("%d  ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}