// Q1: Print a line of n stars recursively.
// Input: An integer n
// Output: A line of n stars

package main

import "fmt"

func printStars(n int) {
	if n == 0 {
		return
	}
	fmt.Print("* ")
	printStars(n - 1)
}

func main() {
	var n int
	fmt.Scan(&n)
	printStars(n)
}
