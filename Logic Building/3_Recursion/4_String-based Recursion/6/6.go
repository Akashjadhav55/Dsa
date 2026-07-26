// Q6: Remove all occurrences of a character from a string recursively.
// Input: A string and a character
// Output: String without the character

package main

import "fmt"

func removeChar(s string, i int, ch byte) string {
	if i == len(s) {
		return ""
	}
	if s[i] == ch {
		return removeChar(s, i+1, ch)
	}
	return string(s[i]) + removeChar(s, i+1, ch)
}

func main() {
	var s string
	var ch string
	fmt.Scan(&s)
	fmt.Scan(&ch)
	fmt.Println(removeChar(s, 0, ch[0]))
}
