// Q4: Find the maximum element in an array.
// Input: Size n, then n integers
// Output: Maximum element

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    max := arr[0]
    for i := 1; i < n; i++ {
        if arr[i] > max {
            max = arr[i]
        }
    }
    fmt.Println(max)
}
