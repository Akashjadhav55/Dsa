// Q2: Remove all spaces from a string.
// Input: A string
// Output: String without spaces

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    fmt.Println(strings.ReplaceAll(s, " ", ""))
}
