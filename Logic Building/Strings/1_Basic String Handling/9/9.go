// Q9: Print the ASCII value of each character in a string.
// Input: A string
// Output: ASCII values

package main

import (
    "fmt"
)

func main() {
    var s string
    fmt.Scanln(&s)
    for _, c := range s {
        fmt.Print(int(c), " ")
    }
    fmt.Println()
}
