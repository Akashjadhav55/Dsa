// Q8: Rotate an array by one position to the right.
// Input: Size n, then n integers
// Output: Right-rotated array

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    last := arr[n-1]
    for i := n - 1; i > 0; i-- {
        arr[i] = arr[i-1]
    }
    arr[0] = last
    for i := 0; i < n; i++ {
        fmt.Println(arr[i])
    }
}
