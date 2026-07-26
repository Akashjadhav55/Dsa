// Q7: Print all characters of a string one by one recursively.
// Input: A string
// Output: Each character on a new line

package main

import "fmt"

func printChars(s string, i int) {
	if i == len(s) {
		return
	}
	fmt.Println(string(s[i]))
	printChars(s, i+1)
}

func main() {
	var s string
	fmt.Scan(&s)
	printChars(s, 0)
}
