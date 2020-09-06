package main

import (
	"fmt"
)

func main() {

	var s, t string
	fmt.Scan(&s, &t)

	var count int
	var ans int = len(t)

	for i := 0; i < len(s)-len(t)+1; i++ {
		count = 0
		for j := 0; j < len(t); j++ {
			if s[i+j] != t[j] {
				fmt.Printf("%d&%d: %v, %v\n", i, j, s[i+j], t[j])
				count++
			}
		}

		if ans > count {
			ans = count
		}
	}

	fmt.Println(ans)
}
