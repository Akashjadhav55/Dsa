// Q8: Print the string in reverse order recursively (without using loops).
// Input: A string
// Output: Reversed string

package main

import "fmt"

func printReverse(s string, i int) {
	if i < 0 {
		return
	}
	fmt.Print(string(s[i]))
	printReverse(s, i-1)
}

func main() {
	var s string
	fmt.Scan(&s)
	printReverse(s, len(s)-1)
}
