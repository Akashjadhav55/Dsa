// Q4: Find the frequency of each character in a string (without map).
// Input: A string
// Output: Frequency of each character

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    freq := [256]int{}
    for _, c := range s {
        freq[c]++
    }
    for i := 0; i < 256; i++ {
        if freq[i] > 0 {
            fmt.Printf("%c: %d\n", i, freq[i])
        }
    }
}
