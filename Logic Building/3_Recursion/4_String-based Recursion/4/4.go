// Q4: Remove all spaces from a string recursively.
// Input: A string
// Output: String without spaces

package main

import "fmt"

func removeSpaces(s string, i int) string {
	if i == len(s) {
		return ""
	}
	if s[i] == ' ' {
		return removeSpaces(s, i+1)
	}
	return string(s[i]) + removeSpaces(s, i+1)
}

func main() {
	var s string
	fmt.Scan(&s)
	fmt.Println(removeSpaces(s, 0))
}
