// Q7: Toggle case for every alternate word in a sentence.
// Input: A sentence
// Output: Modified sentence

package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func toggleCase(s string) string {
    runes := []rune(s)
    for i, c := range runes {
        if c >= 'a' && c <= 'z' {
            runes[i] = c - 32
        } else if c >= 'A' && c <= 'Z' {
            runes[i] = c + 32
        }
    }
    return string(runes)
}

func main() {
    reader := bufio.NewReader(os.Stdin)
    line, _ := reader.ReadString('\n')
    line = strings.TrimSpace(line)
    words := strings.Fields(line)
    for i, w := range words {
        if i%2 == 1 {
            words[i] = toggleCase(w)
        }
    }
    fmt.Println(strings.Join(words, " "))
}
