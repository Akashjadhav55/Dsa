// Q1: Remove all vowels from a string.
// Input: A string
// Output: String without vowels

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    result := ""
    for _, c := range s {
        if !strings.ContainsRune("aeiouAEIOU", c) {
            result += string(c)
        }
    }
    fmt.Println(result)
}
