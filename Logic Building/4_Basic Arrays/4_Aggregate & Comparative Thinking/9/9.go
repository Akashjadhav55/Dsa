// Q9: Create a frequency array of numbers (count occurrence of each number).
// Input: Size n, then n integers
// Output: Frequency of each element

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
        fmt.Printf("%d -> %d\n", v, freq[v])
    }
}
