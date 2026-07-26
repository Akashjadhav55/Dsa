// Q9: Find the index of the minimum element.
// Input: Size n, then n integers
// Output: Index of minimum element

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    minIdx := 0
    for i := 1; i < n; i++ {
        if arr[i] < arr[minIdx] {
            minIdx = i
        }
    }
    fmt.Println(minIdx)
}
