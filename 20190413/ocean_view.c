#include<stdio.h>
int main()
{
    int num;
    // 整数の入力
    scanf("%d", &num);
    
    int heights[20];
    int ans[20];
    // 
    for(int i = 0; i < num; i ++) {
        scanf("%d", &heights[i]);
    }
    // 判定
    int j = 0;
    for(int i = 1; i < num; i ++) {
        int t = heights[i];
        if(t >= heights[0] && t >= heights[1]) {
            if(t >= heights[i-1]) {
                ans[j] = t;
                j++;
            }
        }
    }
    // 出力
    printf("%d¥n", j+1);
    return 0;
}
