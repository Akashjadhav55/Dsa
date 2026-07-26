// Q7: Find element-wise sum of two arrays (A[i] + B[i]).
// Input: Size n, two arrays
// Output: Element-wise sum array

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
        fmt.Println(a[i] + b[i])
    }
}
