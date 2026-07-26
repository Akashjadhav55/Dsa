// Q25: Print number pyramid (1, 232, 34543, 4567654).
// Input: An integer n
// Output: Number pyramid pattern

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        row := strings.Repeat(" ", n-i)
        for j := 0; j < i; j++ {
            row += fmt.Sprintf("%d", i+j)
        }
        for j := i - 2; j >= 0; j-- {
            row += fmt.Sprintf("%d", i+j)
        }
        fmt.Println(row)
    }
}
