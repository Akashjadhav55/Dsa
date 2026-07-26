// Q1: Create a new array containing squares of all numbers.
// Input: Size n, then n integers
// Output: Array of squares

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
        fmt.Println(arr[i] * arr[i])
    }
}
