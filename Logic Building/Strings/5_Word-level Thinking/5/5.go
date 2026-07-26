// Q5: Swap first and last words in a sentence.
// Input: A sentence
// Output: Sentence with swapped first and last words

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    words := strings.Fields(s)
    if len(words) >= 2 {
        words[0], words[len(words)-1] = words[len(words)-1], words[0]
    }
    fmt.Println(strings.Join(words, " "))
}
