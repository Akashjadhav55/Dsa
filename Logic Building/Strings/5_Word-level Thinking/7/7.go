// Q7: Count how many words contain the letter 'a'.
// Input: A sentence
// Output: Count of words containing 'a'

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
        if strings.Contains(strings.ToLower(w), "a") {
            count++
        }
    }
    fmt.Println(count)
}
