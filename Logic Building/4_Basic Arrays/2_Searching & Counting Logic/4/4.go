// Q4: Find the last occurrence of a given number.
// Input: Size n, n integers, element x
// Output: Index of last occurrence (-1 if not found)

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    var x int
    fmt.Scan(&x)
    idx := -1
    for i := 0; i < n; i++ {
        if arr[i] == x {
            idx = i
        }
    }
    fmt.Println(idx)
}
