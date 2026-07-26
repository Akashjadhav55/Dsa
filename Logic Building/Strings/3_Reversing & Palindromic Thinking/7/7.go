// Q7: Print the second half of the string in reverse.
// Input: A string
// Output: Second half reversed

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    mid := len(s) / 2
    runes := []rune(s[mid:])
    for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
        runes[i], runes[j] = runes[j], runes[i]
    }
    fmt.Println(string(runes))
}
