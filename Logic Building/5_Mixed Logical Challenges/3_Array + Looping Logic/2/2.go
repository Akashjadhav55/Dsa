// Q2: Count how many positive, negative, and zero elements are in an array.
// Input: Size n, then n integers
// Output: Count of each

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
    pos, neg, zero := 0, 0, 0
    for i := 0; i < n; i++ {
        var v int
        fmt.Fscan(reader, &v)
        if v > 0 {
            pos++
        } else if v < 0 {
            neg++
        } else {
            zero++
        }
    }
    fmt.Println("Positive:", pos)
    fmt.Println("Negative:", neg)
    fmt.Println("Zero:", zero)
}
