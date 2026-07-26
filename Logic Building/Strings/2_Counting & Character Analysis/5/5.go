// Q5: Count how many spaces are there in a sentence.
// Input: A sentence
// Output: Space count

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    count := 0
    for _, c := range s {
        if c == ' ' {
            count++
        }
    }
    fmt.Println(count)
}
