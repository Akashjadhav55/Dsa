// Q8: Print stars in odd numbers (1, 3, 5, 7, 9).
// Input: An integer n
// Output: Rows with 1, 3, 5... stars

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        fmt.Println(strings.Repeat("*", 2*i+1))
    }
}
