// Q1: Print numbers from 1 to n using recursion.
// Input: An integer n
// Output: Numbers 1 to n

package main

import "fmt"

func print1ToN(n int) {
	if n == 0 {
		return
	}
	print1ToN(n - 1)
	fmt.Print(n, " ")
}

func main() {
	var n int
	fmt.Scan(&n)
	print1ToN(n)
}
