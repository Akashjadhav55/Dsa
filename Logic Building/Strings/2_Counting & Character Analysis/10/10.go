// Q10: Count how many words end with 's'.
// Input: A sentence
// Output: Count of words ending with 's'

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
        if w[len(w)-1] == 's' {
            count++
        }
    }
    fmt.Println(count)
}
