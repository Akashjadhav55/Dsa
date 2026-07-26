// Q2: Count how many times a given element appears.
// Input: Size n, n integers, element x
// Output: Count of occurrences

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
    count := 0
    for i := 0; i < n; i++ {
        if arr[i] == x {
            count++
        }
    }
    fmt.Println(count)
}
