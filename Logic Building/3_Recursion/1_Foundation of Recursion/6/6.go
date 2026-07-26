// Q6: Print factorial of a number recursively.
// Input: An integer n
// Output: n!

package main

import "fmt"

func factorial(n int) int {
	if n == 0 || n == 1 {
		return 1
	}
	return n * factorial(n-1)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(factorial(n))
}
