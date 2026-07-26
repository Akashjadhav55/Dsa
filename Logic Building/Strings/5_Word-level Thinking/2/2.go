// Q2: Count how many words have even length.
// Input: A sentence
// Output: Count of even-length words

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
        if len(w)%2 == 0 {
            count++
        }
    }
    fmt.Println(count)
}
