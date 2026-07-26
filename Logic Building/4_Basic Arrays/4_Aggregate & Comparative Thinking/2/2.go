// Q2: Compare two arrays - check if they contain the same elements (ignore order).
// Input: Size n, two arrays of n elements
// Output: "Same Elements" or "Different Elements"

package main

import (
    "fmt"
    "sort"
)

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
    sort.Ints(a)
    sort.Ints(b)
    same := true
    for i := 0; i < n; i++ {
        if a[i] != b[i] {
            same = false
            break
        }
    }
    if same {
        fmt.Println("Same Elements")
    } else {
        fmt.Println("Different Elements")
    }
}
