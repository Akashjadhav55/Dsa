// Q4: Print only odd numbers from 1 to n recursively.
// Input: An integer n
// Output: Odd numbers from 1 to n

package main

import "fmt"

func printOdd(i, n int) {
	if i > n {
		return
	}
	if i%2 != 0 {
		fmt.Print(i, " ")
	}
	printOdd(i+1, n)
}

func main() {
	var n int
	fmt.Scan(&n)
	printOdd(1, n)
}
