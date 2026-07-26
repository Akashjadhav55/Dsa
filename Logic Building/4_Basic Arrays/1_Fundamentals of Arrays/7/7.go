// Q7: Count how many elements are even and odd.
// Input: Size n, then n integers
// Output: Count of even and odd

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    even, odd := 0, 0
    for i := 0; i < n; i++ {
        var x int
        fmt.Scan(&x)
        if x%2 == 0 {
            even++
        } else {
            odd++
        }
    }
    fmt.Printf("Even: %d\n", even)
    fmt.Printf("Odd: %d\n", odd)
}
