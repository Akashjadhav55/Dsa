// Q1: Check if two strings are anagrams (without using collections).
// Input: Two strings
// Output: "Anagrams" or "Not Anagrams"

package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var s1, s2 string
    fmt.Fscan(reader, &s1)
    fmt.Fscan(reader, &s2)
    s1 = strings.ToLower(s1)
    s2 = strings.ToLower(s2)
    if len(s1) != len(s2) {
        fmt.Println("Not Anagrams")
        return
    }
    freq := make([]int, 26)
    for _, c := range s1 {
        freq[c-'a']++
    }
    for _, c := range s2 {
        freq[c-'a']--
    }
    for _, f := range freq {
        if f != 0 {
            fmt.Println("Not Anagrams")
            return
        }
    }
    fmt.Println("Anagrams")
}
