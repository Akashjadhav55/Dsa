// Q2: Create a new array containing only even elements.
// Input: Size n, then n integers
// Output: Array of even elements

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
        if arr[i]%2 == 0 {
            fmt.Println(arr[i])
        }
    }
}
