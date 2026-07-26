// Q10: Find nCr (Combination formula) recursively using Pascal's relation.
// Input: n and r
// Output: nCr value

package main

import "fmt"

func nCr(n, r int) int {
	if r == 0 || r == n {
		return 1
	}
	return nCr(n-1, r-1) + nCr(n-1, r)
}

func main() {
	var n, r int
	fmt.Scan(&n, &r)
	fmt.Println(nCr(n, r))
}
