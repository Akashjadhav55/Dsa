// Q2: Print a square of stars recursively (n x n).
// Input: An integer n
// Output: n x n grid of stars

package main

import "fmt"

func printRow(cols int) {
	if cols == 0 {
		return
	}
	fmt.Print("* ")
	printRow(cols - 1)
}

func printSquare(rows, cols int) {
	if rows == 0 {
		return
	}
	printRow(cols)
	fmt.Println()
	printSquare(rows-1, cols)
}

func main() {
	var n int
	fmt.Scan(&n)
	printSquare(n, n)
}
