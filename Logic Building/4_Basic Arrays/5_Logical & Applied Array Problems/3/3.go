// Q3: Find the second largest element in an array.
// Input: Size n, then n integers
// Output: Second largest element

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
    largest := math.MinInt64
    second := math.MinInt64
    for i := 0; i < n; i++ {
        if arr[i] > largest {
            second = largest
            largest = arr[i]
        } else if arr[i] > second && arr[i] != largest {
            second = arr[i]
        }
    }
    fmt.Println(second)
}
