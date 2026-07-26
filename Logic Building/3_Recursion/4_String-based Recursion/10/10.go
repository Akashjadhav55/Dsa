// Q10: Count consonants and vowels separately using recursion.
// Input: A string
// Output: Vowel count and consonant count

package main

import (
	"fmt"
	"strings"
)

func countVC(s string, i, v, c int) (int, int) {
	if i == len(s) {
		return v, c
	}
	ch := strings.ToLower(string(s[i]))[0]
	if ch >= 'a' && ch <= 'z' {
		if ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' {
			return countVC(s, i+1, v+1, c)
		}
		return countVC(s, i+1, v, c+1)
	}
	return countVC(s, i+1, v, c)
}

func main() {
	var s string
	fmt.Scan(&s)
	v, c := countVC(s, 0, 0, 0)
	fmt.Printf("Vowels: %d\n", v)
	fmt.Printf("Consonants: %d\n", c)
}
