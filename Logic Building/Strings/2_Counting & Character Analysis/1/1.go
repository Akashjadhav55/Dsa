// Q1: Count how many vowels and consonants are in a string.
// Input: A string
// Output: Vowel count and consonant count

package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanln(&s)
    s = strings.ToLower(s)
    vowels, consonants := 0, 0
    for _, c := range s {
        if c >= 'a' && c <= 'z' {
            if c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' {
                vowels++
            } else {
                consonants++
            }
        }
    }
    fmt.Printf("Vowels: %d\nConsonants: %d\n", vowels, consonants)
}
