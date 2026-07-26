// Q8: Count how many elements are greater than the average of the array.
// Input: Size n, then n integers
// Output: Count of elements above average

package main

import "fmt"

func main() {
    var n, sum, count int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
        sum += arr[i]
    }
    avg := float64(sum) / float64(n)
    for i := 0; i < n; i++ {
        if float64(arr[i]) > avg {
            count++
        }
    }
    fmt.Println(count)
}
