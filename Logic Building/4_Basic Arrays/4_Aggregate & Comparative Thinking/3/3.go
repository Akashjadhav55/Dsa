// Q3: Merge two arrays into a third array.
// Input: Size n and m, two arrays
// Output: Merged array

package main

import "fmt"

func main() {
    var n, m int
    fmt.Scan(&n)
    a := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&a[i])
    }
    fmt.Scan(&m)
    b := make([]int, m)
    for i := 0; i < m; i++ {
        fmt.Scan(&b[i])
    }
    merged := append(a, b...)
    for i := 0; i < len(merged); i++ {
        fmt.Println(merged[i])
    }
}
