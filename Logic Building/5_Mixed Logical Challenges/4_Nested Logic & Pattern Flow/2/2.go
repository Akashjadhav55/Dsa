// Q2: Print all pairs in an array whose sum equals a given number.
// Input: Size n, n integers, and target sum
// Output: All pairs with the given sum

package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var n, target int
    fmt.Fscan(reader, &n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Fscan(reader, &arr[i])
    }
    fmt.Fscan(reader, &target)
    for i := 0; i < n; i++ {
        for j := i + 1; j < n; j++ {
            if arr[i]+arr[j] == target {
                fmt.Printf("%d + %d = %d\n", arr[i], arr[j], target)
            }
        }
    }
}
