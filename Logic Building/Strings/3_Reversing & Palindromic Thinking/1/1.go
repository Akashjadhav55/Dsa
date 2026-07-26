// Q1: Reverse a string without using built-in reverse.
// Input: A string
// Output: Reversed string

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    runes := []rune(s)
    for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
        runes[i], runes[j] = runes[j], runes[i]
    }
    fmt.Println(string(runes))
}
