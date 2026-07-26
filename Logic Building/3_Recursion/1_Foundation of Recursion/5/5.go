// Q5: Print sum of first n natural numbers recursively.
// Input: An integer n
// Output: Sum of 1+2+...+n

package main

import "fmt"

func sumN(n int) int {
	if n == 0 {
		return 0
	}
	return n + sumN(n-1)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(sumN(n))
}
