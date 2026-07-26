// Q10: Find the sum of all elements at odd indices.
// Input: Size n, then n integers
// Output: Sum of elements at odd indices

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
    sum := 0
    for i := 0; i < n; i++ {
        var v int
        fmt.Fscan(reader, &v)
        if i%2 != 0 {
            sum += v
        }
    }
    fmt.Println(sum)
}
