#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d", &N);
    int n;
    int A1 = 0,A2 = 0,A3 = 0,A4 = 0,A5 = 0;
    int A2flag = 0;
    int A4number = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &n);
            switch (n % 5) {
                case 0:
                    if (n % 2 == 0) {
                        A1 = A1 + n;
                    }
                    break;
                case 1:
                    A2flag = A2flag == 1 ? -1 : 1;
                    A2 = A2flag * n + A2;
                    break;
                case 2:
                    A3++;
                    break;
                case 3:
                    A4number++;
                    A4 = A4 + n;
                    break;
                case 4:
                    A5 = A5 > n ? A5 : n;
                    break;
            }
    }
        //A1 = 能被5整除的数字中所有偶数的和；
        //A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
        //A3 = 被5除后余2的数字的个数；
        //A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
        //A5 = 被5除后余4的数字中最大数字。
        if (A1 == 0)
            printf("N ");
        else printf("%d ",A1);
        if (A2flag == 0)
            printf("N ");
        else printf("%d ",A2);
        if (A3 == 0)
            printf("N ");
        else printf("%d ",A3);
        if (A4 == 0)
            printf("N ");
        else printf("%.1f ",A4 * 1.0 / A4number);
        if (A5 == 0)
            printf("N");
        else printf("%d",A5);
    return 0;
}