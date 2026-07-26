// Q3: Reverse the order of words in a sentence.
// Input: A sentence
// Output: Words in reverse order

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    words := strings.Fields(s)
    for i, j := 0, len(words)-1; i < j; i, j = i+1, j-1 {
        words[i], words[j] = words[j], words[i]
    }
    fmt.Println(strings.Join(words, " "))
}
