// Q10: Copy one array to another manually.
// Input: Size n, then n integers
// Output: Copied array

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    copy := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
        copy[i] = arr[i]
    }
    for i := 0; i < n; i++ {
        fmt.Println(copy[i])
    }
}
