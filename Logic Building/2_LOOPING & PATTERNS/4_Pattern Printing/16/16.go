// Q16: Print alphabet sequence (A, AB, ABC, ABCD).
// Input: An integer n
// Output: Alphabet sequence pattern

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
