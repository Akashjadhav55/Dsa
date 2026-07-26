// Q9: Rotate an array by one position to the right.
// Input: Size n, then n integers
// Output: Right-rotated array

package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var n int
    fmt.Fscan(reader, &n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Fscan(reader, &arr[i])
    }
    last := arr[n-1]
    for i := n - 1; i > 0; i-- {
        arr[i] = arr[i-1]
    }
    arr[0] = last
    for _, v := range arr {
        fmt.Print(v, " ")
    }
    fmt.Println()
}
