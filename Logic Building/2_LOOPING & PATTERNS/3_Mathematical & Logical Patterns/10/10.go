// Q10: Print first n terms of a geometric progression (a, r).
// Input: First term a and common ratio r, and n terms
// Output: First n terms of the GP

package main

import "fmt"

func main() {
    var a, r, n int
    fmt.Scan(&a, &r, &n)
    term := a
    for i := 0; i < n; i++ {
        fmt.Print(term, " ")
        term *= r
    }
    fmt.Println()
}
