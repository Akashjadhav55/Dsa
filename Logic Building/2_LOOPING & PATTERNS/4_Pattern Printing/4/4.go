// Q4: Print a square of stars (n x n).
// Input: An integer n
// Output: n x n grid of stars

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        fmt.Println(strings.Repeat("*", n))
    }
}
