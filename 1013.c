#include <stdio.h>
#include <string.h>
#define MAXN 80000
#define MAXL 1000000
int prime[MAXN];
_Bool check[MAXL];
int main(void)
{
    int n, m, count, sum = 0;
    scanf("%d %d", &n, &m);
    memset(check, 0, sizeof(check));
    count = 0;
    for (int i = 2; i <= MAXL; i++)
    {
        if (!check[i])
            prime[count++] = i;
        for (int j = 0; j < count; j++)
        {
            if (i * prime[j] > MAXL)
                break; // 过大的时候跳出
            check[i * prime[j]] = 1;
            if ((i % prime[j]) == 0) // 如果i是一个合数，而且i % prime[j] == 0
                break;
        }
    }
    //printf("%d\n", count);
    for (int j = 0, i = n - 1; i < m; i++)
    {
        if (j > 0 && j % 10 != 0)
            printf(" ");
        if (j > 0 && j % 10 == 0)
            printf("\n");
        j++;
        printf("%d", prime[i]);
    }
    return 0;
}
