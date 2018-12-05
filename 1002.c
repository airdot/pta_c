#include <stdio.h>
int main()
{
    int n = 0, i, l = 0, out[10];
    char *num[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    char a;
    while ((a = getchar()) != '\n')
    { //printf("%d",a);
        n += a - '0';
    }
    //printf("\n%d\n",n);
    while (n > 0)
    {
        out[l++] = n % 10;
        n /= 10;
    }
    for (l = l - 1; l > 0; l--)
        printf("%s ", num[out[l]]);
    printf("%s", num[out[0]]);
    return 0;
}