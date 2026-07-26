// Q7: Print pattern of increasing characters (A, AB, ABC...).
// Input: An integer n
// Output: Alphabet sequence pattern

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        for j := 0; j < i; j++ {
            fmt.Print(rune('A' + j))
        }
        fmt.Println()
    }
}
