
#include <stdio.h>
int Max(int n)
{
    int num[4] = {0};
    int result = 0;
    int temp;
    for (int i = 0; i < 4; i++)
    {
        num[i] = n % 10;
        n = n / 10;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (int i = 3; i >= 0; i--)
    {
        result = result * 10 + num[i];
    }
    return result;
}
int Min(int n)
{
    int num[4] = {0};
    int result = 0;
    int temp;
    for (int i = 0; i < 4; i++)
    {
        num[i] = n % 10;
        n = n / 10;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        result = result * 10 + num[i];
    }
    return result;
}
int main()
{
    int n;
    scanf("%d", &n);
    int num = Max(n) - Min(n);
    do
    {
        num = Max(n) - Min(n);
        printf("%04d - %04d = %04d\n", Max(n), Min(n), num);
        n = num;
    } while (n != 6174 && n != 0);
    return 0;
}