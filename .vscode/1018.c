
#include <stdio.h>
char max(int B, int C, int J)
{
    if (B >= C && B >= J)
        return 'B';
    if (C > B && C >= J)
        return 'C';
    /* J > B && J > C */ return 'J';
}
int main()
{
    int N;
    char line[5];
    int AwinB = 0, AwinC = 0, AwinJ = 0;
    int BwinB = 0, BwinC = 0, BwinJ = 0;

    scanf("%d", &N);
    while (getchar() != '\n')
        ;
    for (int i = 0; i < N; i++)
    {
        fgets(line, 5, stdin);
        if (line[0] == 'B' && line[2] == 'C')
            AwinB++;
        if (line[0] == 'C' && line[2] == 'J')
            AwinC++;
        if (line[0] == 'J' && line[2] == 'B')
            AwinJ++;
        if (line[0] == 'B' && line[2] == 'J')
            BwinJ++;
        if (line[0] == 'C' && line[2] == 'B')
            BwinB++;
        if (line[0] == 'J' && line[2] == 'C')
            BwinC++;
    }

    int Awin = AwinB + AwinC + AwinJ;
    int Bwin = BwinB + BwinC + BwinJ;
    int Tie = N - Awin - Bwin;
    printf("%d %d %d\n", Awin, Tie, Bwin);
    printf("%d %d %d\n", Bwin, Tie, Awin);
    printf("%c %c", max(AwinB, AwinC, AwinJ), max(BwinB, BwinC, BwinJ));
    return 0;
}