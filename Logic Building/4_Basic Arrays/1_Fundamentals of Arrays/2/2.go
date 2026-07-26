// Q2: Find the sum of all elements in an array.
// Input: Size n, then n integers
// Output: Sum of elements

package main

import "fmt"

func main() {
    var n, sum int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
        sum += arr[i]
    }
    fmt.Println(sum)
}
