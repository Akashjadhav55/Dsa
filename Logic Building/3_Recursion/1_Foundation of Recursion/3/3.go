// Q3: Print only even numbers from 1 to n recursively.
// Input: An integer n
// Output: Even numbers from 1 to n

package main

import "fmt"

func printEven(i, n int) {
	if i > n {
		return
	}
	if i%2 == 0 {
		fmt.Print(i, " ")
	}
	printEven(i+1, n)
}

func main() {
	var n int
	fmt.Scan(&n)
	printEven(1, n)
}
