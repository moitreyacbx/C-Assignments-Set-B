#include <stdio.h>
#include <stdlib.h>
#define MAX 100000000
int thirdmax(int *arr1, int x)
{
	int max = 0, max_2 = 0, max_3 = 0;
	for (int i = 0; i < x; ++i)
	{
		if (arr1[i] > max)
		{
			max_3 = max_2;
			max_2 = max;
			max = arr1[i];
		}
		else if (arr1[i] > max_2 && arr1[i] < max)
		{
			max_3 = max_2;
			max_2 = arr1[i];
		}
		else if (arr1[i] > max_3 && arr1[i] < max_2)
		{
			max_3 = arr1[i];
		}
	}
	return max_3;
}

int fifthmin(int *arr2, int x)
{
	int min = MAX, min_2 = MAX, min_3 = MAX, min_4 = MAX, min_5 = MAX;
	for (int i = 0; i < x; ++i)
	{
		if (arr2[i] < min)
		{
			min_5 = min_4;
			min_4 = min_3;
			min_3 = min_2;
			min_2 = min;
			min = arr2[i];
		}
		else if (arr2[i] < min_2 && arr2[i] > min)
		{
			min_5 = min_4;
			min_4 = min_3;
			min_3 = min_2;
			min_2 = arr2[i];
		}
		else if (arr2[i] < min_3 && arr2[i] > min_2)
		{
			min_5 = min_4;
			min_4 = min_3;
			min_3 = arr2[i];
		}

		else if (arr2[i] < min_4 && arr2[i] > min_3)
		{
			min_5 = min_4;
			min_4 = arr2[i];
		}
		else if (arr2[i] < min_5 && arr2[i] > min_4)
		{
			min_5 = arr2[i];
		}
	}
	return min_5;
}

int main()
{
	int *arr, n, i, y;
	printf("Enter the no of elements:\n");
	scanf("%d", &n);
	arr = malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("Enter term %d:\n", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("The Array is:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	y = thirdmax(arr, n);
	printf("\nThe third largest number is %d", y);
	int z = fifthmin(arr, n);
	printf("\nThe fifth lowest number is %d", z);
	if (n % 2 == 0)
	{
		printf("\nThe Middle Values are:%d %d", arr[(n - 1) / 2], arr[((n - 1) / 2) + 1]);
	}
	else
	{
		printf("\nThe Middle value is %d", arr[(n - 1) / 2]);
	}
	return 0;
}