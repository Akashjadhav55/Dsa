// Q10: Print all unique elements (those that occur exactly once).
// Input: Size n, then n integers
// Output: Elements that occur exactly once

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    freq := make(map[int]int)
    order := make([]int, 0)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
        if freq[arr[i]] == 0 {
            order = append(order, arr[i])
        }
        freq[arr[i]]++
    }
    for _, v := range order {
        if freq[v] == 1 {
            fmt.Println(v)
        }
    }
}
