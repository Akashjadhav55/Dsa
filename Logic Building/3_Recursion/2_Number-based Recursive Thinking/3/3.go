// Q3: Check if a number is a palindrome using recursion.
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

package main

import "fmt"

func isPalindrome(n, original, rev int) bool {
	if n == 0 {
		return original == rev
	}
	return isPalindrome(n/10, original, rev*10+n%10)
}

func main() {
	var n int
	fmt.Scan(&n)
	if isPalindrome(n, n, 0) {
		fmt.Println("Palindrome")
	} else {
		fmt.Println("Not a Palindrome")
	}
}
