// Q9: Print how many words start with a vowel.
// Input: A sentence
// Output: Count of words starting with a vowel

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    words := strings.Fields(s)
    count := 0
    for _, w := range words {
        first := strings.ToLower(string(w[0]))
        if first == "a" || first == "e" || first == "i" || first == "o" || first == "u" {
            count++
        }
    }
    fmt.Println(count)
}
