// Q6: Count how many words are in a sentence.
// Input: A sentence
// Output: Word count

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    s = strings.TrimSpace(s)
    if s == "" {
        fmt.Println(0)
    } else {
        fmt.Println(len(strings.Fields(s)))
    }
}
