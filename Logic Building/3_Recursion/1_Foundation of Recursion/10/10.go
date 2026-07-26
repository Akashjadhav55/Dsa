// Q10: Find sum of digits of a number recursively.
// Input: An integer
// Output: Sum of digits

package main

import "fmt"

func sumOfDigits(n int) int {
	if n == 0 {
		return 0
	}
	return (n % 10) + sumOfDigits(n/10)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(sumOfDigits(n))
}
