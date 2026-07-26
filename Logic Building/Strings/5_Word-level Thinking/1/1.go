// Q1: Print each word of a sentence on a new line.
// Input: A sentence
// Output: Each word on a new line

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    words := strings.Fields(s)
    for _, w := range words {
        fmt.Println(w)
    }
}
