// Q7: Keep only the first occurrence of each character.
// Input: A string
// Output: String with only first occurrences

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    seen := [256]bool{}
    result := ""
    for _, c := range s {
        if !seen[c] {
            seen[c] = true
            result += string(c)
        }
    }
    fmt.Println(result)
}
