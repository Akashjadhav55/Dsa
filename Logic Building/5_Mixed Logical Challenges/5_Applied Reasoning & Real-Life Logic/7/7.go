// Q7: Find common elements between two arrays.
// Input: Size n and m, two arrays
// Output: Common elements

package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var n, m int
    fmt.Fscan(reader, &n)
    a := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Fscan(reader, &a[i])
    }
    fmt.Fscan(reader, &m)
    b := make([]int, m)
    for i := 0; i < m; i++ {
        fmt.Fscan(reader, &b[i])
    }
    seen := make(map[int]bool)
    for _, v := range a {
        for _, w := range b {
            if v == w && !seen[v] {
                fmt.Print(v, " ")
                seen[v] = true
                break
            }
        }
    }
    fmt.Println()
}
