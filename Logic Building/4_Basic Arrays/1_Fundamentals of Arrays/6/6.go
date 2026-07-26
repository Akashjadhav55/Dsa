// Q6: Count how many elements are positive, negative, or zero.
// Input: Size n, then n integers
// Output: Count of positive, negative, and zero

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    pos, neg, zero := 0, 0, 0
    for i := 0; i < n; i++ {
        var x int
        fmt.Scan(&x)
        if x > 0 {
            pos++
        } else if x < 0 {
            neg++
        } else {
            zero++
        }
    }
    fmt.Printf("Positive: %d\n", pos)
    fmt.Printf("Negative: %d\n", neg)
    fmt.Printf("Zero: %d\n", zero)
}
