#include <stdio.h>
int findbin(int index, int n)
{
    if (index == 0)
    {
        return 0;
    }
    else
    {
        return ((index % n) + 10 * findbin(index / n, n));
    }
}
void findhex(int index, int n)
{
    char hexa[20];
    int temp, i = 1;

    while (index != 0)
    {
        temp = index % n;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa[i++] = temp;
        index = index / n;
    }
    printf("The %d-Base Conversion is.", n);
    for (int j = i - 1; j > 0; j--)
    {
        printf("%c", hexa[j]);
    }
}

int main()
{
    int dec, n;
    printf("Enter the number to be converted.\n");
    scanf("%d", &dec);
    printf("Enter the base.\n");
    scanf("%d", &n);
    if (n < 9)
    {
        printf("The %d- Equivalent is %d.", n, findbin(dec, n));
    }
    else
    {
        findhex(dec, n);
    }
    return 0;
}