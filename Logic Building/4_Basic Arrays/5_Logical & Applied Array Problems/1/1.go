// Q1: Check if the array is sorted in ascending order.
// Input: Size n, then n integers
// Output: "Sorted" or "Not Sorted"

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    sorted := true
    for i := 0; i < n-1; i++ {
        if arr[i] > arr[i+1] {
            sorted = false
            break
        }
    }
    if sorted {
        fmt.Println("Sorted")
    } else {
        fmt.Println("Not Sorted")
    }
}
