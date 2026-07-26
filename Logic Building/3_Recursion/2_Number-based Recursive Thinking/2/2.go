// Q2: Reverse a number recursively.
// Input: An integer
// Output: Reversed number

package main

import "fmt"

func reverseNumber(n, rev int) int {
	if n == 0 {
		return rev
	}
	return reverseNumber(n/10, rev*10+n%10)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(reverseNumber(n, 0))
}
