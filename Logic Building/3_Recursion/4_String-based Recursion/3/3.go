// Q3: Count vowels in a string recursively.
// Input: A string
// Output: Count of vowels

package main

import (
	"fmt"
	"strings"
)

func countVowels(s string, i int) int {
	if i == len(s) {
		return 0
	}
	c := strings.ToLower(string(s[i]))
	count := 0
	if c == "a" || c == "e" || c == "i" || c == "o" || c == "u" {
		count = 1
	}
	return count + countVowels(s, i+1)
}

func main() {
	var s string
	fmt.Scan(&s)
	fmt.Println(countVowels(s, 0))
}
