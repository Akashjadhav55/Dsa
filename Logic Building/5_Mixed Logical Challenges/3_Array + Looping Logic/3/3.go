// Q3: Print all unique elements from an array.
// Input: Size n, then n integers
// Output: Unique elements

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
    for i := 0; i < n; i++ {
        unique := true
        for j := 0; j < n; j++ {
            if i != j && arr[i] == arr[j] {
                unique = false
                break
            }
        }
        if unique {
            fmt.Print(arr[i], " ")
        }
    }
    fmt.Println()
}
