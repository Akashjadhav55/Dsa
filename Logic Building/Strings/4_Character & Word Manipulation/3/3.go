// Q3: Replace all vowels with '*'.
// Input: A string
// Output: String with vowels replaced by '*'

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
        if strings.ContainsRune("aeiouAEIOU", c) {
            result += "*"
        } else {
            result += string(c)
        }
    }
    fmt.Println(result)
}
