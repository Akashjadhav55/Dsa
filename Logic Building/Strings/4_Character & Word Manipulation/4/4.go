// Q4: Replace all spaces with '_'.
// Input: A string
// Output: String with spaces replaced by '_'

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    fmt.Println(strings.ReplaceAll(s, " ", "_"))
}
