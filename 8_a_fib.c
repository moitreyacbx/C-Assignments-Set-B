#include <stdio.h>
int findfib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return findfib(n - 1) + findfib(n - 2);
}
int main()
{
    int n = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The Fibonacci Series Is \n");
    for (int i = 0; i < n; i++)
    {

        printf("%d,", findfib(i));
    }
    return 0;
}
