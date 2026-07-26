// Q3: Replace every negative number with 0.
// Input: Size n, then n integers
// Output: Modified array

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
        if arr[i] < 0 {
            arr[i] = 0
        }
    }
    for i := 0; i < n; i++ {
        fmt.Println(arr[i])
    }
}
