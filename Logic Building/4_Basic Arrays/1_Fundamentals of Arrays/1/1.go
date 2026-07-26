// Q1: Input n and take n integers into an array; print them.
// Input: Size n, then n integers
// Output: All n elements

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    for i := 0; i < n; i++ {
        fmt.Println(arr[i])
    }
}
