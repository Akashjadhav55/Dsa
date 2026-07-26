// Q8: Print Pascal's triangle up to N rows.
// Input: An integer N
// Output: Pascal's triangle

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        val := 1
        for j := 0; j <= i; j++ {
            fmt.Print(val, " ")
            val = val * (i - j) / (j + 1)
        }
        fmt.Println()
    }
}
