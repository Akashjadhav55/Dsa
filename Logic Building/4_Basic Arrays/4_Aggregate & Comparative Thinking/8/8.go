// Q8: Find element-wise product of two arrays.
// Input: Size n, two arrays
// Output: Element-wise product array

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    a := make([]int, n)
    b := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&a[i])
    }
    for i := 0; i < n; i++ {
        fmt.Scan(&b[i])
    }
    for i := 0; i < n; i++ {
        fmt.Println(a[i] * b[i])
    }
}
