// Q5: Find the minimum element in an array.
// Input: Size n, then n integers
// Output: Minimum element

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    min := arr[0]
    for i := 1; i < n; i++ {
        if arr[i] < min {
            min = arr[i]
        }
    }
    fmt.Println(min)
}
