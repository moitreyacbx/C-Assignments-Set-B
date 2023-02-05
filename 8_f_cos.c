#include <stdio.h>
#include <math.h>

double cos_series(float x, int n);

int main(void)
{

    float x;
    int n;
    printf("Enter the term to compute cos:\n");
    scanf("%f", &x);
    printf("Enter the degree of precision\n");
    scanf("%d", &n);
    double result = cos_series(x, n);
    printf("cos(%0.3f) = %0.3lf\n", x, result);

    return 0;
}

double cos_series(float x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 - (pow(x, 2) / ((2 * n) * (2 * n - 1))) * s;
    return cos_series(x, n - 1);
}
