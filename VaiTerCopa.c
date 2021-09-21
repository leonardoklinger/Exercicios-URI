#include <stdio.h>
int main()
{
    int copa;
    while (scanf("%d", &copa) != EOF)
    {
        if (copa == 0)
        {
            printf("vai ter copa!\n");
        }
        if (copa > 0)
        {
            printf("vai ter duas!\n");
        }
    }
    return 0;
}