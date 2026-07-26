// Q7: Print a pattern where each row i prints i*i.
// Input: An integer n
// Output: Pattern of squares

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(i * i)
    }
}
