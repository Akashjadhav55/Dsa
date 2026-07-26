// Q5: Print the table of a given number (n x 1 to n x 10).
// Input: An integer n
// Output: Multiplication table of n

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= 10; i++ {
        fmt.Printf("%d x %d = %d\n", n, i, n*i)
    }
}
