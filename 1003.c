#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    while(n--)
    {
        int a, b, c, p, t, size,flag = 1;
        char s[100];
        gets(s);        
        a = b = c = p = t = 0;
        size = strlen(s);
        if (size < 3)
        {
            flag = 0;
            printf("NO\n");
            continue;
        }
        for (int i = 0; i < size; ++i)
        {
            if (s[i] == 'A')
            {
                if (p == 0)
                    ++a;
                else if (p != 0 && t == 0)
                    ++b;
                else if (p != 0 && t != 0)
                    ++c;
            }
            else if (s[i] == 'P')
            {
                ++p;
                if (p > 1)
                {
                    flag = 0;
                    break;
                }
            }
            else if (s[i] == 'T')
            {
                ++t;
                if (t > 1)
                {
                    flag = 0;
                    break;
                }
            }
            else
                flag = 0;
        }
        if (a * b != c || b == 0 || p == 0 || t == 0) //a*b!=c和b==0是核心
            flag = 0;

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
}