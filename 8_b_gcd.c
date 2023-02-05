#include <stdio.h>
int gcd(int a, int b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    else if (b != 0)
    {
        return gcd(b, a % b);
    }
    else
    {
        return a;
    }
}
int main()
{
    int x, y;
    printf("Enter the numbers\n");
    scanf("%d %d", &x, &y);
    if (x == 0 || y == 0)
    {
        printf("Undefined");
    }
    else
        printf("The GCD of %d and %d is %d \n", x, y, gcd(x, y));
}