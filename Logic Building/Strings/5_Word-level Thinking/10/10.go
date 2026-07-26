// Q10: Remove extra spaces between words.
// Input: A sentence
// Output: Sentence with single spaces

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    fmt.Println(strings.Join(strings.Fields(s), " "))
}
