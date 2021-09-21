#include <stdio.h>
int main()
{
    int N, num, result = 1;
    scanf("%d", &N);
    for (num = N; num >= 1; num--)
        result *= num;
    printf("%d\n", result);
    return 0;
}