// Q8: Remove the first and last character and print remaining.
// Input: A string
// Output: String without first and last character

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    if len(s) <= 2 {
        fmt.Println("")
    } else {
        fmt.Println(s[1 : len(s)-1])
    }
}
