#include<stdio.h>
int main()
{
    char a[1005];
    int b;
    scanf("%s %d", a, &b);
    char quotient[1005]; //商
    int rest = 0; //余数
    for(int i = 0; i != strlen(a); i++){
        quotient[i] = ((rest * 10 + a[i] - 48) / b) + 48;
        rest = (rest * 10 + (a[i] - 48)) % b;
    }
    if(quotient[0] == '0' && quotient[1] != 0){
        printf("%s", quotient + 1);
    }
    else{
        printf("%s", quotient);
    }
    printf(" %d\n", rest);
    return 0;
}