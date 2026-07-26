// Q5: Print an increasing triangle of stars.
// Input: An integer n
// Output: Triangle with 1 star in row 1, 2 in row 2, etc.

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(strings.Repeat("*", i))
    }
}
