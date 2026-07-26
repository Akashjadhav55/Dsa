// Q3: Find the average of array elements.
// Input: Size n, then n integers
// Output: Average value

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
    fmt.Println(float64(sum) / float64(n))
}
