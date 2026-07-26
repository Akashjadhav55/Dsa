// Q22: Print diamond star pattern.
// Input: An integer n
// Output: Diamond shape with stars

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(strings.Repeat(" ", n-i) + strings.Repeat("*", 2*i-1))
    }
    for i := n - 1; i >= 1; i-- {
        fmt.Println(strings.Repeat(" ", n-i) + strings.Repeat("*", 2*i-1))
    }
}
