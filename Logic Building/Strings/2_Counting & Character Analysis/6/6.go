// Q6: Count how many times a given character appears in a string.
// Input: A string and a character
// Output: Frequency of the character

package main

import "fmt"

func main() {
    var s string
    var ch string
    fmt.Scanln(&s)
    fmt.Scanln(&ch)
    count := 0
    for _, c := range s {
        if string(c) == ch {
            count++
        }
    }
    fmt.Println(count)
}
