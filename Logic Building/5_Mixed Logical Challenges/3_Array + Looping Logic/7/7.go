// Q7: Merge two arrays into one.
// Input: Size n and m, two arrays
// Output: Merged array

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
    merged := append(a, b...)
    for _, v := range merged {
        fmt.Print(v, " ")
    }
    fmt.Println()
}
