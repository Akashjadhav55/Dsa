// Q4: Check if an array is sorted (ascending or descending).
// Input: Size n, then n integers
// Output: "Ascending", "Descending", or "Not Sorted"

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
    asc, desc := true, true
    for i := 0; i < n-1; i++ {
        if arr[i] > arr[i+1] {
            asc = false
        }
        if arr[i] < arr[i+1] {
            desc = false
        }
    }
    if asc {
        fmt.Println("Ascending")
    } else if desc {
        fmt.Println("Descending")
    } else {
        fmt.Println("Not Sorted")
    }
}
