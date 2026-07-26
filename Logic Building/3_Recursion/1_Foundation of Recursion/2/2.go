// Q2: Print numbers from n down to 1 using recursion.
// Input: An integer n
// Output: Numbers n to 1

package main

import "fmt"

func printNTo1(n int) {
	if n == 0 {
		return
	}
	fmt.Print(n, " ")
	printNTo1(n - 1)
}

func main() {
	var n int
	fmt.Scan(&n)
	printNTo1(n)
}
