// Q1: Count the number of digits in a number recursively.
// Input: An integer
// Output: Number of digits

package main

import "fmt"

func countDigits(n int) int {
	if n == 0 {
		return 0
	}
	return 1 + countDigits(n/10)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(countDigits(n))
}
