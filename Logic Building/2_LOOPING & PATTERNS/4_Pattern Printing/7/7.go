// Q7: Print stars in even numbers (2, 4, 6, 8, 10).
// Input: An integer n
// Output: Rows with 2, 4, 6... stars

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(strings.Repeat("*", 2*i))
    }
}
