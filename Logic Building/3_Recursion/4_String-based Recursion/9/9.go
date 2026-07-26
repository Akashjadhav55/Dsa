// Q9: Convert a string to uppercase recursively.
// Input: A string
// Output: Uppercase string

package main

import "fmt"

func toUpperCase(s string, i int) string {
	if i == len(s) {
		return ""
	}
	c := s[i]
	if c >= 'a' && c <= 'z' {
		c = c - 32
	}
	return string(c) + toUpperCase(s, i+1)
}

func main() {
	var s string
	fmt.Scan(&s)
	fmt.Println(toUpperCase(s, 0))
}
