#include<stdio.h>
int main()
{
    int num;
    // 整数の入力
    scanf("%d", &num);
    
    int heights[20];

    // 入力値の読み込み
    for(int i = 0; i < num; i ++) {
        scanf("%d", &heights[i]);
    }

    // 判定
    int j = 0;
    int t = 0;
    for(int i = 0; i < num; i ++) {
        if(t <= heights[i]) {
            t = heights[i];
            j++;
        }
    }
    // 出力
    printf("%d", j);
    return 0;
}
