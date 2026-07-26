// Q7: Print multiplication table of n recursively.
// Input: An integer n
// Output: Table of n

package main

import "fmt"

func printTable(n, i int) {
	if i > 10 {
		return
	}
	fmt.Printf("%d x %d = %d\n", n, i, n*i)
	printTable(n, i+1)
}

func main() {
	var n int
	fmt.Scan(&n)
	printTable(n, 1)
}
