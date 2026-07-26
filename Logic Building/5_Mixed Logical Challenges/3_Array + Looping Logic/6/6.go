// Q6: Count how many elements are even at an even index.
// Input: Size n, then n integers
// Output: Count

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
    count := 0
    for i := 0; i < n; i++ {
        var v int
        fmt.Fscan(reader, &v)
        if i%2 == 0 && v%2 == 0 {
            count++
        }
    }
    fmt.Println(count)
}
