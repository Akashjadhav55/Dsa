// Q8: Count substrings that start and end with the same character.
// Input: A string
// Output: Count of such substrings

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    count := 0
    for i := 0; i < len(s); i++ {
        for j := i; j < len(s); j++ {
            if s[i] == s[j] {
                count++
            }
        }
    }
    fmt.Println(count)
}
