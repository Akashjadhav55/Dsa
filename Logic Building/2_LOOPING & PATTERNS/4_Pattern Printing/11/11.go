// Q11: Print numbers in increasing sequence (1, 12, 123, 1234, 12345).
// Input: An integer n
// Output: Number sequence pattern

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        row := ""
        for j := 1; j <= i; j++ {
            row += strings.Repeat("", 0) + fmt.Sprintf("%d", j)
        }
        fmt.Println(row)
    }
}
