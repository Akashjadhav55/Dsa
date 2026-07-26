// Q4: Convert all characters of a string to lowercase.
// Input: A string
// Output: Lowercase string

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    fmt.Println(strings.ToLower(s))
}
