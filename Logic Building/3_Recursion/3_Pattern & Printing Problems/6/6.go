// Q6: Print reverse triangle pattern recursively.
// Input: An integer n
// Output: Reverse triangle

package main

import "fmt"

func printSpaces(s int) {
	if s == 0 {
		return
	}
	fmt.Print("  ")
	printSpaces(s - 1)
}

func printStars(c int) {
	if c == 0 {
		return
	}
	fmt.Print("* ")
	printStars(c - 1)
}

func printReverseTriangle(n, i int) {
	if i > n {
		return
	}
	printSpaces(i - 1)
	printStars(n - i + 1)
	fmt.Println()
	printReverseTriangle(n, i+1)
}

func main() {
	var n int
	fmt.Scan(&n)
	printReverseTriangle(n, 1)
}
