// Q7: Calculate power of a number (x^n) using recursion.
// Input: Base x and exponent n
// Output: x raised to power n

package main

import "fmt"

func power(x, n int) int {
	if n == 0 {
		return 1
	}
	return x * power(x, n-1)
}

func main() {
	var x, n int
	fmt.Scan(&x, &n)
	fmt.Println(power(x, n))
}
