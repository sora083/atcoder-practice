#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100000];
    char ch2[100000];

    // 入力
    scanf("%s", &ch);
    int num = strlen(ch);

    if(num < 2) {
        printf("0");
        return 0;
    }

    if (ch[0] == '0') {
        for(int i = 0; i < num; i ++) {
            if( i%2 == 0 ) {
                ch2[i] = '0';
            } else {
                ch2[i] = '1';
            }
        }
    } else {
        for(int i = 0; i < num; i ++) {
            if( i%2 == 0 ) {
                ch2[i] = '1';
            } else {
                ch2[i] = '0';
            }
        }
    }

    int j = 0;
    for(int i = 0; i < num; i ++) {
        if(ch[i] != ch2[i]) {
            j++;
        }
    }
 
    // 出力
    printf("%d", j);
    return 0;
}
