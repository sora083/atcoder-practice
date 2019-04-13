#include<stdio.h>
int main()
{
    int a,b;
    // スペース区切りの整数の入力
    scanf("%d %d",&a,&b);
    // 出力
    int ans = a*b;
    if(ans%2 == 0 ) {
        printf("Even¥n");
    } else {
        printf("Odd¥n");
    }
    return 0;
}
