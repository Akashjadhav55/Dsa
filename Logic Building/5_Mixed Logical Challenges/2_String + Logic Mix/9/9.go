// Q9: Find the word with maximum vowels in a sentence.
// Input: A sentence
// Output: Word with most vowels

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
    maxWord := ""
    maxCount := 0
    for _, w := range strings.Fields(line) {
        count := 0
        for _, c := range strings.ToLower(string(w)) {
            if strings.ContainsRune("aeiou", c) {
                count++
            }
        }
        if count > maxCount {
            maxCount = count
            maxWord = string(w)
        }
    }
    fmt.Println(maxWord)
}
