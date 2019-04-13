#include<stdio.h>
int main()
{
    int a,b;
    int ans[2];
    int answer;
    // スペース区切りの整数の入力
    scanf("%d %d",&a,&b);

    // 1
    if (a > b) {
        ans[0] = a;
        a = a -1;
    } else {
        ans[0] = b;
        b = b -1;
    }

    // 2
    if (a > b) {
        ans[1] = a;
        a = a -1;
    } else {
        ans[1] = b;
        b = b -1;
    }
    answer = ans[0] + ans[1];

    // 出力
    printf("%d\n", answer);
    return 0;
}
