// Q4: Find the common elements between two arrays.
// Input: Size n and m, two arrays
// Output: Common elements

package main

import "fmt"

func main() {
    var n, m int
    fmt.Scan(&n)
    a := make(map[int]bool)
    for i := 0; i < n; i++ {
        var x int
        fmt.Scan(&x)
        a[x] = true
    }
    fmt.Scan(&m)
    b := make([]int, m)
    for i := 0; i < m; i++ {
        fmt.Scan(&b[i])
    }
    for i := 0; i < m; i++ {
        if a[b[i]] {
            fmt.Println(b[i])
            a[b[i]] = false
        }
    }
}
