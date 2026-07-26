// Q8: Print numbers in increasing and decreasing order in same function.
// Input: An integer n
// Output: 1 to n then n to 1

package main

import "fmt"

func printIncDec(n int) {
	if n == 0 {
		return
	}
	fmt.Print(n, " ")
	printIncDec(n - 1)
	fmt.Print(n, " ")
}

func main() {
	var n int
	fmt.Scan(&n)
	printIncDec(n)
}
