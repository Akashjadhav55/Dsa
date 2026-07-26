// Q6: Remove duplicate characters from a string.
// Input: A string
// Output: String without duplicates

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
