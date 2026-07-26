// Q7: Rotate an array by one position to the left.
// Input: Size n, then n integers
// Output: Left-rotated array

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    first := arr[0]
    for i := 0; i < n-1; i++ {
        arr[i] = arr[i+1]
    }
    arr[n-1] = first
    for i := 0; i < n; i++ {
        fmt.Println(arr[i])
    }
}
