#include <stdio.h>
#include <math.h>
int main()
{
    double x, aTotal;
    int l;
    while (scanf("%d", &l) != EOF)
    {
        x = ((l * l) * sqrt(3)) / 4;
        aTotal = (8 * x) / 5;
        printf("%.2f\n", aTotal);
    }
    return 0;
}