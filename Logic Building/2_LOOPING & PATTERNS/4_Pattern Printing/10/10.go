// Q10: Print stars and spaces alternating.
// Input: An integer n
// Output: Alternating star-space pattern in pyramid shape

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(strings.Repeat(" ", n-i) + strings.Repeat("* ", i))
    }
}
