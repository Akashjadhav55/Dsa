// Q10: Take n elements and print only those greater than a given value k.
// Input: Size n, n integers, and value k
// Output: Elements greater than k

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    var k int
    fmt.Scan(&k)
    for i := 0; i < n; i++ {
        if arr[i] > k {
            fmt.Println(arr[i])
        }
    }
}
