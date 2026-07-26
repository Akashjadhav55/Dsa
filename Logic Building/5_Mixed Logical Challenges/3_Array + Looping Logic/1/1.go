// Q1: Find the maximum and minimum element in an array.
// Input: Size n, then n integers
// Output: Maximum and minimum

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
    maxVal, minVal := -1<<63, 1<<63-1
    for i := 0; i < n; i++ {
        fmt.Fscan(reader, &arr[i])
        if arr[i] > maxVal {
            maxVal = arr[i]
        }
        if arr[i] < minVal {
            minVal = arr[i]
        }
    }
    fmt.Println("Maximum:", maxVal)
    fmt.Println("Minimum:", minVal)
}
