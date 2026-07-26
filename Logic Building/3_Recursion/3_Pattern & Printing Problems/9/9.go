// Q9: Print sum of series 1 + 2 + 3 + ... + n recursively and display each step.
// Input: An integer n
// Output: Running sum at each step

package main

import "fmt"

func printSeries(n int) int {
	if n == 0 {
		return 0
	}
	return n + printSeries(n-1)
}

func main() {
	var n int
	fmt.Scan(&n)
	result := ""
	for i := 1; i <= n; i++ {
		if i > 1 {
			result += " + "
		}
		result += fmt.Sprintf("%d", i)
	}
	fmt.Printf("%s = %d\n", result, printSeries(n))
}
