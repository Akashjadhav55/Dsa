// Q5: Print pattern of numbers recursively (1 to n each row).
// Input: An integer n
// Output: Number pattern

package main

import "fmt"

func printNums(j int) {
	if j == 0 {
		return
	}
	printNums(j - 1)
	fmt.Print(j, " ")
}

func printPattern(n, i int) {
	if i > n {
		return
	}
	printNums(i)
	fmt.Println()
	printPattern(n, i+1)
}

func main() {
	var n int
	fmt.Scan(&n)
	printPattern(n, 1)
}
