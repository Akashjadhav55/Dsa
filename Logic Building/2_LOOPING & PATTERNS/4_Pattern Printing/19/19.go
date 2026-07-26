// Q19: Print alphabet pyramid (A, ABA, ABCBA, ABCDCBA).
// Input: An integer n
// Output: Palindrome alphabet pyramid

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        row := strings.Repeat(" ", n-i-1)
        for j := 0; j <= i; j++ {
            row += string(rune('A' + j))
        }
        for j := i - 1; j >= 0; j-- {
            row += string(rune('A' + j))
        }
        fmt.Println(row)
    }
}
