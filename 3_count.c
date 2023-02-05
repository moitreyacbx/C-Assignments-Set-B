#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000
void findcount(char *sen, int *arr)
{
    int articles = 0, uppercase = 0, i;
    for (i = 0; sen[i]; i++)
    {
        if (((sen[i] == 'a' || sen[i] == 'A') && (sen[i + 1] == ' ')) || ((sen[i] == 'T' || sen[i] == 't') && (sen[i + i] == 'h') && (sen[i + 2] == 'e') && (sen[i + 3] == ' ')) || (sen[i] == 'a' || sen[i + 1] == 'A') && (sen[i + 1] == 'n') && (sen[i + 2] == ' '))
        {
            articles++;
        }
    }
    for (i = 0; sen[i]; i++)
    {
        if ((sen[i] >= 65 && sen[i] < 97) && (sen[i - 1] != '-'))
            uppercase++;
    }
    arr[0] = articles;
    arr[1] = uppercase;
}
int main()
{
    int n, *arr;
    char ch, str[MAX];
    int i = 0;

    printf("Enter the text:\n");
    while ((ch = getchar()) != '#')
    {
        str[i++] = ch;
    }
    findcount(str, arr);
    printf("\nThe number of articles are %d and the numbers of Uppercase Words are %d", arr[0], arr[1]);
    return 0;
}