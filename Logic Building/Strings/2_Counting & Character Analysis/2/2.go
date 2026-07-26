// Q2: Count the number of digits, letters, and special characters.
// Input: A string
// Output: Count of digits, letters, and special characters

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    digits, letters, special := 0, 0, 0
    for _, c := range s {
        if c >= '0' && c <= '9' {
            digits++
        } else if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') {
            letters++
        } else if c != ' ' {
            special++
        }
    }
    fmt.Printf("Digits: %d\nLetters: %d\nSpecial characters: %d\n", digits, letters, special)
}
