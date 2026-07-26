// Q8: Compare two strings lexicographically.
// Input: Two strings
// Output: "String 1 comes first", "String 2 comes first", or "Equal"

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s1, s2 string
    fmt.Scanln(&s1)
    fmt.Scanln(&s2)
    result := strings.Compare(s1, s2)
    if result < 0 {
        fmt.Println("String 1 comes first")
    } else if result > 0 {
        fmt.Println("String 2 comes first")
    } else {
        fmt.Println("Equal")
    }
}
