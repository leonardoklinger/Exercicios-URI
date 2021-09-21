#include <stdio.h>
int main()
{
    int a, b = 0;
    float result, d = 0;
    while (1)
    {
        scanf("%d", &a);
        if (a < 0)
            break;
        else
        {
            b += a;
            d++;
        }
    }
    result = b / d;
    printf("%.2f\n", result);
    return 0;
}