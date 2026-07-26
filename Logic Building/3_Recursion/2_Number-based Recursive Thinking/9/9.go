// Q9: Calculate the sum of first n odd numbers recursively.
// Input: An integer n
// Output: Sum of first n odd numbers

package main

import "fmt"

func sumOdd(n int) int {
	if n == 0 {
		return 0
	}
	return (2*n - 1) + sumOdd(n-1)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(sumOdd(n))
}
