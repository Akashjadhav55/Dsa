// Q3: Find the longest word in a sentence.
// Input: A sentence
// Output: The longest word

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    words := strings.Fields(s)
    longest := words[0]
    for _, w := range words {
        if len(w) > len(longest) {
            longest = w
        }
    }
    fmt.Println(longest)
}
