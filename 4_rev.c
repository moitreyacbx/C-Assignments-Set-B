#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX 1000
void revstr(char *arr)
{
    int temp, len, i;
    len = strlen(arr);
    for (i = 0; i < len / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}
void rec_rev(char *arr)
{
    static int i = 0, n, temp;
    n = strlen(arr);
    if (i < n / 2)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        i++;
        rec_rev(arr);
    }
}
int main()
{
    char str[MAX], arr[MAX];
    printf("Enter the string:\n");
    fgets(str,MAX,stdin);
    for (int i = 0; i < MAX; i++)
    {
        arr[i] = str[i];
    }
    revstr(str);
    printf("The Reversed String by Programmming is:\n %s", str);
    rec_rev(arr);
    printf("\nThe Reversed String by Recursion is:\n %s", arr);
}