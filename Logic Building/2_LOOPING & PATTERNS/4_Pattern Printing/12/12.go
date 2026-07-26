// Q12: Print repeated numbers per row (1, 22, 333, 4444, 55555).
// Input: An integer n
// Output: Repeated number pattern

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(strings.Repeat(fmt.Sprintf("%d", i), i))
    }
}
