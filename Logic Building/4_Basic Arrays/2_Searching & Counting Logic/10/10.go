// Q10: Count how many elements are perfect squares.
// Input: Size n, then n integers
// Output: Count of perfect squares

package main

import (
    "fmt"
    "math"
)

func isPerfectSquare(num int) bool {
    if num < 0 {
        return false
    }
    sqrt := int(math.Sqrt(float64(num)))
    return sqrt*sqrt == num
}

func main() {
    var n, count int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        var x int
        fmt.Scan(&x)
        if isPerfectSquare(x) {
            count++
        }
    }
    fmt.Println(count)
}
