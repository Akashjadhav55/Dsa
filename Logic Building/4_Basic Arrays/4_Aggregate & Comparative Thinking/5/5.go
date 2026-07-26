// Q5: Find elements that are in one array but not in the other.
// Input: Size n and m, two arrays
// Output: Elements only in first array

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
    setB := make(map[int]bool)
    for i := 0; i < m; i++ {
        var x int
        fmt.Scan(&x)
        setB[x] = true
    }
    for i := 0; i < n; i++ {
        if !setB[a[i]] {
            fmt.Println(a[i])
        }
    }
}
