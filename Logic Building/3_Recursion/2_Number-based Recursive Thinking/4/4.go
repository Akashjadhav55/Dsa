// Q4: Find product of digits of a number recursively.
// Input: An integer
// Output: Product of digits

package main

import "fmt"

func productOfDigits(n int) int {
	if n == 0 {
		return 1
	}
	return (n % 10) * productOfDigits(n/10)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(productOfDigits(n))
}
