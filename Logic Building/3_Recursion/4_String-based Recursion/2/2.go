// Q2: Check if a string is palindrome using recursion.
// Input: A string
// Output: "Palindrome" or "Not a Palindrome"

package main

import "fmt"

func isPalindrome(s string, l, r int) bool {
	if l >= r {
		return true
	}
	if s[l] != s[r] {
		return false
	}
	return isPalindrome(s, l+1, r-1)
}

func main() {
	var s string
	fmt.Scan(&s)
	if isPalindrome(s, 0, len(s)-1) {
		fmt.Println("Palindrome")
	} else {
		fmt.Println("Not a Palindrome")
	}
}
