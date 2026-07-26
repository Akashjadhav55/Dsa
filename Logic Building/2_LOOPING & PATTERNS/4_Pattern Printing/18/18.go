// Q18: Print increasing alphabet per row (A, AB, ABC, ABCD, ABCDE).
// Input: An integer n
// Output: Increasing alphabet pattern

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        row := ""
        for j := 0; j <= i; j++ {
            row += string(rune('A' + j))
        }
        fmt.Println(row)
    }
}
