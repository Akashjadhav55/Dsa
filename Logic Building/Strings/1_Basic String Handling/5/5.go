// Q5: Count how many characters (excluding spaces) are in the string.
// Input: A string
// Output: Character count excluding spaces

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    count := 0
    for _, c := range s {
        if c != ' ' {
            count++
        }
    }
    fmt.Println(count)
}
