// Q14: Print single digit repeating pattern (1, 11, 111, 1111).
// Input: An integer n
// Output: Repeating digit pattern

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(strings.Repeat("1", i))
    }
}
