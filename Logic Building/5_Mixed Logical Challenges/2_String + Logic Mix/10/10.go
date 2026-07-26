// Q10: Remove duplicate words from a sentence.
// Input: A sentence
// Output: Sentence without duplicate words

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
    line = strings.TrimSpace(line)
    seen := make(map[string]bool)
    var result []string
    for _, w := range strings.Fields(line) {
        word := string(w)
        if !seen[word] {
            seen[word] = true
            result = append(result, word)
        }
    }
    fmt.Println(strings.Join(result, " "))
}
