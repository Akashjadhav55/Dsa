// Q2: Reverse each word in a sentence.
// Input: A sentence
// Output: Sentence with each word reversed

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
        runes := []rune(w)
        for j, k := 0, len(runes)-1; j < k; j, k = j+1, k-1 {
            runes[j], runes[k] = runes[k], runes[j]
        }
        words[i] = string(runes)
    }
    fmt.Println(strings.Join(words, " "))
}
