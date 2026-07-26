// Q8: Find the second largest element in an array.
// Input: Size n, then n integers
// Output: Second largest element

package main

import (
    "bufio"
    "fmt"
    "os"
    "sort"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var n int
    fmt.Fscan(reader, &n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Fscan(reader, &arr[i])
    }
    seen := make(map[int]bool)
    unique := []int{}
    for _, v := range arr {
        if !seen[v] {
            seen[v] = true
            unique = append(unique, v)
        }
    }
    sort.Sort(sort.Reverse(sort.IntSlice(unique)))
    fmt.Println(unique[1])
}
