// Q23: Print hourglass star pattern.
// Input: An integer n
// Output: Hourglass shape with stars

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := n; i >= 1; i-- {
        fmt.Println(strings.Repeat(" ", n-i) + strings.Repeat("*", 2*i-1))
    }
    for i := 2; i <= n; i++ {
        fmt.Println(strings.Repeat(" ", n-i) + strings.Repeat("*", 2*i-1))
    }
}
