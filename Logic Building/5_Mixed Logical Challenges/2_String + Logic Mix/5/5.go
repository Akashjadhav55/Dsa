// Q5: Print characters that appear more than once (without map).
// Input: A string
// Output: Repeated characters

package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    line, _ := reader.ReadString('\n')
    line = strings.TrimSpace(strings.ToLower(line))
    freq := make([]int, 26)
    for _, c := range line {
        if c >= 'a' && c <= 'z' {
            freq[c-'a']++
        }
    }
    result := ""
    for i := 0; i < 26; i++ {
        if freq[i] > 1 {
            result += string(rune('a' + i)) + " "
        }
    }
    fmt.Println(strings.TrimSpace(result))
}
