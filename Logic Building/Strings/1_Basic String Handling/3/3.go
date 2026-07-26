// Q3: Convert all characters of a string to uppercase.
// Input: A string
// Output: Uppercase string

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    fmt.Println(strings.ToUpper(s))
}
