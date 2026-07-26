// Q10: Check whether the string is empty or not.
// Input: A string
// Output: "Empty" or "Not Empty"

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    if s == "" {
        fmt.Println("Empty")
    } else {
        fmt.Println("Not Empty")
    }
}
