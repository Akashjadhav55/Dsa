// Q6: Find the sum of even elements only.
// Input: Size n, then n integers
// Output: Sum of even elements

package main

import "fmt"

func main() {
    var n, sum int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        var x int
        fmt.Scan(&x)
        if x%2 == 0 {
            sum += x
        }
    }
    fmt.Println(sum)
}
