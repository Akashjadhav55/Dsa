// Q5: Count how many times a number appears consecutively in an array.
// Input: Size n, then n integers
// Output: Consecutive occurrence counts

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
    count := 1
    for i := 1; i < n; i++ {
        if arr[i] == arr[i-1] {
            count++
        } else {
            fmt.Printf("%d appears %d times\n", arr[i-1], count)
            count = 1
        }
    }
    fmt.Printf("%d appears %d times\n", arr[n-1], count)
}
