// Q4: Reverse an array in-place.
// Input: Size n, then n integers
// Output: Reversed array

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
    for i, j := 0, n-1; i < j; i, j = i+1, j-1 {
        arr[i], arr[j] = arr[j], arr[i]
    }
    for _, v := range arr {
        fmt.Print(v, " ")
    }
    fmt.Println()
}
