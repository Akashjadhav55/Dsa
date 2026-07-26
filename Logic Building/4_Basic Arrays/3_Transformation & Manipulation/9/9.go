// Q9: Swap alternate elements (1st <-> 2nd, 3rd <-> 4th, etc.).
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
    for i := 0; i+1 < n; i += 2 {
        arr[i], arr[i+1] = arr[i+1], arr[i]
    }
    for i := 0; i < n; i++ {
        fmt.Println(arr[i])
    }
}
