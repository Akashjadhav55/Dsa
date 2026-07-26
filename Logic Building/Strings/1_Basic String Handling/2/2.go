// Q2: Print the first and last character of a string.
// Input: A string
// Output: First and last character

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    fmt.Printf("%c %c\n", s[0], s[len(s)-1])
}
