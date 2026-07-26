// Q4: Find the second smallest element in an array.
// Input: Size n, then n integers
// Output: Second smallest element

package main

import (
    "fmt"
    "math"
)

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    smallest := math.MaxInt64
    second := math.MaxInt64
    for i := 0; i < n; i++ {
        if arr[i] < smallest {
            second = smallest
            smallest = arr[i]
        } else if arr[i] < second && arr[i] != smallest {
            second = arr[i]
        }
    }
    fmt.Println(second)
}
