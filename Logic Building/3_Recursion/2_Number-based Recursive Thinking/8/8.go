// Q8: Calculate the sum of first n even numbers recursively.
// Input: An integer n
// Output: Sum of first n even numbers

package main

import "fmt"

func sumEven(n int) int {
	if n == 0 {
		return 0
	}
	return (2 * n) + sumEven(n-1)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(sumEven(n))
}
