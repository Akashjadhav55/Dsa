// Q4: Find the shortest word in a sentence.
// Input: A sentence
// Output: The shortest word

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    words := strings.Fields(s)
    shortest := words[0]
    for _, w := range words {
        if len(w) < len(shortest) {
            shortest = w
        }
    }
    fmt.Println(shortest)
}
