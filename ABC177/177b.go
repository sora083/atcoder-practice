package main

import (
	"fmt"
)

// TODO: 自分で解決できず
// 左から一致している個数をカウントアップして最小のものをansとして保存して出力
func main() {

	var s, t string
	fmt.Scan(&s, &t)

	var count int
	var ans int = len(t)

	for i := 0; i < len(s)-len(t)+1; i++ {
		count = 0
		for j := 0; j < len(t); j++ {
			if s[i+j] != t[j] {
				count++
			}
		}

		if ans > count {
			ans = count
		}
	}

	fmt.Println(ans)
}
