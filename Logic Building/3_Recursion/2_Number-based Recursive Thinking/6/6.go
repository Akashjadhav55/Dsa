// Q6: Convert a number to binary recursively.
// Input: An integer
// Output: Binary representation

package main

import "fmt"

func toBinary(n int) string {
	if n <= 1 {
		return fmt.Sprintf("%d", n)
	}
	return toBinary(n/2) + fmt.Sprintf("%d", n%2)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(toBinary(n))
}
