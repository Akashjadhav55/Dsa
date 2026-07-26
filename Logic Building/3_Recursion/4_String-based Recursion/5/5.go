// Q5: Replace all occurrences of a character (say 'a' -> 'x') recursively.
// Input: A string and characters to find/replace
// Output: Modified string

package main

import "fmt"

func replaceChar(s string, i int, find, replace byte) string {
	if i == len(s) {
		return ""
	}
	if s[i] == find {
		return string(replace) + replaceChar(s, i+1, find, replace)
	}
	return string(s[i]) + replaceChar(s, i+1, find, replace)
}

func main() {
	var s string
	var find, replace string
	fmt.Scan(&s)
	fmt.Scan(&find, &replace)
	fmt.Println(replaceChar(s, 0, find[0], replace[0]))
}
