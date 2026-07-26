// Q4: Print a triangle of stars recursively (bottom-up).
// Input: An integer n
// Output: Decreasing triangle of stars

package main

import "fmt"

func printRow(cols int) {
	if cols == 0 {
		return
	}
	fmt.Print("* ")
	printRow(cols - 1)
}

func printTriangle(n int) {
	if n == 0 {
		return
	}
	printRow(n)
	fmt.Println()
	printTriangle(n - 1)
}

func main() {
	var n int
	fmt.Scan(&n)
	printTriangle(n)
}
