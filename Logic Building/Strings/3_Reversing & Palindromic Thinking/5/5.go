// Q5: Check if two strings are the reverse of each other.
// Input: Two strings
// Output: "Yes" or "No"

package main

import "fmt"

func main() {
    var s1, s2 string
    fmt.Scanln(&s1)
    fmt.Scanln(&s2)
    runes := []rune(s2)
    for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
        runes[i], runes[j] = runes[j], runes[i]
    }
    rev := string(runes)
    if s1 == rev {
        fmt.Println("Yes")
    } else {
        fmt.Println("No")
    }
}
