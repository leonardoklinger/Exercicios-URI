#include <stdio.h>
int main()
{
    int num, N, num2 = 1, result = 0;
    scanf("%d %d", &num, &N);
    while (N <= 0)
        scanf("%d", &N);
    while (num2 <= N)
    {
        num2++;
        result += num;
        num++;
    }
    printf("%d\n", result);
    return 0;
}