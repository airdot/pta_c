#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char numa[15], a, numb[15], b;
    int fa = 0, fb = 0, sum = 0;
    scanf("%s %c %s %c", numa, &a, numb, &b);
    for (int i = 0; i < strlen(numa); i++)
        if (numa[i] == a)
            fa++;
    for (int i = 0; i < strlen(numb);i++)
        if (numb[i] == b)
            fb++;
    a -= '0';
    b -= '0';
    for (int i = 0; i < fa; i++)
        sum += (int)pow(10, i) * a;
    for (int i = 0; i < fb; i++)
        sum += (int)pow(10, i) * b;
    printf("%d", sum);
    return 0;
}