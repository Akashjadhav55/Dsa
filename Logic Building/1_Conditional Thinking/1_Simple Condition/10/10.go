// Q10: Take a character and check whether it's uppercase, lowercase, a digit, or a special character.
// Input: A single character
// Output: "Uppercase", "Lowercase", "Digit", or "Special Character"

package main

import "fmt"

func main() {
    var ch rune
    fmt.Scanf("%c", &ch)

    switch {
    case ch >= 'A' && ch <= 'Z':
        fmt.Println("Uppercase")
    case ch >= 'a' && ch <= 'z':
        fmt.Println("Lowercase")
    case ch >= '0' && ch <= '9':
        fmt.Println("Digit")
    default:
        fmt.Println("Special Character")
    }
}
