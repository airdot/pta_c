#include <stdio.h>
int main()
{
    int i = 0, n;
    scanf("%d", &n);
    while (n != 1)
    {
        i++;
        if (n % 2)
            n = (3 * n + 1) / 2;
        else
            n /= 2;
    }
    printf("%d", i);
    return 0;
}