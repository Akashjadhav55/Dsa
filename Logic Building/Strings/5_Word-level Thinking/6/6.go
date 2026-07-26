// Q6: Print all words that start and end with the same letter.
// Input: A sentence
// Output: Words starting and ending with same letter

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
        if strings.ToLower(string(w[0])) == strings.ToLower(string(w[len(w)-1])) {
            fmt.Println(w)
        }
    }
}
