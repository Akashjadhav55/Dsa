// Q8: Capitalize the first letter of each word.
// Input: A sentence
// Output: Sentence with capitalized first letters

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    words := strings.Fields(s)
    for i, w := range words {
        words[i] = strings.ToUpper(string(w[0])) + strings.ToLower(w[1:])
    }
    fmt.Println(strings.Join(words, " "))
}
