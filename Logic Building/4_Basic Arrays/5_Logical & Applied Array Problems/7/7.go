// Q7: Count how many pairs of elements have a sum equal to a given number k.
// Input: Size n, n integers, and value k
// Output: Count of pairs

package main

import "fmt"

func main() {
    var n, k, count int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    fmt.Scan(&k)
    for i := 0; i < n; i++ {
        for j := i + 1; j < n; j++ {
            if arr[i]+arr[j] == k {
                count++
            }
        }
    }
    fmt.Println(count)
}
