// Q10: Print pattern of characters (A, AB, ABC, ...) recursively.
// Input: An integer n
// Output: Alphabet sequence pattern

package main

import "fmt"

func printChars(i int) {
	if i == 0 {
		return
	}
	printChars(i - 1)
	fmt.Print(rune('A'+i-1), " ")
}

func printPattern(n, i int) {
	if i > n {
		return
	}
	printChars(i)
	fmt.Println()
	printPattern(n, i+1)
}

func main() {
	var n int
	fmt.Scan(&n)
	printPattern(n, 1)
}
