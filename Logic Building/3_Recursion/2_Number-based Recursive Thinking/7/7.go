// Q7: Print digits of a number in words recursively (e.g., 123 -> "one two three").
// Input: An integer
// Output: Digits in words

package main

import "fmt"

var words = [10]string{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}

func printDigitsInWords(n int) {
	if n == 0 {
		return
	}
	printDigitsInWords(n / 10)
	fmt.Print(words[n%10], " ")
}

func main() {
	var n int
	fmt.Scan(&n)
	printDigitsInWords(n)
}
