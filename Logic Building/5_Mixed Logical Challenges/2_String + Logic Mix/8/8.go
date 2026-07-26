// Q8: Check if two strings are rotations of each other.
// Input: Two strings
// Output: "Yes" or "No"

package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var s1, s2 string
    fmt.Fscan(reader, &s1)
    fmt.Fscan(reader, &s2)
    if len(s1) != len(s2) {
        fmt.Println("No")
    } else {
        combined := s1 + s1
        if strings.Contains(combined, s2) {
            fmt.Println("Yes")
        } else {
            fmt.Println("No")
        }
    }
}
