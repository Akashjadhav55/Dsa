// Q4: Check whether a string is a palindrome.
// Input: A string
// Output: "Palindrome" or "Not a Palindrome"

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    isPalin := true
    for i := 0; i < len(s)/2; i++ {
        if s[i] != s[len(s)-1-i] {
            isPalin = false
            break
        }
    }
    if isPalin {
        fmt.Println("Palindrome")
    } else {
        fmt.Println("Not a Palindrome")
    }
}
