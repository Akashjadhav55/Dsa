// Q4: Replace all even numbers with 1 and all odd with 0.
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
    }
    for i := 0; i < n; i++ {
        if arr[i]%2 == 0 {
            fmt.Println(1)
        } else {
            fmt.Println(0)
        }
    }
}
