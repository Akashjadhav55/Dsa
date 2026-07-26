// Q9: Swap case: uppercase to lowercase and vice versa.
// Input: A string
// Output: Case-swapped string

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    result := ""
    for _, c := range s {
        if c >= 'A' && c <= 'Z' {
            result += strings.ToLower(string(c))
        } else if c >= 'a' && c <= 'z' {
            result += strings.ToUpper(string(c))
        } else {
            result += string(c)
        }
    }
    fmt.Println(result)
}
