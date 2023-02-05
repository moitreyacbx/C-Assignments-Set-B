#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int n, i, j = 0, k = 0, x, *arr, *arr1, *arr2;
    printf("Enter no of elements\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    arr = (int *)malloc(n * sizeof(int));
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    x = rand() % n;
    printf("The array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\nThe random number from this array is\n%d", arr[x]);
    for (i = 0; i < n; i++)
    {
        if (arr[i] < arr[x])
        {
            arr1[j] = arr[i];
            j++;
        }
        else if (arr[i] > arr[x])
        {
            arr2[k] = arr[i];
            k++;
        }
    }

    printf("\nLesser array part is\n");
    for (i = 0; i < j; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\nGreater array part is\n");
    for (i = 0; i < k; i++)
    {
        printf("%d  ", arr2[i]);
    }
    return 0;
}