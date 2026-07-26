// Q8: Print characters that are common in two strings.
// Input: Two strings
// Output: Common characters

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
    freq := make([]int, 26)
    for _, c := range s1 {
        freq[c-'a']++
    }
    result := ""
    for _, c := range s2 {
        if freq[c-'a'] > 0 {
            result += string(c) + " "
            freq[c-'a'] = 0
        }
    }
    fmt.Println(strings.TrimSpace(result))
}
