#include<stdio.h>
#include<ctype.h>
#define SIZE 61
#define N 4
char * date[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(void)
{
        char code[N][SIZE];
        for(int i = 0;i<N;i++)
                scanf("%s",code[i]);
        //星期
        int j = 0;
        while((code[0][j]<'A' || code[0][j]>'G') || code[0][j] != code[1][j])
                j++;
        printf("%s ",date[ code[0][j] - 'A' ]);
        //小时
        j += 1;//搜索“下一个”相同字符
        while( ( (code[0][j]<'A' || code[0][j]>'N') && !isdigit(code[0][j]) ) ||code[0][j] != code[1][j])
                j++;
        if(isalpha(code[0][j]))
                printf("%02d:",code[0][j] - 'A' + 10);
        else
                printf("%02d:",code[0][j] - '0');

        //分钟
        j = 0;
        while( !isalpha(code[2][j]) || code[2][j] != code[3][j] )
                j++;
        printf("%02d\n",j);
        return 0;
}