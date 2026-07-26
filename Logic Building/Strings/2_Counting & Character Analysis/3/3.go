// Q3: Count how many uppercase and lowercase letters a string has.
// Input: A string
// Output: Uppercase count and lowercase count

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    upper, lower := 0, 0
    for _, c := range s {
        if c >= 'A' && c <= 'Z' {
            upper++
        } else if c >= 'a' && c <= 'z' {
            lower++
        }
    }
    fmt.Printf("Uppercase: %d\nLowercase: %d\n", upper, lower)
}
