// Q5: Swap the first and last elements of the array.
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
    arr[0], arr[n-1] = arr[n-1], arr[0]
    for i := 0; i < n; i++ {
        fmt.Println(arr[i])
    }
}
