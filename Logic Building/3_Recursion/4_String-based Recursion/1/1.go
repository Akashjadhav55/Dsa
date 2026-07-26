// Q1: Reverse a string using recursion.
// Input: A string
// Output: Reversed string

package main

import "fmt"

func reverseString(s string, i int) string {
	if i < 0 {
		return ""
	}
	return string(s[i]) + reverseString(s, i-1)
}

func main() {
	var s string
	fmt.Scan(&s)
	fmt.Println(reverseString(s, len(s)-1))
}
