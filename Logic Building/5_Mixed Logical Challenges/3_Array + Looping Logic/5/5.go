// Q5: Shift all zeros to the end of the array.
// Input: Size n, then n integers
// Output: Array with zeros at end

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
    idx := 0
    for i := 0; i < n; i++ {
        if arr[i] != 0 {
            arr[idx] = arr[i]
            idx++
        }
    }
    for idx < n {
        arr[idx] = 0
        idx++
    }
    for _, v := range arr {
        fmt.Print(v, " ")
    }
    fmt.Println()
}
