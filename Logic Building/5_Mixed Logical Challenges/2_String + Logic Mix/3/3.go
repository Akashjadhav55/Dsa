// Q3: Reverse words in a string if their length is even.
// Input: A sentence
// Output: Modified sentence

package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func reverse(s string) string {
    runes := []rune(s)
    for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
        runes[i], runes[j] = runes[j], runes[i]
    }
    return string(runes)
}

func main() {
    reader := bufio.NewReader(os.Stdin)
    line, _ := reader.ReadString('\n')
    line = strings.TrimSpace(line)
    words := strings.Fields(line)
    for i, w := range words {
        if len(w)%2 == 0 {
            words[i] = reverse(w)
        }
    }
    fmt.Println(strings.Join(words, " "))
}
