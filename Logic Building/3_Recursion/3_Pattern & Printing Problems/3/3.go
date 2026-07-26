// Q3: Print a triangle of stars recursively (top-down).
// Input: An integer n
// Output: Increasing triangle of stars

package main

import "fmt"

func printRow(cols int) {
	if cols == 0 {
		return
	}
	fmt.Print("* ")
	printRow(cols - 1)
}

func printTriangle(n, i int) {
	if i > n {
		return
	}
	printRow(i)
	fmt.Println()
	printTriangle(n, i+1)
}

func main() {
	var n int
	fmt.Scan(&n)
	printTriangle(n, 1)
}
