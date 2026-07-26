// Q1: Compare two arrays - check if they are equal (same elements and order).
// Input: Size n, two arrays of n elements
// Output: "Equal" or "Not Equal"

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
    equal := true
    for i := 0; i < n; i++ {
        if a[i] != b[i] {
            equal = false
            break
        }
    }
    if equal {
        fmt.Println("Equal")
    } else {
        fmt.Println("Not Equal")
    }
}
