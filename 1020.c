
#include <stdio.h>
//交换函数
void exchange(double *p, double *q)
{
    double iTemp = *p;
    *p = *q;
    *q = iTemp;
}
//排序函数
void sort(double a[][3], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < row; j++)
        {
            if (a[i][2] < a[j][2])
            {
                exchange(&a[i][2], &a[j][2]);
                exchange(&a[i][0], &a[j][0]);
                exchange(&a[i][1], &a[j][1]);
            }
        }
    }
}

int main()
{
    int iType = 0;      //月饼种类
    double iAmount = 0; //市场需求量
    scanf("%d%lf", &iType, &iAmount);
    double iData[iType][3]; //每种月饼总价、库存量及单价
    for (int i = 0; i < iType; i++)
    {
        scanf("%lf", &iData[i][0]);
    }
    getchar();
    for (int i = 0; i < iType; i++)
    {
        scanf("%lf", &iData[i][1]);
        iData[i][2] = iData[i][1] / iData[i][0];
    }
    sort(iData, iType);                        //排序
    double iT = 0, iSum = 0, iSumofAmount = 0; //定义所余月饼单价，总价，总量
    for (int i = 0; i < iType; i++)
    {
        if (iSumofAmount + iData[i][0] < iAmount)
        {
            iSumofAmount += iData[i][0];
            iSum += iData[i][1];
        }
        else
        {
            iT = iData[i][2];
            break;
        }
    }
    iSum += (iAmount - iSumofAmount) * iT; //总价加上余量
    printf("%.2lf", iSum);
    return 0;
}