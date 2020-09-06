package main

import (
	"fmt"
)

func main() {
	var d, t, s int
	fmt.Scan(&d, &t, &s)
	if d <= s*t {
		fmt.Printf("Yes")
		return
	}
	fmt.Printf("No")
}
