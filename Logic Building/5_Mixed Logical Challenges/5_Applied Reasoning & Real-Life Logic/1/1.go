// Q1: Given marks of students, find how many passed (>= 40).
// Input: Number of students, then their marks
// Output: Count of students who passed

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
        var m int
        fmt.Fscan(reader, &m)
        if m >= 40 {
            count++
        }
    }
    fmt.Println(count)
}
