#include <stdio.h>
int findbin(int index, int n)
{
    if (index == 0)
    {
        return 0;
    }
    else
    {
        return ((index % n) + 10 * findbin(index / 2, n));
    }
}
char findhex(int index, int n)
{
    char hexa[20];
    int temp, i = 0, quotient = 0;

    while (index != 0)
    {
        temp = index % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa[i++] = temp;
        quotient = quotient / 16;
    }
    for (int j = i - 1; j > 0; j--)
    {
        return hexa[j];
    }
    return 0;
}

int main()
{
    int dec, n;
    printf("Enter the number to be converted\n");
    scanf("%d", &dec);
    printf("Enter the base\n");
    scanf("%d", &n);
    if (n < 9)
    {
        printf("The Equivalent is %d", findbin(dec, n));
    }
    else
    {
        printf("The Equivalent is %c", findhex(dec, n));
    }
    return 0;
}