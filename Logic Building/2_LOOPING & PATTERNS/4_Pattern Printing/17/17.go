// Q17: Print repeated alphabet per row (A, BB, CCC, DDDD).
// Input: An integer n
// Output: Repeated alphabet pattern

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        fmt.Println(strings.Repeat(string(rune('A'+i)), i+1))
    }
}
