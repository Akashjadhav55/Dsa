// Q3: Print all subarrays of a given array.
// Input: Size n, then n integers
// Output: All possible subarrays

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
        for j := i; j < n; j++ {
            fmt.Print("[")
            for k := i; k <= j; k++ {
                fmt.Print(arr[k])
                if k < j {
                    fmt.Print(", ")
                }
            }
            fmt.Println("]")
        }
    }
}
