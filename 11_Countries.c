#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char **countries, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(countries[i], countries[j]) > 0)
            {

                char temp[100];
                strcpy(temp, countries[i]);
                strcpy(countries[i], countries[j]);
                strcpy(countries[j], temp);
            }
        }
    }
}
int main(void)
{
    int n;
    printf("Enter the number of countries:\n");
    scanf("%d", &n);
    char **countries = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < 100; i++)
    {
        countries[i] = (char *)malloc(100 * sizeof(char));
    }

    printf("Enter the names of the countries:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Country %d: ", i + 1);
        scanf("%s", countries[i]);
    }

    sort(countries, n);
    printf("The countries in alphabetical order are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", countries[i]);
    }

    return 0;
}
