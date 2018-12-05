#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (c - a < b)
            printf("Case #%d: true\n", i + 1);
        else
            printf("Case #%d: false\n", i + 1);
    }
    return 0;
}
