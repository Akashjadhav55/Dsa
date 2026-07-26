// Q9: Print first n terms of an arithmetic progression (a, d).
// Input: First term a and common difference d, and n terms
// Output: First n terms of the AP

package main

import "fmt"

func main() {
    var a, d, n int
    fmt.Scan(&a, &d, &n)
    for i := 0; i < n; i++ {
        fmt.Print(a+i*d, " ")
    }
    fmt.Println()
}
