// Q10: Print all elements that appear more than once.
// Input: Size n, then n integers
// Output: Duplicate elements

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
        if freq[v] > 1 {
            fmt.Println(v)
        }
    }
}
