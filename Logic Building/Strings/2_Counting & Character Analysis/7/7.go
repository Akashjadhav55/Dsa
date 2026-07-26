// Q7: Count alphabets before 'm' and after 'm' in a string.
// Input: A string
// Output: Count before and after 'm'

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    s = strings.ToLower(s)
    before, after := 0, 0
    found := false
    for _, c := range s {
        if c == 'm' {
            found = true
        } else if c >= 'a' && c <= 'z' {
            if !found {
                before++
            } else {
                after++
            }
        }
    }
    fmt.Printf("Before m: %d\nAfter m: %d\n", before, after)
}
