// Q6: Print the middle character(s) of a string.
// Input: A string
// Output: Middle character(s)

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    length := len(s)
    if length%2 == 0 {
        fmt.Printf("%c%c\n", s[length/2-1], s[length/2])
    } else {
        fmt.Printf("%c\n", s[length/2])
    }
}
