// Q9: Print Fibonacci series up to n terms.
// Input: An integer n
// Output: First n Fibonacci numbers

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    a, b := 0, 1
    for i := 0; i < n; i++ {
        fmt.Print(a, " ")
        a, b = b, a+b
    }
    fmt.Println()
}
