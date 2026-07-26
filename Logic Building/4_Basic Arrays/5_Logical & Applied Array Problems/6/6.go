// Q6: Find the sum of all elements except the largest and smallest.
// Input: Size n, then n integers
// Output: Sum excluding max and min

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
    max, min := arr[0], arr[0]
    for i := 1; i < n; i++ {
        if arr[i] > max {
            max = arr[i]
        }
        if arr[i] < min {
            min = arr[i]
        }
    }
    fmt.Println(sum - max - min)
}
