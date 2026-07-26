// Q6: Print a right-aligned triangle of stars.
// Input: An integer n
// Output: Right-aligned triangle with leading spaces

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(strings.Repeat(" ", n-i) + strings.Repeat("*", i))
    }
}
