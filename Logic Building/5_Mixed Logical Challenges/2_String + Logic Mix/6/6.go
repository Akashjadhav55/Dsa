// Q6: Count words that start and end with the same letter.
// Input: A sentence
// Output: Count of such words

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
    count := 0
    for _, w := range strings.Fields(line) {
        runes := []rune(w)
        if len(runes) > 0 && runes[0] == runes[len(runes)-1] {
            count++
        }
    }
    fmt.Println(count)
}
