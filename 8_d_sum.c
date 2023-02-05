#include <stdio.h>
int findsum(int index)
{
    if (index == 0)
    {
        return 0;
    }
    else
    {
        return ((index % 10) + findsum(index / 10));
    }
}
int main()
{
    int dec;
    printf("Enter the number to be added\n");
    scanf("%d", &dec);
    printf("The Sum of digits is %d", findsum(dec));
    return 0;
}